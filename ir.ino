int led=13;
int ir=4;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(ir,INPUT);
}
void loop(){
  int A = digitalRead(ir);
  if(A==0){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
