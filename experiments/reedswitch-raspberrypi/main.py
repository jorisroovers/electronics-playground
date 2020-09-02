import serial
import sys

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print "Usage: %s [serialdevice]" % sys.argv[0]
        exit(1)

    ser = serial.Serial(sys.argv[1], 9600)

    while True:
        print ser.readline()
