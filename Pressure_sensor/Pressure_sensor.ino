#define FORCE_SENSOR_PIN A0 
void setup() { 
  Serial.begin(9600); 
} 
void loop() { 
  int analogReading = analogRead(FORCE_SENSOR_PIN); 
  Serial.print("Force sensor reading = "); 
  Serial.print(analogReading); 
  if (analogReading < 10)     
    Serial.println(" -> no pressure"); 
  else if (analogReading < 200)  
    Serial.println(" -> light touch"); 
  else if (analogReading < 500)
    Serial.println(" -> light pressure"); 
  else if (analogReading < 800) 
    Serial.println(" -> medium pressure"); 
  else 
    Serial.println(" -> big pressure"); 
  delay(1000); 
}