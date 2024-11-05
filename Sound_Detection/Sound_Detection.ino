const int ledPin = 13; 
const int soundPin = A0; 
int threshold = 600;
void setup() 
{ 
  pinMode(ledPin,OUTPUT); 
  Serial.begin(9600);
} 
void loop() 
{ 
  int value = analogRead(soundPin);
  Serial.println(value);
  if(value > threshold) 
  { 
    digitalWrite(ledPin,HIGH); 
    delay(200);
  } 
  else 
  { 
    digitalWrite(ledPin,LOW);
  } 
  delay(1000);
}