
int sensorPin1 = A1;
int sensorVal1 = 0; 
int sensorPin2 = A2;
int sensorVal2 = 0; 
int sensorPin3 = A3;
int sensorVal3 = 0; 
int sensorPin4 = A4;
int sensorVal4 = 0; 
int sensorPin5 = A5;
int sensorVal5 = 0;
int sensorPin6 = A6;
int sensorVal6 = 0;
int sensorPin7 = A7;
int sensorVal7 = 0;   
int sensorPin8 = A8;
int sensorVal8 = 0;
int sensorPin9 = A9;
int sensorVal9 = 0;
int sensorPin10 = A10;
int sensorVal10 = 0;
int sensorPin11 = A11;
int sensorVal11 = 0;
int sensorPin12 = A12;
int sensorVal12 = 0;
int sensorPin13 = A13;
int sensorVal13 = 0;
int sensorPin14 = A14;
int sensorVal14 = 0;
int sensorPin15 = A15;
int sensorVal15 = 0;


void setup() //
{

  
  Serial.begin(115200); 

 

}
void loop () 
{
  
  
  sensorVal1 = analogRead(sensorPin1); 
  sensorVal2 = analogRead(sensorPin2);
  sensorVal3 = analogRead(sensorPin3); 
  sensorVal4 = analogRead(sensorPin4);
  sensorVal5 = analogRead(sensorPin5); 
  sensorVal6 = analogRead(sensorPin6);
  sensorVal7 = analogRead(sensorPin7);
  sensorVal8 = analogRead(sensorPin8);
  sensorVal9 = analogRead(sensorPin9);
  sensorVal10 = analogRead(sensorPin10);
  sensorVal11 = analogRead(sensorPin11); 
  sensorVal12 = analogRead(sensorPin12); 
  sensorVal13 = analogRead(sensorPin13);
  sensorVal14 = analogRead(sensorPin14);
  sensorVal15 = analogRead(sensorPin15);
  


 




    Serial.print(" "); 
    Serial.print(sensorVal1); 
    Serial.print(" "); 
    Serial.print(sensorVal2);
    Serial.print(" "); 
    Serial.print(sensorVal3); 
    Serial.print(" "); 
    Serial.print(sensorVal4); 
    Serial.print(" "); 
    Serial.print(sensorVal5);
    Serial.print(" "); 
    Serial.print(sensorVal6);
    Serial.print(" ");
    Serial.print(sensorVal7);
    Serial.print(" ");
    Serial.print(sensorVal8);
    Serial.print(" "); 
    Serial.print(sensorVal9);
    Serial.print(" "); 
    Serial.print(sensorVal10);
    Serial.print(" "); 
    Serial.print(sensorVal11);
    Serial.print(" "); 
    Serial.print(sensorVal12);
    Serial.print(" "); 
    Serial.print(sensorVal13);
    Serial.print(" "); 
    Serial.print(sensorVal14);
    Serial.print(" "); 
    Serial.print(sensorVal15);
    Serial.println(" "); 
  
  

  delay(10); 
}



   




