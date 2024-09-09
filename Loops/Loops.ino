int tal = 0;
int tal2 = 10;
bool SorF;
char True[] = "True";
char False[] = "False";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){
    ;
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  
  /*while(tal<100){
    Serial.println(tal);
    tal=tal+1;
    delay(50);
  }
  for(tal; tal>0;tal--)
  {
    Serial.println(tal);
    delay(50);
  }
  */
  // Exercise 2
  for(tal2; tal2>-10;tal2--){
    if(tal2>0)
    {
      //SorF = True;
      Serial.println(tal2);
      Serial.println(True);
      delay(500);
    }
    else
    {
      Serial.println(tal2);
      Serial.println(False);
      delay(500);
    }
  }

}
