/*
 * $OpenBSD: template.ino,v 1.1 2012/04/24 06:37:32 jasper Exp $
 *
 * Arduino projects run something like this:
 *	main() {
 *		init(); // arduino private setup
 *		setup(); // your setup goes here
 *		while(1) {
 *			loop(); // your main loop
 *		}
 *	}
 *
 * Arduino reference is at /usr/local/share/doc/arduino/reference/
 */

#ifdef __cplusplus
extern "C" {
#endif
// helloword.ino
// 
// A simple test sketch that blinks the on-board LED,
// or any LED connected to digital pin 13.

/*
// The pin to manipulate.
int digitalPin = 13;

void setup() {
        // Set the pin as an output pin.
            pinMode(digitalPin, OUTPUT);
}

void loop() {
        // Set the pin HIGH
            digitalWrite(digitalPin, HIGH);
                // spin fast
                for (int i = 0; i < 5;i++)
                {
            digitalWrite(digitalPin, HIGH);
                    delay(100);
                    // Set the pin LOW
                            digitalWrite(digitalPin, LOW);
                                // Wait for another second
                                    delay(100);
                    
                }
                delay(1000);
} 
*/

int motorPin = A0; // pin that turns on the motor
int blinkPin = 13; // pin that turns on the LED
int watertime = 10; // how long to water in seconds
int waittime = 10; // how long to wait between watering, in minutes

void setup()
{
        pinMode(motorPin, OUTPUT); // set A0 to an output so we can use it to turn on the transistor
            pinMode(blinkPin, OUTPUT); // set pin 13 to an output so we can use it to turn on the LED
}

void loop()
{
        digitalWrite(motorPin, HIGH); // turn on the motor
            digitalWrite(blinkPin, HIGH); // turn on the LED
                delay(watertime*1000);        // multiply by 1000 to translate seconds to milliseconds

                    digitalWrite(motorPin, LOW);  // turn off the motor
                        digitalWrite(blinkPin, LOW);  // turn off the LED
                            //delay(waittime*60000);        // multiply by 60000 to translate minutes to milliseconds
                            delay(waittime*1000);        // multiply by 60000 to translate minutes to milliseconds
}


#ifdef __cplusplus
}
#endif
