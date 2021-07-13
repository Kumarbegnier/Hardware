void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(15, a);
  digitalWrite(2, b);
  digitalWrite(0, c);
  digitalWrite(4, d);
  digitalWrite(16, e);
  digitalWrite(17, f);    
  digitalWrite(18, g);
}
void setup()
{
    pinMode(15, OUTPUT);  
    pinMode(2, OUTPUT);
    pinMode(0, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(18, OUTPUT);            
}
void loop()
{
sevenseg(0,0,0,0,0,0,1);
delay(500);
sevenseg(1,0,0,1,1,1,1);
delay(500);
sevenseg(0,0,1,0,0,1,0);
delay(500);
sevenseg(0,0,0,0,1,1,0);
delay(500);
sevenseg(1,0,0,1,1,0,0);
delay(500);
sevenseg(0,1,0,0,1,0,0);
delay(500);
sevenseg(0,1,0,0,0,0,0);
delay(500);
sevenseg(0,0,0,1,1,1,1);
delay(500);
sevenseg(0,0,0,0,0,0,0);
delay(500);
sevenseg(0,0,0,0,1,0,0);
delay(500);
 
}
