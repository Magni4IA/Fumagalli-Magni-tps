void setup()
{
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
  Serial.begin(9600);
}
int val;

void loop() 
{
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  int val = analogRead(A0);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(10, val);
  Serial.println(val);
}