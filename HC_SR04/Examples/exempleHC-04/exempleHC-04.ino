#include "HC_SR04.h"

HC_SR04 capteur(9, 10);

void setup() {
    Serial.begin(9600);
}

void loop() {
    float distance = capteur.capteurDistance();
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
}
