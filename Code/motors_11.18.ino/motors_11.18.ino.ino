/*
  control motor CW and CCW
*/
const int out1 = D7;
const int out2 = D8;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(out2, LOW); 
  digitalWrite(out1, HIGH); 
  delay(1000);                     
  digitalWrite(out1, LOW);   
  digitalWrite(out2, HIGH); 
  delay(1000);                      
}
