int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;
int []segment{A, B, C, D, E, F, G, DP}
// Declare 2D array
int[][] segment = new int[][]{

  {A, F, G, E, D,-1,-1}
  {A,B,C,D,E,F,-1}
  {F, E, -1, -1, -1,-1,-1}
  {A,B,G,E,D,-1,-1}
  {A,B,G,C,D,-1,-1}
  {F,G,B,C,-1,-1,1}
  {A,F,G,C,D,-1,-1}
  {A,F,E,D,C,G.-1}
  {A,B,C,-1,-1,-1,-1}
  {A,B,C,D,E,F,G,}
  {A,B,G,F,C,-1,-1}
  {A, F, G, E, D,-1,-1}
}




void setup() {
  for (int i = 4; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  int number = -1;
  switch (number) {

    case -1: 
      

  }

