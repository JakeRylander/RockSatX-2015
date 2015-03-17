#include "RocksatX2015H.h"

void setup() {

  float time; 
   
  Serial1.begin(19200);
  Serial1.print("UPR RockSatX 2015 Payload alive T(sec)= ");
  
  time = millis(); time = ( (time - 240000) / 1000 ); 
  
  Serial1.println(time);
  
  RocksatX2015 payload;
  
  payload.triggerCameras();                 
  
  Serial1.print("Cameras on T(sec) = ");
  time = millis(); time = ( (time - 240000) / 1000 );
  Serial1.println(time);
  
  while(analogRead(Launch) < 2000 ){}
  Serial1.print("Launch T(sec)= ");
    time = millis(); time = ( (time - 240000) / 1000 );
  Serial1.println(time);
  
  while(analogRead(SkirtOff) < 2000 ){}
  Serial1.print("Skirt Off T(sec)= ");
    time = millis(); time = ( (time - 240000) / 1000 );
  Serial1.println(time);
  
  while(analogRead(Proximity_sensor) > 100){}
  Serial1.print("Proximity Sensor Done, Deploy T(sec)= ");
    time = millis(); time = ( (time - 240000) / 1000 );
  Serial1.println(time);
  
  
  payload.triggerCameras();
  Serial1.print("Going back home T(sec)= ");
    time = millis(); time = ( (time - 240000) / 1000 );
  Serial1.println(time);
}

void loop() {
}
