int state;
int sv1 = 2; //V11-S
int sv2 = 3; //V10-S
int sv3 = 4; //V12-S
int sv4 = 5; //V20-SB
int sv5 = 6; //V22-SB
int sv6 = 7; //V24-SB
int sv7 = 8; //V30-SB
int sv8 = 9; //V32-SB
int sv9 = 10; //V33-SB
int sv10 = 11; //V34-SB
int sv11 = 12; //V35-SB

void setup() {
  pinMode(sv1, OUTPUT);
  pinMode(sv2, OUTPUT);
  pinMode(sv3, OUTPUT);
  pinMode(sv4, OUTPUT);
  pinMode(sv5, OUTPUT);
  pinMode(sv6, OUTPUT);
  pinMode(sv7, OUTPUT);
  pinMode(sv8, OUTPUT);
  pinMode(sv9, OUTPUT);
  pinMode(sv10,OUTPUT);
  pinMode(sv11, OUTPUT);

  digitalWrite(sv1, LOW);
  digitalWrite(sv2, LOW);
  digitalWrite(sv3, LOW);
  digitalWrite(sv4, LOW);
  digitalWrite(sv5, LOW);
  digitalWrite(sv6, LOW);
  digitalWrite(sv7, LOW);
  digitalWrite(sv8, LOW);
  digitalWrite(sv9, LOW);
  digitalWrite(sv10, LOW);
  digitalWrite(sv11, LOW);

  Serial.begin(115200);

  Serial.setTimeout(1);
}

void loop() {
  while (!Serial.available());
  state = Serial.readString().toInt();
  if(state == 1){
    digitalWrite(sv1, HIGH);

  }
  if(state == 2){
    digitalWrite(sv2, HIGH);
  }
  if(state==3){
        digitalWrite(sv3, HIGH);

  }
  if(state==4){
        digitalWrite(sv4, HIGH);

  }
if(state==5){
      digitalWrite(sv5, HIGH);

}
if(state==6){
      digitalWrite(sv6, HIGH);

}
if(state==7){
      digitalWrite(sv7, HIGH);

}
if(state==8){
      digitalWrite(sv8, HIGH);

}
if(state==9){
      digitalWrite(sv9, HIGH);

}
if(state==0){
  digitalWrite(sv1, LOW);
  digitalWrite(sv2, LOW);
  digitalWrite(sv3, LOW);
  digitalWrite(sv4, LOW);
  digitalWrite(sv5, LOW);
  digitalWrite(sv6, LOW);
  digitalWrite(sv7, LOW);
  digitalWrite(sv8, LOW);
  digitalWrite(sv9, LOW);
  digitalWrite(sv10, LOW);
  digitalWrite(sv11, LOW);
}

}
