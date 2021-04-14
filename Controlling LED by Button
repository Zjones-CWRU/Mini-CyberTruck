
int ledPin = 5; // Red Color to pin 5 on the Arduino
int buttonApin = 9;//one button  to pin 9 on the Arduino
int buttonBpin = 8;//anther button  to pin 8 on the Arduino

byte leds = 0;
//The 'setup' function defines the ledPin as being an OUTPUT as normal, but now we have the two inputs to deal with. In this case, we use the set the pinMode to be 'INPUT_PULLUP'
void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}
//The pin mode of INPUT_PULLUP means that the pin is to be used as an input, but that if nothing else is connected to the input, it should be 'pulled up' to HIGH. Inother words, the default value for the input is HIGH, unless it is pulled LOW by the action of pressing the button.
//This is why the switches are connected to GND. When a switch is pressed, it connects the input pin to GND, so that it is no longer HIGH. Since the input is normally HIGH and only goes LOW when the button is pressed, the logic is a little upside down. We will handle this in the 'loop' function.
void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
