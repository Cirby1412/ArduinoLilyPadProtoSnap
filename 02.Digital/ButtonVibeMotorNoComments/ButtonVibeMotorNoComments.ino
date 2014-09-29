
int vibePin =  3;
int buttonPin = A5;
   
int buttonState; 

void setup() {

  pinMode(vibePin, OUTPUT); 
  
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop(){
  
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {     
    digitalWrite(vibePin, HIGH); 
  } 
  else {
    digitalWrite(vibePin, LOW); 
  }

  delay(100);
  
}
