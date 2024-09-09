#define yellow 4
#define red 6
#define green 5
#define pot A5
void setup() {
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(pot,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(yellow,HIGH);
  delay(500);
  digitalWrite(yellow,LOW);
  delay(500);
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  delay(500);
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  delay(500);
  */
  /*
  turnOnLED(red);
  delay(1000);
  turnOnLED(green);
  delay(1000);
  turnOnLED(yellow);
  delay(1000);
  turnOffLED(red);
  delay(1000);
  turnOffLED(green);
  delay(1000);
  turnOffLED(yellow);
  delay(1000);
  */
  //turnOnLED(red);
  //turnOnLED(green);
  //turnOnLED(yellow);
  Serial.println(Read(pot));
  switch(pot)
  {
    case red:
      turnOnLED(red);
      break;
  }
  delay(50);
}

int Read(int pot)
{
  int value = analogRead(pot);
  value = value/255;
  return value;
}

// Function to turn on LEDs, takes integer (int) as input
void turnOnLED(int LED)
{
  digitalWrite(LED, HIGH);
}
// Function to turn off LEDs, takes integer (int) as input
void turnOffLED(int LED)
{
  digitalWrite(LED, LOW);
}
/*
void turnOnRed()
{
  digitalWrite(red,HIGH);
}
void turnOnYellow()
{
  digitalWrite(yellow, HIGH);
}
void turnOnGreen()
{
  digitalWrite(green, HIGH);
}
*/