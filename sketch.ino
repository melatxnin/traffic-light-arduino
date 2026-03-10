/*
  TRAFFIC LIGHT

  Author:
  Nicolas GOSSARD
*/

// pins
constexpr int redPin = 9;
constexpr int orangePin = 8;
constexpr int greenPin = 7;

// time
constexpr int redTime = 4000;
constexpr int orangeTime = 1000;
constexpr int greenTime = 3000;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(orangePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  digitalWrite(greenPin, HIGH);
  digitalWrite(orangePin, LOW);
  digitalWrite(redPin, LOW);
  delay(greenTime);

  digitalWrite(greenPin, LOW);
  digitalWrite(orangePin, HIGH);
  digitalWrite(redPin, LOW);
  delay(orangeTime);

  digitalWrite(greenPin, LOW);
  digitalWrite(orangePin, LOW);
  digitalWrite(redPin, HIGH);
  delay(redTime);
}
