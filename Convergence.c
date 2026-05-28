#define LED1 4
#define LED2 5
#define LED3 6
#define LED4 7
#define LED5 0
#define LED6 1

void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
}

void loop()
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED6,HIGH);
  delay(500);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED5,HIGH);
  delay(500);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  digitalWrite(LED6,LOW);
  delay(500);
  digitalWrite(LED2,LOW);
  digitalWrite(LED5,LOW);
  delay(500);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
}
