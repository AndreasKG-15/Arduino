void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){
    ;
  }

  //Serial.begin(9600);
  
  int sum = 0; // Variable to store the sum

  // Loop through the first 10 natural numbers and add them to sum
  for (int i = 1; i <= 10; i++) {
    sum += i;
  }

  // Print the sum to the Serial Monitor
  Serial.print("The sum of the first 10 natural numbers is: ");
  Serial.println(sum);
}

void loop() {
  // put your main code here, to run repeatedly:

}
