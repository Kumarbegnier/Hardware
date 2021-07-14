void NUM(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(19, a);
  digitalWrite(18, b);
  digitalWrite(5, c);
  digitalWrite(17, d);
  digitalWrite(16, e);
  digitalWrite(4, f);    
  digitalWrite(0, g);
}
void setup()
{
    pinMode(19, OUTPUT);  
    pinMode(18, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(0, OUTPUT);            
}
void loop()
{
NUM(0,0,0,0,0,0,0);
delay(500);
}
