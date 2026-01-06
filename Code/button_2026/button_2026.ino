/*

*/
const int button = 1;
const int led = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, !(digitalRead(button)));  
  
  delay(100);                      // wait for a second
}
