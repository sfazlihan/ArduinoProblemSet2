int Y=1;
int S=2;
int K=3;
void setup()
{
  pinMode(Y, OUTPUT);
  pinMode(K, OUTPUT);
  pinMode(S, OUTPUT);
}

void loop()
{
  digitalWrite(K,1);
  delay(10000);
  digitalWrite(S,1);
  delay(12000);
  digitalWrite(S,0);
  digitalWrite(K,0);
  digitalWrite(Y,1);	
  delay(5000);
  digitalWrite(Y,0);
}