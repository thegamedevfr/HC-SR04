#ifndef HC_SR04_H
#define HC_SR04_H

#include "Arduino.h"

class HC_SR04 {
public:
    HC_SR04(int trigPin, int echoPin);
    float capteurDistance();

private:
    int _trigPin;
    int _echoPin;
};

#endif