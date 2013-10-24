/*
 Sketch "ButtonRGBLED":
 
 Turns on the RGB LED connected to pins 9, 10, 11 
 when pressing the LilyPad ProtoSnap pushbutton attached to pin A5. 
 Turns off LED when button is released.
  
 This example code is in the public domain.
 */

// Assign a constant variable to two of the three pins of the RGB LED,
// And another constant variable for the button
const int redPin =  9;
const int bluePin = 10;
const int buttonPin = A5;

// variable for reading the pushbutton status
int buttonState = 0;

void setup() {

  // initialize the LED pin as an output:
  pinMode(redPin, OUTPUT); 
    pinMode(bluePin, OUTPUT); 

  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop(){
  
  // read the state of the pushbutton value
  // and store it in the 'buttonState' variable:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW:
  if (buttonState == LOW) {     
    // turn LED on:    
    digitalWrite(redPin, HIGH); 
        digitalWrite(bluePin, LOW); 

  } 
  else {
    // turn LED off:
    digitalWrite(redPin, LOW); 
        digitalWrite(bluePin, LOW); 

  }
  delay(100);
}
