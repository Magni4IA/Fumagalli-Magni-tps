String comando = String(); //variabile che contiene 
              //il carattere dato in input
char terminatore = '\n'; //carattere di terminazione della lettura
String v = String(); //stringa per leggere la velocità
void setup() 
{
  Serial.begin(9600);
  pinMode(12, OUTPUT); //pin1 direzione
  pinMode(13, OUTPUT); //pin2 direzione
  pinMode(3, OUTPUT); //pin velocità
}
void loop()
{
  comando = Serial.readStringUntil(terminatore);
  
 //direzione  
  char dir = comando[0];
  if (dir == 'o') //comando senso orario
  {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  if (dir == 'a') //comando senso antiorario 
  {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  
 //velocità
  //salvo la velocità in un'altra stringa
  for(int i = 1; i < comando.length(); i++)
  {
    v += comando[i];
  }
  int vel = v.toInt(); //converto da stringa a intero
  analogWrite(3, vel); 

  Serial.println(comando);
  delay(1000);
}
