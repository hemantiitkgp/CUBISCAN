int area_scan(void) {
Totalstepv=0;
flag=0;
Stepv=0;
Totalsteph=0;
Steph=0;

 while(1) {
      Totalstepv++;
  //    if(digitalRead(Ir1)==1) {
  //      Serial.print("You were right");
  //    }
  if(digitalRead(Ir1)==0) {
    Stepv++;
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
  Totalstepv++;
  if(digitalRead(Ir1)==0) {
    Stepv++;
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
    Totalstepv++;
 if(digitalRead(Ir1)==0) {
    Stepv++;
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
    Totalstepv++;
  if(digitalRead(Ir1)==0) {
    Stepv++;
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
}


  while(1) {
      Totalsteph++;
  //    if(digitalRead(Ir1)==1) {
  //      Serial.print("You were right");
  //    }
  if(digitalRead(Ir2)==0) {
    Steph++;
  }
  if((flag==0)&&(digitalRead(Ir2)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir2)==1)) {
    break;
  } 
  digitalWrite(m2Pin1, HIGH);
  digitalWrite(m2Pin2, LOW);
  digitalWrite(m2Pin3, LOW);
  digitalWrite(m2Pin4, LOW);
  Totalsteph++;
  if(digitalRead(Ir2)==0) {
    Steph++;
  }
  if((flag==0)&&(digitalRead(Ir2)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir2)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m2Pin1, LOW);
  digitalWrite(m2Pin2, HIGH);
  digitalWrite(m2Pin3, LOW);
  digitalWrite(m2Pin4, LOW);
    Totalsteph++;
 if(digitalRead(Ir2)==0) {
    Steph++;
  }
  if((flag==0)&&(digitalRead(Ir2)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir2)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m2Pin1, LOW);
  digitalWrite(m2Pin2, LOW);
  digitalWrite(m2Pin3, HIGH);
  digitalWrite(m2Pin4, LOW);
    Totalsteph++;
  if(digitalRead(Ir2)==0) {
    Steph++;
  }
  if((flag==0)&&(digitalRead(Ir2)==0)) {
    flag++;
  }
  if((flag==1)&&(digitalRead(Ir2)==1)) {
    break;
  } 
  delay(delayTime);
  digitalWrite(m2Pin1, LOW);
  digitalWrite(m2Pin2, LOW);
  digitalWrite(m2Pin3, LOW);
  digitalWrite(m2Pin4, HIGH);

  delay(delayTime);
}
return(Steph*Stepv);

}
