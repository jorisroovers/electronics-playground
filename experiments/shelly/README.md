# Shelly

Connect UART following !(shelly1 pinout)[shelly1_pinout.jpg].

You also need to get into flash mode by connecting GPIO0 to ground.

Config taken from https://esphome-configs.io/devices/shelly-1/

```sh
virtualenv .venv && source .venv/bin/activate
pip install esphome

esphome shelly1.yaml run
```