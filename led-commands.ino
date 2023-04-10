//NOTE:The comment lines are mine.
//Program to turn on and off an LED with a 1-second interval.
//The LED on Pin 13 is connected with a resistor.
int led = 13;
//When the reset button is pressed, the setup function runs once.
void setup() {
//The pin connected to the LED is set as an output.
  pinMode(led, OUTPUT);
}
  void loop() {
  digitalWrite(led, HIGH);   // Turn on the LED.
  delay(2000);               // Wait for 1 second.
  digitalWrite(led, LOW);    // Turn off the LED.
  delay(2000);               // Wait for 1 second.
}

