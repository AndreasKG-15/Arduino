int tal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){
    ;
  }
  while(tal<=10)
  {
    Serial.println(tal);
    tal++;
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
