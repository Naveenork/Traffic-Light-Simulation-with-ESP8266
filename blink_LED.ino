int gl = D4;
int yl = D3;
int rl = D2;

int digitalwrite = 100;
void setup() {
  // put your setup code here, to run once:

  pinMode(gl,OUTPUT);
  pinMode(yl,OUTPUT);
  pinMode(rl,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rl,HIGH);
  delay(digitalwrite);
   digitalWrite(rl,LOW);
  delay(digitalwrite);

 digitalWrite(yl,HIGH);
  delay(digitalwrite);
   digitalWrite(yl,LOW);
  delay(digitalwrite);

   digitalWrite(gl,HIGH);
  delay(digitalwrite);
   digitalWrite(gl,LOW);
  delay(digitalwrite);
}

