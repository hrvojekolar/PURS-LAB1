#include <Arduino.h>

#define LED_CRVENA 22
#define LED_ZELENA 21
//#define SKLOPKA 32
#define SKLOPKA 33

void setup() {
	pinMode(LED_CRVENA, OUTPUT);
	pinMode(LED_ZELENA, OUTPUT);
	pinMode(SKLOPKA, INPUT);
	digitalWrite(LED_CRVENA, LOW);
	digitalWrite(LED_ZELENA, LOW);
}
void loop() {
	if(digitalRead(SKLOPKA)){
		digitalWrite(LED_CRVENA, HIGH);
		digitalWrite(LED_ZELENA, LOW);
	}else{
		digitalWrite(LED_CRVENA, LOW);
		digitalWrite(LED_ZELENA, HIGH);
	}
}

