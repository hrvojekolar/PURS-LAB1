#include <Arduino.h>

#define LED_PIN 22

void setup(){
	Serial.begin(9600);
	pinMode(LED_PIN, OUTPUT);

}

void loop(){
	digitalWrite(LED_PIN, HIGH);
	Serial.println("Led upaljen");
	delay(500);
	digitalWrite(LED_PIN, LOW);
	Serial.println("Led ugašen");
	delay(500);
}

