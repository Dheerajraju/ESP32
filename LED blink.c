#define LED 4 //define led in pin 4

void setup()
{
  pinMode(LED,OUTPUT); //defining the led as output
}

void loop()
{
  digitalWrite(LED,HIGH);  //making the led hig
  delay(500); //delay for 500ms
  digitalWrite(LED,LOW); //making the led low
}
