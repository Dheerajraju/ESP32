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
  // CENTER TO OUTSIDE ON
  for(int i = 0; i < numLeds / 2; i++)
  {
    digitalWrite(leds[(numLeds / 2) - 1 - i], HIGH);
    digitalWrite(leds[(numLeds / 2) + i], HIGH);

    delay(500);
  }

  // CENTER TO OUTSIDE OFF
  for(int i = 0; i < numLeds / 2; i++)
  {
    digitalWrite(leds[(numLeds / 2) - 1 - i], LOW);
    digitalWrite(leds[(numLeds / 2) + i], LOW);

    delay(500);
  }
}
