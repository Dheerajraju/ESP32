int leds[] = {4, 5, 6, 7, 0, 1};
int numLeds = 6;

void setup()
{
  for(int i = 0; i < numLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
  // Turn ON from outside to center
  for(int i = 0; i < numLeds / 2; i++)
  {
    digitalWrite(leds[i], HIGH);
    digitalWrite(leds[numLeds - 1 - i], HIGH);

    delay(500);
  }

  // Turn OFF from outside to center
  for(int i = 0; i < numLeds / 2; i++)
  {
    digitalWrite(leds[i], LOW);
    digitalWrite(leds[numLeds - 1 - i], LOW);

    delay(500);
  }
}
