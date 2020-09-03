# ESPHome

# Flashing firmware to ESP8266 device
```sh
virtualenv .venv && source .venv/bin/activate
pip install esphome

esphome experiment.yaml run
esphome experiment.yaml run --upload-port /dev/cu.usbserial-143230
```

# Dashboard

```sh
pip install tornado esptool
# Run ESPHome Dashboard for easy mgmt of ESPhome enabled devices
pip install tornado esptool
# config/ is the directory with ESPHome configs you want to manage
esphome config/ dashboard
# So if you're in the current dir:
esphome . dashboard

# The open local webbrowser on http://localhost:6052
```

# Homeassistant integration
Use the 'integrations' under homeassistant.