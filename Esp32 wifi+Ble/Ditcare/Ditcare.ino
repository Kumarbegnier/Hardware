int Z=0,Y=1,X=0,W=0; //binary input for the number which we have to  display
int D,C,B,A;


void dcare_7447(int D, int C, int B, int A)
{
  digitalWrite(19, A); //LSB
  digitalWrite(18, B); 
  digitalWrite(5, C); 
  digitalWrite(17, D); //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(19, OUTPUT);  
    pinMode(18, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(17, OUTPUT);
}

// the loop function runs at repeat mode.
void loop() {
  A=(!W);
  B=(W&&!X&&!Z) || (!W&&X) ;
  C=(!X&&Y) || (!W&&Y) || (W&&X&&!Y);
  D =(!W&&Z)||(W&&X&&Y);
  
dcare_7447(D,C,B,A);  
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
