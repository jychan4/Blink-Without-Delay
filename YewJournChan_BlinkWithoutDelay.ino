/*
 Yew Journ Chan
 Blink Without Delay Function
*/


#include <analogWrite.h>

int Red = 12;
int Green = 27;
int Blue = 33;

int counter = 0;
int delaytime = 0;

int PressedButton = A0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(PressedButton, INPUT);
}

void loop() {
  int buttonState = digitalRead(PressedButton);

  if(buttonState == HIGH) {
    counter++;
    delay(100);
  }

  else if(counter == 1){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(Red, brightness);
      delay(delaytime);
      }
  }
  else if(counter == 2){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(Green, brightness);
      delay(delaytime);
      }
  }
  else if(counter == 3){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(Blue, brightness);
      delay(delaytime);
      }
  }
  else {
    analogWrite(Red, 0);
    analogWrite(Green, 0);
    analogWrite(Blue, 0);
    counter = 0;
    }
  }
  lastButtonState = buttonState;
}
