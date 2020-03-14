# Micropython

```sh
virtualenv .venv && .venv/bin/activate
pip install esptool==2.8

export SERIAL_DEVICE="/dev/cu.usbserial-142230"
export FIRMWARE="esp8266-20191220-v1.12.bin"

# Read info from device
esptool.py --port $SERIAL_DEVICE chip_id
esptool.py --port $SERIAL_DEVICE flash_id

# Optional erase flash:
# esptool.py --port $SERIAL_DEVICE erase_flash

# Write micropython to ROM
esptool.py --port $SERIAL_DEVICE --baud 460800 write_flash -fm dio --verify --flash_size=detect 0 $FIRMWARE

# `screen` can be used to make a serial connection on macOS to the micropython REPL
# To exit screen session, type CTRL+A, followed by CTRL+\, then answer 'y' on the exit prompt
screen $SERIAL_DEVICE 115200

# Install Ampy to be able to copy files over to the ROM (at which point the python REPL won't work anymore)
pip install adafruit-ampy==1.0.7

# copy main.py to device
ampy --port $SERIAL_DEVICE put main.py

# Reset MCU for program to start running
ampy --port $SERIAL_DEVICE reset --hard
```