//Declaring all variables as integers
int Z,Y,X,W;


void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(15, A); //LSB
  digitalWrite(2, B);
  digitalWrite(0, C);
  digitalWrite(4, D); //MSB

}


// the setup function runs once when you press reset or power the board


void setup() {
    pinMode(15, OUTPUT);  
    pinMode(2, OUTPUT);
    pinMode(0, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(12, INPUT);  
    pinMode(14, INPUT);
    pinMode(27, INPUT);
    pinMode(26, INPUT);
   
}
// the loop function runs over and over a
void loop() {
 
W = digitalRead(12);//LSB  
X = digitalRead(14);  
Y = digitalRead(27);  
Z = digitalRead(26);//MSB  
 
disp_7447(Z,Y,X,W);  
}
