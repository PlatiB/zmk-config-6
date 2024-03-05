# zmk-config

## Keymap

This is a [ZMK](https://zmk.dev) config repo for my 34-38 key split keyboards, arranged in 3 rows of 5 columns with 2 or 3 thumb keys on each side.
Currently these keyboards are:
- [Totem](https://github.com/GEIGEIGEIST/zmk-config-totem) (38 keys)
- [Corne-ish Zen](https://lowprokb.ca/products/corne-ish-zen) (36 keys)
- [Hypergolic (1.2 BM variant)](https://github.com/davidphilipbarr/hypergolic) (34 keys)

It mainly uses three non-base layers activated through two thumb keys, along with combos. It has <kbd>Ctrl</kbd>/<kbd>Shift</kbd> thumb hold-taps along with home row mods.

OS-dependent shortcuts are present on the `NAV` layer, e.g. for Windows:
- `Win Close`: <kbd>Alt</kbd><kbd>F4</kbdy>
- `Tab Next`: <kbd>Ctrl</kbd><kbd>Tab</kbd>
- `Tab Prev`: <kbd>Ctrl</kbd><kbd>Shift</kbd><kbd>Tab</kbd>
- `Tab Close`: <kbd>Ctrl</kbd><kbd>F4</kbd>
- `Desk Next`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Right</kbd>
- `Desk Prev`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Left</kbd>
- `Win Next`: <kbd>Alt</kbd><kbd>Tab</kbd> (hold Alt while layer active) using zmkfirmware/zmk#1366
- `Win Prev`: <kbd>Alt</kbd><kbd>Shift</kbd><kbd>Tab</kbd> (hold Alt while layer active)

Below representation was generated with [`keymap-drawer`](https://github.com/caksoylar/keymap-drawer) -- check out the automatically generated layouts using the [automated Github workflow](https://github.com/caksoylar/keymap-drawer/tree/main#setting-up-an-automated-drawing-workflow) for each keyboard in the [`keymap-drawer` folder](keymap-drawer/), which is always up to date with the config.

![Keymap Representation](./keymap-drawer/corneish_zen.svg?raw=true "Keymap Representation")

See my [QMK userspace](https://github.com/caksoylar/qmk_userspace/) for equivalent keymap definitions for QMK.

## LED indicators widget

Some keyboards in this repo include an indicator widget utilizing an RGB LED, like the user LEDs on a Xiao BLE.
This widget is a ZMK module housed in [`zmk-rgbled-widget`](https://github.com/caksoylar/zmk-rgbled-widget) -- check out the repo and the instructions to use it with your keyboards!

## ZMK customizations

I use a custom ZMK branch referenced in [west.yml](config/west.yml) which contains a few extras, namely [mouse keys](https://github.com/zmkfirmware/zmk/pull/778) used in the `MSE` layer, [swapper behavior](https://github.com/zmkfirmware/zmk/pull/1366) and [display improvements for the Corne-ish Zen](https://gist.github.com/caksoylar/c411313990978e1903c244f03039187a).
For a variant of my configuration tailored for stock ZMK, check out the [`stock` branch](https://github.com/caksoylar/zmk-config/tree/stock).

## Custom shields

This repo also contains shield definitions for a few keyboards using Pro Micro format daughterboards in `boards/shields/`:
- [`choc_ergo`](https://keypcb.xyz/choc_ergo)
- [`hypergolic`](https://github.com/davidphilipbarr/hypergolic) -- you should probably use [the official Cradio shield](https://github.com/zmkfirmware/zmk/tree/main/app/boards/shields/cradio/) instead
- [`ffkb` v1](https://fingerpunch.xyz/product/faux-fox-keyboard/) with an OLED, building upon [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-ffkb) and [NCKiser's](https://github.com/NCKiser/zmk-ffkb) definitions
- [`swweeep`](https://github.com/sadekbaroudi/sweep36) using [sadekbaroudi's](https://github.com/sadekbaroudi/zmk-swweeep) definition
