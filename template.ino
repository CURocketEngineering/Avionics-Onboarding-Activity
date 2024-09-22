// The pins don't match what is actually on the board because we 
// are using the generic board on Arduino IDE. 

#define RED PA1  // A1 on the board
#define GREEN PA2 // A7 on the board
#define BLUE PA3 // A2 on the board
#define WHITE PA4 // A3 on the board 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins
  pinMode(RED, OUTPUT);
  
  // TODO: Initialize GREEN, BLUE, and WHITE below


  // #################################################
}

void toggleLED(int pin){
  digitalWrite(pin, !digitalRead(pin));
}

// the loop function runs over and over again forever
void loop() {
  toggleLED(RED);
  delay(1000);
  
  // TODO: Toggle the GREEN, BLUE, and WHITE LEDs somewhere below 

}