#include <HardwareSerial.h>

HardwareSerial MySerial(0);

// 밑 : COM8
// 위 : COM12 (카메라)

// 현재 COM8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  MySerial.begin(9600, SERIAL_8N1, -1, -1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
    MySerial.write(Serial.read());

  if(MySerial.available())
    Serial.write(MySerial.read());
}
