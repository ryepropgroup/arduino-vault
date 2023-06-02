int state;
int sv1 = 2; //V10
int sv2 = 3; //V11
int sv3 = 4; //V12
int sv4 = 5; //V20
int sv5 = 6; //V21
int sv6 = 7; //V23
int sv7 = 8; //V30
int sv8 = 9; //V31
int sv9 = 10; //V34
int sv10 = 11; //V35
int sv11 = 12; //V36
int sv12 = 13; //V37

void setup() {
  // HIGH MEANS CLOSE, LOW MEANS OPEN
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
  pinMode(sv12, OUTPUT);

  digitalWrite(sv1, HIGH);
  digitalWrite(sv2, LOW);
  digitalWrite(sv3, LOW);
  digitalWrite(sv4, HIGH);
  digitalWrite(sv5, HIGH);
  digitalWrite(sv6, LOW);
  digitalWrite(sv7, HIGH);
  digitalWrite(sv8, HIGH);
  digitalWrite(sv9, LOW);
  digitalWrite(sv10, HIGH);
  digitalWrite(sv11, HIGH);
  digitalWrite(sv12, LOW);

  Serial.begin(115200);

  Serial.setTimeout(1);
}

void loop() {
  while (!Serial.available());
  state = Serial.readString().toInt();
  Serial.println(state);
  if(state == 10){
    digitalWrite(sv1, HIGH);
  }
  if(state == 11){
    digitalWrite(sv1, LOW);
  }
  if(state == 20){
    digitalWrite(sv2, HIGH);
  }
  if(state == 21){
    digitalWrite(sv2, LOW);
  }
  if(state==30){
        digitalWrite(sv3, HIGH);
  }
  if(state == 31){
    digitalWrite(sv3, LOW);
  }
  if(state==40){
        digitalWrite(sv4, HIGH);

  }
  if(state == 41){
    digitalWrite(sv4, LOW);
  }
if(state==50){
      digitalWrite(sv5, HIGH);

}
if(state == 51){
    digitalWrite(sv5, LOW);
  }
if(state==60){
      digitalWrite(sv6, HIGH);

}
if(state == 61){
    digitalWrite(sv6, LOW);
  }
if(state==70){
      digitalWrite(sv7, HIGH);

}
if(state == 71){
    digitalWrite(sv7, LOW);
  }
if(state==80){
      digitalWrite(sv8, HIGH);

}
if(state == 81){
    digitalWrite(sv8, LOW);
  }
if(state==90){
      digitalWrite(sv9, HIGH);

}
if(state == 91){
    digitalWrite(sv9, HIGH);
  }
if(state==100){
  digitalWrite(sv10, HIGH);
}
if(state == 101){
    digitalWrite(sv10, LOW);
  }
if(state==110){
  digitalWrite(sv11, HIGH);
}
if(state == 111){
    digitalWrite(sv11, LOW);
  }
 if(state=120){
  digitalWrite(sv12,  HIGH);
 }
 if(state=121){
  digitalWrite(sv12, LOW);
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
  digitalWrite(sv12, HIGH);

}
if(state == 1){
    digitalWrite(sv1, HIGH);
    digitalWrite(sv2, HIGH);
  digitalWrite(sv3, HIGH);
  digitalWrite(sv4, HIGH);
  digitalWrite(sv5, HIGH);
  digitalWrite(sv6, HIGH);
  digitalWrite(sv7, HIGH);
  digitalWrite(sv8, HIGH);
  digitalWrite(sv9, HIGH);
  digitalWrite(sv10, HIGH);
  digitalWrite(sv11, HIGH);
  digitalWrite(sv12, HIGH);
  }
}
