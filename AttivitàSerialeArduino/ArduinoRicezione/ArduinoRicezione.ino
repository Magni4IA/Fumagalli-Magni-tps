void setup() 
{
  pinMode(10,INPUT);
  Serial.begin(1200);
}
int a;
void loop() 
{
  a=digitalRead(10);
  delay(55.5);
  Serial.println(a);
}
