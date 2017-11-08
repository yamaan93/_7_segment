/*
  7 segment source code
  Program Release Date: November 13, 2017
  Program has a 7 segment dispay for displaying digits. also has
  2 pushbuttons, 1 for increasing the number, and the other for decreasing

  Programmed by: Yamaan Bakir
**** Version 4 is the final version ****
*/
//*****************************************************************************
                                                                  //variables
int A = 2;// what pins go to which segment
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;
int pb1 = 10;
int pb0 = 11;
int counter = 0;//  what row in the array should be called, for turning on segments
int debounceDelay = 200;
int buttonState;// the current reading from the input pin
int buttonState0;
int lastButtonState = 0; // the previous reading from the input pin
int lasButtonState0 = 0; // the previous reading from the input pin
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
int i = 0;

int test [] {A, B, C, D, E, F, G, DP};// array that should turn on/off all lights






void setup() {

  // setting up pins as outputs
  for (int i = 2; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  // setting up pins as inputs
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}
//***********************************************************************************************************
                                                                                            //screen control
void screen() {//function for controling the screen instead of having it clog up the loop
  int segment [][7] = {// a 2d array for changing which lights are on and off

    {A, F, G, E, D, -1, -1},// E
    {A, B, C, D, E, F, -1},// 0
    {F, E, -1, -1, -1, -1, -1},//1
    {A, B, G, E, D, -1, -1},//2
    {A, B, G, C, D, -1, -1},//3
    {F, G, B, C, -1, -1, -1},//4
    {A, F, G, C, D, -1, -1},//5
    {A, F, E, D, C, G, -1},//6
    {A, B, C, -1, -1, -1, -1},//7
    {A, B, C, D, E, F, G,},//8
    {A, B, G, F, C, -1, -1},//9

  };
  int j = 0;
  for (j = 0; j < 7; j++) {// for going through all the segments of the display in the for loop
    digitalWrite(segment[counter][j], 1);

  }
}
void loop() {

  screen();
  // read the state of the switch into a local variable:
  //**********************************************************************************************************
                                                                                                 //button1
  int reading = digitalRead(pb1);
  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) < debounceDelay) {

    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading != buttonState) {
      buttonState = reading;

      // only add to counter if the new button state is HIGH
      if (buttonState == HIGH) {
        for (i = 0; i < 8; i++) {
          digitalWrite(test[i], 0);
        }
        counter = (counter + 1) % 11;
      }
    }
  }
  //*******************************************************************************************************
                                                                                        //button2
  int reading0 = digitalRead(pb0);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading0 != lasButtonState0) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) < debounceDelay) {

    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:

    // if the button state has changed:
    if (reading0 != buttonState0) {
      buttonState0 = reading0;

      // only add to counter if the new button state is HIGH
      if (buttonState0 == HIGH) {
        for (i = 0; i < 8; i++) {
          digitalWrite(test[i], 0);
        }
        if (counter > 0) {
          counter = (counter - 1);
        }
        else if (counter < 1) {
          counter = 10;
        }
      }
    }
  }



}




