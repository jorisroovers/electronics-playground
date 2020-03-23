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

## secrets.yaml
The `window_opener.yaml` has secret values which are read by ESPHome from  `secrets.yaml` at compile-time.
So for this to work, you'll need to create a `secrets.yaml` file that looks like the following.
```yaml
deviceid: my_device_id
devicename: "Human Friendly Device Name"

wifi_ssid: mywifissid
wifi_password: "mypassword"
wifi_static_ip: 10.0.0.2
wifi_gateway: 10.0.0.1
wifi_subnet: 255.255.255.0
wifi_fallback_ap_password: "WifiFallbackPassword"
wifi_fallback_ap_ssid: ESP-FallbackWifi
api_password: "apipassword"
ota_password: "otapassword"
```

## Instructions

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
Use the 'integrations' under homeassistant to connect the device.