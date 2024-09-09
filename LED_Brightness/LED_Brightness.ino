#define LED1 9
#define LED2 5
#define LED3 6
#define pot A5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(Read(pot));
  SetLEDBrightness(Read(pot));
  
}

int Read(int pot)
{
  int value = map(analogRead(pot),0,1024,0,255);

  // value = value/256;
  return value;
}

void SetLEDBrightness(int Bright)
{
  analogWrite(LED1, Bright);
  analogWrite(LED2, Bright);
  analogWrite(LED3, Bright);
}