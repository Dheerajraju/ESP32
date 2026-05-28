#define RED 2
#define YELLOW 4
#define GREEN 5
#define BUTTON 18

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  pinMode(BUTTON, INPUT_PULLUP);
}

void loop()
{
  // GREEN signal
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);

  // Check button for 5 seconds
  for(int i = 0; i < 50; i++)
  {
    if(digitalRead(BUTTON) == LOW)
    {
      // Pedestrian request

      digitalWrite(GREEN, LOW);
      digitalWrite(YELLOW, HIGH);
      delay(1000);

      digitalWrite(YELLOW, LOW);
      digitalWrite(RED, HIGH);

      delay(5000); // crossing time

      digitalWrite(RED, LOW);

      return;
    }

    delay(100);
  }

  // Normal traffic cycle
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1000);

  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(3000);

  digitalWrite(RED, LOW);
} traffic light control
