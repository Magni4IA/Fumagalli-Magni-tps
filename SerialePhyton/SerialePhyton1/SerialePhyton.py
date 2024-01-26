import time
import serial

arduino = serial.Serial("COM5", 9600)

print("pronto a ricevere")

while(True):
    print (arduino.readline())