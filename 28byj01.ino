
int eight=8;
int nine=9;
int ten=10;
int eleven=11;

int currentstep=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(eight,OUTPUT);
  pinMode(nine,OUTPUT);
  pinMode(ten,OUTPUT);
  pinMode(eleven,OUTPUT);

  digitalWrite(eight,LOW);
  digitalWrite(nine,LOW);
  digitalWrite(ten,LOW);
  digitalWrite(eleven,LOW);  
}

void loop() {
  // put your main code here, to run repeatedly:

  switch(currentstep){
    case 0:
      digitalWrite(eight,HIGH);
      digitalWrite(nine,LOW);
      digitalWrite(ten,LOW);
      digitalWrite(eleven,LOW);
      break;
    case 1:
      digitalWrite(eight,LOW);
      digitalWrite(nine,HIGH);
      digitalWrite(ten,LOW);
      digitalWrite(eleven,LOW);
      break;
    case 2:
      digitalWrite(eight,LOW);
      digitalWrite(nine,LOW);
      digitalWrite(ten,HIGH);
      digitalWrite(eleven,LOW);
      break;
    case 3:
      digitalWrite(eight,LOW);
      digitalWrite(nine,LOW);
      digitalWrite(ten,LOW);
      digitalWrite(eleven,HIGH);
      break;
  }
  currentstep = (++currentstep<4)? currentstep:0;

  delay(2);
}
