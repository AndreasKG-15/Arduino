#define button1 2
#define button2 3
#define yellow 4
#define red 6
#define green 5
#define pot A5
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  CheckButtons();
  Serial.println(counter);
  // A switch case to turn on or off the LEDs
  switch(counter)
  {
    default:
      turnOffLED(red);
      turnOffLED(yellow);
      turnOffLED(green);
      break;
    case 1:
      turnOnLED(yellow);
      turnOffLED(red);
      turnOffLED(green);
      break;
    case 2:
      turnOnLED(green);
      turnOffLED(yellow);
      turnOffLED(red);
      break;
    case 3:
      turnOnLED(red);
      turnOffLED(yellow);
      turnOffLED(green);
      break;
    case 4:
      turnOnLED(red);
      turnOnLED(yellow);
      turnOnLED(green);
      break;
  }
  delay(100);
}

// Checks if buttons are pressed and then changes the counter accordingly
void CheckButtons()
{
  if(digitalRead(button1) == LOW)
  {
    Serial.println("Button 1 is pressed");
    counter++;
  };
  if(digitalRead(button2) == HIGH)
  {
    Serial.println("Button 2 is pressed");
    counter--;
  };
  delay(100);
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
