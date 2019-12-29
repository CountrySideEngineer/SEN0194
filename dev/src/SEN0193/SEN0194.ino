#include "Arduino.h"

#define	SEN0194_ANALOG_PIN	(A4)

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	int value = 0;
	value = analogRead(SEN0194_ANALOG_PIN);
	Serial.print("Sensor value is ");
	Serial.println(value);

	delay(1000);
}
