#include <Arduino.h>

#define LED_CRVENA 22
#define LED_ZELENA 21

char slovo;

void setup(){
	Serial.begin(9600);
	pinMode(LED_CRVENA, OUTPUT);
	pinMode(LED_ZELENA, OUTPUT);

	digitalWrite(LED_CRVENA, LOW);
	digitalWrite(LED_ZELENA, LOW);
}

void loop(){
	if (Serial.available() > 0) {
		slovo = Serial.read();
		Serial.println(slovo);
		if(slovo == 'c'){
			digitalWrite(LED_CRVENA, HIGH);
		}else if(slovo == 'z'){
			digitalWrite(LED_ZELENA, HIGH);
		}else if(slovo == 'p'){
			digitalWrite(LED_CRVENA, HIGH);
			digitalWrite(LED_ZELENA, HIGH);
		}
		else if(slovo == 'o'){
			digitalWrite(LED_CRVENA, LOW);
			digitalWrite(LED_ZELENA, LOW);
		}
	}
}


