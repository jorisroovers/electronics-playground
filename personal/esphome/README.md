# ESPHome

# Flashing firmware to ESP8266 device
```sh
virtualenv .venv && source .venv/bin/activate
pip install esphome

esphome experiment.yaml run
esphome experiment.yaml run --upload-port /dev/cu.usbserial-143230
```

# Homeassistant integration
Use the 'integrations' under homeassistant.