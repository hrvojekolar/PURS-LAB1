#include <Arduino.h>

//#define LED_PIN 22
#define LED_PIN 21

void setup(){
	pinMode(LED_PIN, OUTPUT);
	digitalWrite(LED_PIN, LOW);

}

void loop(){
	digitalWrite(LED_PIN, HIGH);
	//delay(500);
	delay(1000);
	digitalWrite(LED_PIN, LOW);
	//delay(500);
	delay(1000);
}

