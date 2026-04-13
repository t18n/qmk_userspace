# Dilemma Max (4x6+4) `t18n` keymap

[Official Documentation](https://docs.bastardkb.com/bg_dilemma/customize.html)

## Build

GitHub Actions:

1. Push your changes to GitHub
2. Wait for the workflow to build `bastardkb/dilemma/4x6_4:t18n`
3. Download the generated `.uf2` firmware file

## Flash

Follow [flashing guide](https://docs.bastardkb.com/fw/flashing.html#update-button)

1. Connect the half you want to flash over USB
2. Double-tap the `UPDATE` or `RESET` button on the top of the keyboard within about 500 ms
3. Wait for the `RPI-RP2` USB drive to appear
4. Copy the `.uf2` firmware file to `RPI-RP2`
5. Wait for the drive to disappear and the keyboard to reboot

If your keymap has a `QK_BOOT` key, you can use that instead of pressing the button.

## Tools

For more visual approach:

https://config.qmk.fm/#/bastardkb/dilemma/4x6_4/LAYOUT
