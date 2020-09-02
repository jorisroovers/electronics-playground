from time import sleep
import serial

ser = serial.Serial('/dev/cu.usbmodem1411', 9600)

counter = 1
while True:
    counter += 1
    string = "test " + str(counter) + "\n"
    ser.writelines(string)
    print string,
    sleep(1)
