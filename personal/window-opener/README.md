Programs: 
- KiCad
- Fritzing

Todo:
[ ] PCB
[ ] Single power cable
[ ] Enclosures
[ ] Clean up Fritzing breadboard design
[ ] Reed switch
[ ] Home assistant automation

# ESPHome

# Flashing firmware to ESP8266 device
The first time doing this, the ESP device will need to be connected to your computer using a serial connection.
After the first run, you can do this over Wifi (ESPHome supports over-the-air firmware updates).

```sh
virtualenv .venv && source .venv/bin/activate
pip install esphome

esphome esphome/window_opener.yaml run
# Specify serial port
esphome esphome/window_opener.yaml run --upload-port /dev/cu.usbserial-143230
```

# Homeassistant integration
Use the 'integrations' under homeassistant.