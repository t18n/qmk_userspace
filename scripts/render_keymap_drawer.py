#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
from pathlib import Path


def read_logical_lines(path: Path) -> list[str]:
    logical_lines: list[str] = []
    current = ""
    for raw_line in path.read_text().splitlines():
        line = re.sub(r"//.*", "", raw_line).rstrip()
        if not line:
            continue
        if line.endswith("\\"):
            current += line[:-1] + " "
            continue
        current += line
        logical_lines.append(current.strip())
        current = ""
    if current.strip():
        logical_lines.append(current.strip())
    return logical_lines


def parse_macros(*paths: Path) -> tuple[dict[str, str], dict[str, tuple[list[str], str]]]:
    object_macros: dict[str, str] = {}
    function_macros: dict[str, tuple[list[str], str]] = {}

    for path in paths:
        for line in read_logical_lines(path):
            if not line.startswith("#define "):
                continue
            rest = line[len("#define ") :].strip()
            func_match = re.match(r"([A-Za-z0-9_]+)\(([^)]*)\)\s*(.*)", rest)
            if func_match:
                name, params, body = func_match.groups()
                function_macros[name] = (
                    [param.strip() for param in params.split(",") if param.strip()],
                    body.strip(),
                )
                continue

            obj_match = re.match(r"([A-Za-z0-9_]+)\s+(.*)", rest)
            if obj_match:
                name, body = obj_match.groups()
                object_macros[name] = body.strip()

    return object_macros, function_macros


def split_top_level(text: str, delimiter: str = ",") -> list[str]:
    parts: list[str] = []
    current: list[str] = []
    depth = 0

    for char in text:
        if char == "(":
            depth += 1
        elif char == ")":
            depth -= 1

        if char == delimiter and depth == 0:
            part = "".join(current).strip()
            if part:
                parts.append(part)
            current = []
            continue

        current.append(char)

    tail = "".join(current).strip()
    if tail:
        parts.append(tail)
    return parts


def expand_object_macros(text: str, object_macros: dict[str, str]) -> str:
    changed = True
    while changed:
        changed = False
        for name, body in object_macros.items():
            updated = re.sub(rf"\b{re.escape(name)}\b", body, text)
            if updated != text:
                text = updated
                changed = True
    return text


def parse_call(text: str) -> tuple[str, list[str]] | None:
    text = text.strip()
    match = re.match(r"([A-Za-z0-9_]+)\s*\(", text)
    if not match:
        return None

    name = match.group(1)
    start = text.index("(", match.start(1))
    depth = 0
    for index in range(start, len(text)):
        char = text[index]
        if char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
            if depth == 0 and index == len(text) - 1:
                inner = text[start + 1 : index]
                return name, split_top_level(inner)
    return None


def expand_expression(
    text: str, object_macros: dict[str, str], function_macros: dict[str, tuple[list[str], str]]
) -> str:
    text = expand_object_macros(text.strip(), object_macros)
    parsed = parse_call(text)
    if not parsed:
        return text

    name, args = parsed
    expanded_args = [expand_expression(arg, object_macros, function_macros) for arg in args]

    if name == "LAYOUT":
        return ", ".join(expanded_args)

    if name not in function_macros:
        return text

    params, body = function_macros[name]
    result = body

    if "__VA_ARGS__" in result:
        result = result.replace("__VA_ARGS__", ", ".join(expanded_args))

    for param, arg in zip(params, expanded_args):
        result = re.sub(rf"\b{re.escape(param)}\b", arg, result)

    return expand_expression(result, object_macros, function_macros)


def extract_layer_call(source: str, layer_symbol: str) -> str:
    marker = f"[{layer_symbol}] ="
    start = source.index(marker) + len(marker)
    remainder = source[start:].lstrip()
    expr_start = start + len(source[start:]) - len(remainder)
    depth = 0
    for index in range(expr_start, len(source)):
        char = source[index]
        if char == "(":
            depth += 1
        elif char == ")":
            depth -= 1
            if depth == 0:
                return source[expr_start : index + 1]
    raise ValueError(f"Could not parse layer {layer_symbol}")


def key_label(token: str) -> str:
    token = token.strip()

    if token == "_______":
        return "{t: TRNS, type: trans}"
    if token == "XXXXXXX":
        return '""'

    aliases = {
        "QK_CLEAR_EEPROM": "Clear",
        "BL_TOGG": "BL",
        "RGB_TOG": "RGB",
        "RGB_MOD": "RGB+",
        "RGB_MODE_FORWARD": "RGB+",
        "KC_MUTE": "Mute",
        "KC_TAB": "Tab",
        "KC_LSFT": "Shift",
        "KC_CAPS": "Caps",
        "KC_BSPC": "Bspc",
        "KC_ENTER": "Enter",
        "KC_GRV": '"`"',
        "KC_GRAVE": '"`"',
        "KC_QUOTE": "\"'\"",
        "KC_SCLN": '";"',
        "KC_COMM": '","',
        "KC_DOT": '"."',
        "KC_SLSH": '"/"',
        "KC_MINUS": '"-"',
        "KC_MINS": '"-"',
        "KC_EQUAL": '"="',
        "KC_EQL": '"="',
        "KC_LBRC": '"["',
        "KC_RBRC": '"]"',
        "KC_BSLS": '"\\\\"',
        "KC_PIPE": '"|"',
        "KC_LCBR": '"{"',
        "KC_RCBR": '"}"',
        "KC_LGUI": "Gui",
        "KC_LCTL": "Ctl",
        "KC_LALT": "Alt",
        "KC_ESC": "Esc",
        "KC_SPC": "Spc",
        "KC_MS_BTN1": "M1",
        "KC_MS_BTN2": "M2",
        "KC_MS_BTN3": "M3",
        "KC_MS_L": "MsL",
        "KC_MS_D": "MsD",
        "KC_MS_U": "MsU",
        "KC_MS_R": "MsR",
        "KC_WH_L": "WhL",
        "KC_WH_D": "WhD",
        "KC_WH_U": "WhU",
        "KC_WH_R": "WhR",
        "KC_LEFT": "Left",
        "KC_DOWN": "Down",
        "KC_UP": "Up",
        "KC_RIGHT": "Right",
        "KC_HOME": "Home",
        "KC_PGDN": "PgDn",
        "KC_PGUP": "PgUp",
        "KC_END": "End",
        "HYPR_T(KC_SPC)": "{t: Spc, h: Hyper}",
    }
    if token in aliases:
        return aliases[token]

    mt_match = re.fullmatch(r"MT\(MOD_([A-Z]+),\s*KC_([A-Z0-9_]+)\)", token)
    if mt_match:
        hold, tap = mt_match.groups()
        hold_label = {
            "LALT": "Alt",
            "LCTL": "Ctl",
            "LGUI": "Gui",
            "LSFT": "Shift",
        }.get(hold, hold)
        return f"{{t: {simple_kc_label(f'KC_{tap}')}, h: {hold_label}}}"

    lt_match = re.fullmatch(r"LT\((_[A-Z0-9_]+),\s*KC_([A-Z0-9_]+)\)", token)
    if lt_match:
        layer, tap = lt_match.groups()
        return f"{{t: {simple_kc_label(f'KC_{tap}')}, h: {layer[1:].title()}}}"

    mo_match = re.fullmatch(r"MO\((_[A-Z0-9_]+)\)", token)
    if mo_match:
        return mo_match.group(1)[1:].title()

    if token.startswith("KC_F") and token[4:].isdigit():
        return token[3:]

    if token.startswith("KC_"):
        return simple_kc_label(token)

    return token


def simple_kc_label(token: str) -> str:
    raw = token[3:]
    if len(raw) == 1:
        return raw
    if raw.isdigit():
        return raw
    mapping = {
        "ESC": "Esc",
        "TAB": "Tab",
        "SPC": "Spc",
        "BSPC": "Bspc",
        "ENTER": "Enter",
        "QUOTE": "\"'\"",
        "GRV": '"`"',
        "MINS": '"-"',
        "EQL": '"="',
    }
    return mapping.get(raw, raw.title())


def format_row(tokens: list[str]) -> str:
    return "    - [" + ", ".join(key_label(token) for token in tokens) + "]"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--keymap", required=True, type=Path)
    parser.add_argument("--wrappers", required=True, type=Path)
    parser.add_argument("--layout", required=True, type=Path)
    parser.add_argument("--output", required=True, type=Path)
    args = parser.parse_args()

    object_macros, function_macros = parse_macros(args.wrappers, args.keymap)
    source = args.keymap.read_text()
    layout_yaml = args.layout.read_text().rstrip()

    layer_map = [
        ("_DEFAULT_LAYER_1", "Base"),
        ("_LOWER", "Lower"),
        ("_RAISE", "Raise"),
    ]

    output_lines = [layout_yaml, "", "layers:"]

    for layer_symbol, layer_name in layer_map:
        call = extract_layer_call(source, layer_symbol)
        expanded = expand_expression(call, object_macros, function_macros)
        tokens = split_top_level(expanded)
        if len(tokens) != 56:
            raise ValueError(f"{layer_name} expanded to {len(tokens)} tokens, expected 56")

        rows = [
            tokens[0:12],
            tokens[12:24],
            tokens[24:36],
            tokens[36:48],
            tokens[48:56],
        ]
        output_lines.append(f"  {layer_name}:")
        output_lines.extend(format_row(row) for row in rows)
        output_lines.append("")

    args.output.write_text("\n".join(output_lines).rstrip() + "\n")


if __name__ == "__main__":
    main()
