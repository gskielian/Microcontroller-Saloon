#!/usr/bin/python
import serial, time
ser = serial.Serial('/dev/tty.usbmodemf1411', 9600, timeout = 0.1)



def send( theinput ):
  ser.write( theinput )
  while True:
    try:
      time.sleep(0.01)
      #state = ser.readline()
      #print state
      break
    except:
      pass
  time.sleep(0.1)

def send_and_receive( theinput ):
  ser.write( theinput )
  while True:
    try:
      time.sleep(0.01)
      state = ser.readline()
      print state
      return state
    except:
      pass
  time.sleep(0.1)

while True:
  send_and_receive('1')
  time.sleep(1)
