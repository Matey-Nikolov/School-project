#include <Servo.h>

Servo myservo;

void setup() 
{ 
  myservo.attach(3);
    // set servo to mid-point
} 

void loop() {
 myservo.write(120);  
 delay(300);       
 myservo.write(30);    
 delay(100); 
}
