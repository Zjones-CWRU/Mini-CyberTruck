int xVal = A0;       //X values from joystick
int yVal = A1;       //Y values from joystick
int SW_pin = 13; // input for detecting whether the jotstick/button is pressed ----> pin 13 

int ledPinR = 5; // Red Color to pin 5 on the Arduino
int ledPinG = 2; // Green Color to pin 3 on the Arduino

byte leds = 0;

void setup() {

Serial.begin(9600); 

pinMode(A0, INPUT); //JoyStick
pinMode(A1, INPUT);
pinMode(SW_pin, INPUT);      //setup SW input
digitalWrite(SW_pin, HIGH);  //reading button state:1=not pressed,0=pressed


pinMode(ledPinR, OUTPUT);
pinMode(ledPinG, OUTPUT);

}

void loop() {
xVal= analogRead(A0);
yVal= analogRead(A1);
SW_pin = digitalRead (3);

Serial .print ("Button is...");
Serial.println(SW_pin); // print state of button

Serial.print(" Y is...");
Serial.println(yVal); //prints Y values

Serial.print(" X is...");
Serial.println(xVal); // prints X values


if((600>xVal && xVal>400)  && yVal > 511) //move backward
{
Serial.print("Backward"); 

digitalWrite(ledPinR, HIGH);

digitalWrite(ledPinG, LOW);

}

else if( (600>xVal && xVal>400) && yVal < 400) // move forward  
{
Serial.print("Forward");

digitalWrite(ledPinR, LOW);

digitalWrite(ledPinG, HIGH);

}

if((600>xVal && xVal>400) && (600>yVal && yVal>400))  // Not in motion

Serial.print("Stop"); 

digitalWrite(ledPinR, LOW);
digitalWrite(ledPinG, LOW);

}
 
