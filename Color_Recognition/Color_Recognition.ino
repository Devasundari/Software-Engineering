
#define s0 8      
#define s1 9 
#define s2 10 
#define s3 11 
#define out 12 
int value=0;         
void setup()  
{  Serial.begin(9600);
   pinMode(s0,OUTPUT);  
   pinMode(s1,OUTPUT); 
   pinMode(s2,OUTPUT); 
   pinMode(s3,OUTPUT); 
   pinMode(out,INPUT); 
   digitalWrite(s0,HIGH); 
   digitalWrite(s1,HIGH); 
   } 
void loop()               
{ 
   digitalWrite(s2,LOW);       
   digitalWrite(s3,LOW); 
   Serial.print("Red value= ");  
   GetData();                  
   digitalWrite(s2,LOW); 
   digitalWrite(s3,HIGH); 
   Serial.print("Green value= "); 
   GetData(); 
   digitalWrite(s2,HIGH); 
   digitalWrite(s3,HIGH); 
   Serial.print("Blue value= "); 
   GetData(); 
   Serial.println();
   delay(2000); 
} 
void GetData(){ 
   value=pulseIn(out,LOW);     
   Serial.print(value);        
   Serial.print("\t");        
   delay(20); 
   
   
}