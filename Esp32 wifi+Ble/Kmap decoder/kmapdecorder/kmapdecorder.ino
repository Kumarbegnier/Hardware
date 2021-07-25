
int S=1,R=1,Q=1,P=1;
int D,C,B,A;



void DECODER_7447(int D, int C, int B, int A)
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

//The given below loop function work on repeat mode.
//     && is the AND operation
//     || is the OR operation
//      ! is the NOT operation


void loop() {
  A=0;
  B=(P&&!Q&&!R&&!S) || (!P&&Q&&!R&&!S) || (P&&!Q&&R&&!S) || (!P&&Q&&R&&!S);
  C=(P&&Q&&!R&&!S) || (!P&&!Q&&R&&!S) || (P&&!Q&&R&&!S) || (!P&&Q&&R&&!S);
  D = (P&&Q&&R&&!S)||(!P&&!Q&&!R&&S);
  
DECODER_7447(D,C,B,A);  
}
