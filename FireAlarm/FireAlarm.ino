#include <Wire.h>  
#include <LiquidCrystal_I2C.h> 
const int sensorMin = 0;   
const int sensorMax = 1024; 
const int buzzer = 8; 
const int light = 7; 
const int light1 = 6; 
const int light2 = 5; 
void setup() { 
  Serial.begin(9600);  
  pinMode(buzzer, OUTPUT);  
  pinMode(light, OUTPUT); 
  pinMode(light1, OUTPUT); 
  pinMode(light2, OUTPUT); 
  Serial.println("Annamalai University BE CSE 2021 ");
  Serial.println("Fire Detection Program"); 
  Serial.println(F("Fire detection test!")); 

} 

void loop() { 

 int sensorReading = analogRead(A0); 
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3); 
  switch (range) { 

  case 0:   
    Serial.println("Close Fire"); 
     tone(buzzer, 1000); 
     delay(1000);         
     digitalWrite(light, HIGH); 
     tone(buzzer, 500); 
     noTone(buzzer);   
    break; 
 
 case 1:    
    Serial.println("** Distant Fire **"); 
     digitalWrite(light1, HIGH); 
    break; 
  case 2:     

    Serial.println("No Fire"); 
     digitalWrite(light2, HIGH); 
     break; 
  delay(500);  
  digitalWrite(light, LOW); 
  digitalWrite(light1, LOW); 
  digitalWrite(light2, LOW); 
}
}