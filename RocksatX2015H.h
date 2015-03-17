#ifndef RocksatX2015H_H
#define RocksatX2015H_H

#include <Arduino.h>

// --------------- Arduino pins definitions ------------------

//analogs inputs
#define Proximity_sensor A3
#define Launch A0
#define SkirtOff A1
#define PowerOff A2

//GoPro cameras
//side camera pins
#define camera1_trig 23

//bottom camera
#define camera2_trig 25

class RocksatX2015 
  {
    
    public:
        RocksatX2015();
        ~RocksatX2015(){}
        void triggerCameras();
};

#endif
