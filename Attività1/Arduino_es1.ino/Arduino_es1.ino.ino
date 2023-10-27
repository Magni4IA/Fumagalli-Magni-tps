void setup() 
{
  //configurazione pin 
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
   
}

void loop() 
{
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}
