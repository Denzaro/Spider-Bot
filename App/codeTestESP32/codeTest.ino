#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

const int ledPin = 2;

void setup(){
  SerialBT.begin("ESP32-Bluetooth");
  pinMode(ledPin, OUTPUT);
}

void loop(){
  if (SerialBT.available()){
    char c = SerialBT.read();
    if(c == 'u'){
      digitalWrite(ledPin, HIGH);
    }else if(c == 'd'){
      digitalWrite(ledPin, LOW);
    }else if(c == 'l'){
      digitalWrite(ledPin, HIGH);
    }else if(c == 'r'){
      digitalWrite(ledPin, LOW);
    }
  }
}