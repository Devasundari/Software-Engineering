const int ledPin = 3;    
const int flexPin = A0;
int value; 
void setup(){ 
    pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);      
} 
void loop(){ 
int flexValue; 
  flexValue = analogRead(flexPin); 
  Serial.print("sensor: "); 
  Serial.println(flexValue); 
    if(flexValue>890) 
     digitalWrite(ledPin,HIGH); 
  else 
    digitalWrite(ledPin,LOW); 
    delay(1000); 
}