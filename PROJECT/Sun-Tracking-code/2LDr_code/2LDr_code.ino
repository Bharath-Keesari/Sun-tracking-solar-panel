int LDR1 = A2;          //Pin at which LDR is connected
int LDR2 = A1; 

void setup() 
{ 
  Serial.begin(9600);
}  
 
void loop() 
{ 
  int R1 = analogRead(LDR1); // reading value from LDR 1
  Serial.println(R1);
  int R2 = analogRead(LDR2); // reading value from LDR 2
  Serial.println(R2);

  delay(100);
}
