//RocksatX2015

#include <Arduino.h>
#include "RocksatX2015H.h"

RocksatX2015::RocksatX2015()
{
    // init pins 
    
    // cameras
    pinMode(camera1_trig, OUTPUT);
    digitalWrite(camera1_trig, LOW);
    pinMode(camera2_trig, OUTPUT);
    digitalWrite(camera2_trig, LOW);
    
}

void RocksatX2015::triggerCameras()
{
    digitalWrite(camera1_trig, HIGH);
    digitalWrite(camera2_trig, HIGH);
    delay(250);
    digitalWrite(camera1_trig, LOW);
    digitalWrite(camera2_trig, LOW);
}

