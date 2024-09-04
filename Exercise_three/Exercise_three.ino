int randNumber;
char matches[] = "matches";
char notMatches[] = "does not match";
int test_tal = 2;
int tal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial)
  {
    ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(tal; tal<10;tal++)
  {
    randNumber = random(0,5);
    if(randNumber==test_tal)
    {
      Serial.println(randNumber);
      Serial.println(matches);
      Serial.println(test_tal);
      delay(100);
    }
    else
    {
      Serial.println(randNumber);
      Serial.println(notMatches);
      Serial.println(test_tal);
      delay(100);
    }
  }
}
