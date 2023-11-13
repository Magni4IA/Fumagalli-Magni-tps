void setup() 
{
  //configurazione pin 
  randomSeed(analogRead(A0));
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  int r=random(0,256);
  analogWrite(10,r);
  Serial.println(r);
  delay(4000);
}