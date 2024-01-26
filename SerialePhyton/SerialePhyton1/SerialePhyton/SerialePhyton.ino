void setup() 
{
  Serial.begin(9600);
  analogRead(A5); //pin del potenziometro
  pinMode(3, OUTPUT); //pin del motore
}
void loop() 
{
  
  digitalWrite(3, HIGH);
  
  //assegno a una variabile il valore di A5
  int t = analogRead(A5);
  //converto il valore di t in valori leggibili dal motore
  t = map(t, 0, 1023, 0, 255);
  //invio i valori al motore
  analogWrite(3, t);
  
  Serial.println(t);
  delay(1000);
}
