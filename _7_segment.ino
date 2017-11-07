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
int test [] {A, B, C, D, E, F, G, DP};// array that should turn on all lights






void setup() {
  // setting up pins as outputs
  for (int i = 2; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  // setting up pins as inputs
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {

 // digitalWrite(test[], 1);
  int segment [][7] = {

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
  int j =0;
  for (j = 0; j < 7; j++) {

   
 
int counter=3;
 switch (counter){
  case 3: digitalWrite(segment[counter][j], 1);
  break;
 }


}
}


