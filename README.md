# avr16dd14-platformio-guide

## Setup 
- install [pymcuprog](https://pypi.org/project/pymcuprog/) 'pip install pymcuprog'
- setup [PlatformIO CLI](https://docs.platformio.org/en/stable/core/index.html) and setup a project per their guide.
  - Make sure to setup your udev rules and correct access to ports
- Setup [atmelmegaavr](https://registry.platformio.org/platforms/platformio/atmelavr/installation) for platformIO
- For AVR16DD14 need to create custom board json. Example created here [boards/avr16dd14.json](avr16dd14.json). Setup following [this guide](https://docs.platformio.org/en/stable/platforms/creating_board.html)
- Write some code!

## Uploading
- Using the example platformio.ini file, you can upload the code to the device using the following command:
```bash 
pio run --target upload
```
Note: Ensure you change the device port to the correct port for your programming device found in the /dev/ directory.

## Wiring
Depends on your setup. For my example I used the following [TTL to USB adapter](https://www.amazon.com/gp/product/B08BNDLQSZ/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&th=1)
Then connect the following pins:
VCC -> VCC
GND -> GND
TX -> RX with a BAT85 diode in series. Band side towards the TX pin.
RX -> UPDI pin

More info [Here](https://github.com/SpenceKonde/DxCore/blob/master/Wiring.md)
