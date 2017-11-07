/*
  7 segment source code
  Program Release Date: November 13, 2017
  Program has a 7 segment dispay for displaying digits. also has
  2 pushbuttons, 1 for increasing the number, and the other for decreasing

  Programmed by: Yamaan Bakir
**** Version 3 added Push Button Inputs ****
*/
//*****************************************************************************

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;
int pb1 = 10;
int pb0 = 11;
int counter = 0;
int timmer = millis();
int debounce = 150;
int buttonstate1 = 0;
int buttonstate0 = 0;
int test [] {A, B, C, D, E, F, G, DP};// array that should turn on all lights






void setup() {
  Serial.begin(9600);
  // setting up pins as outputs
  for (int i = 2; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  // setting up pins as inputs
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  Serial.println(counter);
  int segment [][7] = {// a 2d array for changing which lights are on and off

    {A, F, G, E, D, -1, -1},
    {A, B, C, D, E, F, -1},
    {F, E, -1, -1, -1, -1, -1},
    {A, B, G, E, D, -1, -1},
    {A, B, G, C, D, -1, -1},
    {F, G, B, C, -1, -1, -1},
    {A, F, G, C, D, -1, -1},
    {A, F, E, D, C, G, -1},
    {A, B, C, -1, -1, -1, -1},
    {A, B, C, D, E, F, G,},
    {A, B, G, F, C, -1, -1},
    {A, F, G, E, D, -1, -1}
  };

  //buttonstate1 = digitalRead(pb1);
  // buttonstate0 = digitalRead(pb0);
  if (digitalRead(pb1 == HIGH)) {
    counter++;
  }
  int j = 0;
  for (j = 0; j < 7; j++) {
    digitalWrite(segment[counter][j], 1);



  }
  if( buttonstate0==1){
      
        counter+1; 
        
      }
}


