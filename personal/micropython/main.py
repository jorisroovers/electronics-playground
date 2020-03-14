# main.py is executed after boot.py is executed
from time import sleep
from machine import Pin


while True:
    pin = Pin(4, Pin.OUT, value=1) # set pin high on creation
    sleep(1.0)
    pin.value(0)
    sleep(0.2)
    pin.value(1)
    sleep(0.2)
    pin.value(0)
    sleep(0.2)