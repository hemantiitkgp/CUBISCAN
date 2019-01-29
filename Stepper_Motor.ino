int m1Pin1 = 23;
int m1Pin2 = 25;
int m1Pin3 = 27;
int m1Pin4 = 29;
int delayTime = 3;
int Step =0;
int flag =0;
int Totalstep=0;

int Ir1 = 53;
int Ir2 = 23;

void setup() {
  pinMode(m1Pin1, OUTPUT);
  pinMode(m1Pin2, OUTPUT);
  pinMode(m1Pin3, OUTPUT);
  pinMode(m1Pin4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(1) {
      Totalstep++;
  //    if(digitalRead(Ir1)==1) {
  //      Serial.print("You were right");
  //    }
  if(digitalRead(Ir1)==0) {
    Step++;
  }
  if((flag==0)&&(digitalRead(Ir1)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir1)==1)) {
    break;
  } 
  digitalWrite(m1Pin1, HIGH);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4, LOW);
  Totalstep++;
  if(digitalRead(Ir1)==0) {
    Step++;
  }
  if((flag==0)&&(digitalRead(Ir1)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir1)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, HIGH);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4, LOW);
    Totalstep++;
 if(digitalRead(Ir1)==0) {
    Step++;
  }
  if((flag==0)&&(digitalRead(Ir1)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir1)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, HIGH);
  digitalWrite(m1Pin4, LOW);
    Totalstep++;
  if(digitalRead(Ir1)==0) {
    Step++;
  }
  if((flag==0)&&(digitalRead(Ir1)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir1)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4, HIGH);

  delay(delayTime);
  Serial.print("Totalstep: ");
  Serial.print(Totalstep);
  Serial.print("\n");
  Serial.print("Steps: ");
  Serial.print(Step);
  Serial.print("\n");
  }
  

  while (Totalstep>4) {
     Totalstep--;
      digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4,HIGH);
  Totalstep--;
  delay(delayTime);
       digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, HIGH);
  digitalWrite(m1Pin4, LOW);
  Totalstep--;
    delay(delayTime);
       digitalWrite(m1Pin1, LOW);
  digitalWrite(m1Pin2, HIGH);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4, LOW);
  Totalstep--;
    delay(delayTime);
       digitalWrite(m1Pin1, HIGH);
  digitalWrite(m1Pin2, LOW);
  digitalWrite(m1Pin3, LOW);
  digitalWrite(m1Pin4, LOW);
 
  delay(delayTime);
  Serial.print("Totalstep: ");
  Serial.print(Totalstep);
  Serial.print("\n");
   Serial.print("Steps: ");
  Serial.print(Step);
  Serial.print("\n");
  }
 delay(10000);
 // Serial.printf("you have %d hours to come to me",Step);
} 
