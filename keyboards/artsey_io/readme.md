# artsey_io

![artsey_io](https://artsey.io/logo.png)

ARTSEY is a one-handed keyboard system created by Greg Leo using 8 keys in a 2x4 layout. The system is designed to be easy to learn, comfortable to use, and fast enough for practical use.

* Keyboard Maintainer: [Corintho Assuncao](https://github.com/corintho)
* Hardware Supported: rp2040
* Hardware Availability:  https://github.com/artseyio/thepaintbrush?tab=readme-ov-file

Make example for this keyboard (after setting up your build environment):

    make artsey_io:default

Flashing example for this keyboard:

    Since this uses an rp2040, it should be copied over to the drive that becomes available after mounging it in bootloader mode.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
