void setup() 
{
  //configurazione pin 
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
}

void loop() 
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  for(int i = 0; i < 255; i++)
  {
    analogWrite(10, i);
    delay(100);
  }  
}
