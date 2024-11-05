#include <Wire.h> 
#define echoPin 3 
#define trigPin 2 
long duration; 
int distance; 
const int buzzer = 11;
const int light1= 12;
const int light2 = 13;
void setup() {
 Serial.begin(9600); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT); 
 pinMode(buzzer, OUTPUT); 
 pinMode(light1, OUTPUT);
 pinMode(light2, OUTPUT);
 Serial.println("Distance Measure Program");
}

void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = duration * 0.034 / 2; 
 Serial.print("Distance: ");
 Serial.print(distance);
 Serial.println(" cm");
 digitalWrite(light1, LOW);
 digitalWrite(light2, LOW);
 if (distance <= 10)
 {
 Serial.println("Very Close");
 digitalWrite(light1, HIGH);
 tone(buzzer, 1000);
 delay(1000);
 digitalWrite(light2, LOW);
 tone(buzzer, 500);
 noTone(buzzer);
 }
 else if (distance >=11 && distance <=50)

 {
 Serial.println("Near Range");
 digitalWrite(light2, HIGH);
 digitalWrite(light1, LOW);
 delay(1000);
 }
 else
 {
 Serial.println("Far Range");
 }}
