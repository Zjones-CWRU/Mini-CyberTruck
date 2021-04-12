int xVal; //X values from joystick
int yVal; //Y values from joystick

//Motor pins
int leftMotor_forward = 9;                    // identifies the left motor forward motion as 9
int leftMotor_backward = 10;                  // identifies the left motor bacward motion as 10

int rightMotor_forward = 11;                 // identifies the right motor forward motion as 11
int rightMotor_backward = 12;                // identifies the right motor bacward motion as 12

void setup() {

Serial.begin(9600); 

pinMode(A0, INPUT); //JoyStick
pinMode(A1, INPUT);

pinMode(leftMotor_forward, OUTPUT); // Motors
pinMode(leftMotor_backward, OUTPUT);
pinMode(rightMotor_forward, OUTPUT);
pinMode(rightMotor_backward, OUTPUT);

}

void loop() {
xVal= analogRead(A0);
yVal= analogRead(A1);

Serial.print(" Y is...");

Serial.println(yVal); //prints Y values

Serial.print(" X is...");

Serial.println(xVal);

if((600>xVal && xVal>400) && (600>yVal && yVal>400))              // if 600 > X > 400 and 600 > Y > 400 then execute following 
{
 Serial.print("Stop");                                            // The following code causing all motors to stop
 digitalWrite(leftMotor_forward, LOW);
 digitalWrite(leftMotor_backward, LOW);
 digitalWrite(rightMotor_forward, LOW);
 digitalWrite(rightMotor_backward, LOW);
}
else if( (600>xVal && xVal>400) && yVal < 511) // move forward       // if 600 > 400 and 511 > Y then both motors rotate forward
{
Serial.print("Forward");
digitalWrite(leftMotor_forward, HIGH);
digitalWrite(leftMotor_backward, LOW);
digitalWrite(rightMotor_forward, HIGH);
digitalWrite(rightMotor_backward, LOW);

}
else if((600>xVal && xVal>400)  && yVal > 511) //move backward
{
Serial.print("Backward"); 
digitalWrite(leftMotor_forward, LOW);
digitalWrite(leftMotor_backward, HIGH);
digitalWrite(rightMotor_forward, LOW);
digitalWrite(rightMotor_backward, HIGH);

}
else if(xVal > 511  &&(600>yVal && yVal>400)) // turn right
{
Serial.print("Right");
digitalWrite(leftMotor_forward, HIGH);
digitalWrite(leftMotor_backward, LOW);
digitalWrite(rightMotor_forward, LOW);
digitalWrite(rightMotor_backward, HIGH);
}
else if (xVal < 511  && (600>yVal && yVal>400))//turn left
{
Serial.print("Left"); 
digitalWrite(leftMotor_forward, LOW);
digitalWrite(leftMotor_backward, HIGH);
digitalWrite(rightMotor_forward, HIGH);
digitalWrite(rightMotor_backward, LOW);
}
}
