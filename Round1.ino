/* #include <Stepper.h> */
int LN = 43;      //Define the pins for ir sensor array
int L = 45;       //Define the pins for ir sensor array
int Mid = 47;     //Define the pins for ir sensor array
int R = 49;       //Define the pins for ir sensor array
int RN=51;        //Define the pins for ir sensor array

int Out1 = 48;     //Define the pins for L293D
int Out2 = 46;     //Define the pins for L293D  
int Out3 = 42;     //Define the pins for L293D
int Out4 = 40;     //Define the pins for L293D

/*int RedLed = 33;
int BlueLed = 35;
int GreenLed = 37;
int YellowLed = 39;

int Horizontal_scan = 52;
int Vertical_scan = 54;  */

int E1 = 50;
int E2 = 44;

/*  int a = digitalRead(LN);
int b = digitalRead(L);
int c = digitalRead(Mid);
int d = digitalRead(R);
int e = digitalRead(RN);  

int in1=digitalRead(Horizontal_scan);
int in2=digitalRead(Vertical_scan);

int Block1_steps ;
int Block2_steps;
int Block3_steps;
int Block4_steps;

const int stepsPerRevolution = 200;  // number of steps per revolution

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;  // number of steps the motor has taken
int Totalsteps = 0 ;  */
void setup() {
pinMode(LN,INPUT);  //Define pins as input
pinMode(L,INPUT);
pinMode(Mid,INPUT);
pinMode(R,INPUT);
pinMode(RN,INPUT);

pinMode(Out1,OUTPUT);
pinMode(Out2,OUTPUT);
pinMode(Out3,OUTPUT);
pinMode(Out4,OUTPUT);

/*pinMode(Horizontal_scan,INPUT);
pinMode(Vertical_scan,INPUT);

pinMode(RedLed,OUTPUT);   // 1st block 
pinMode(GreenLed,OUTPUT);  // 2nd block 
pinMode(BlueLed,OUTPUT);   // 3rd block 
pinMode(YellowLed,OUTPUT);  // 4th block */

pinMode(E1,OUTPUT);
pinMode(E2,OUTPUT);
}

void loop() {
  digitalWrite(E1,HIGH);
  digitalWrite(E2,HIGH);
 /* digitalWrite(Out1,LOW);
  digitalWrite(Out2,LOW);
  digitalWrite(Out3,HIGH);
  digitalWrite(Out4,HIGH); */

  
  
  while ( (digitalRead(LN)==0)&&(digitalRead(L)==0)&&(digitalRead(R)==0)&&(digitalRead(RN)==0) ) {
    Straight;
    Serial.print("Straight is taking");
  }  

 /* while ((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }

   while ( (a==0)&&(b==0)&&(d==0)&&(e==0) ) {
    Straight;
  }  

    while ((a==1)||(b==1)||(d==1)||(e==1)) {
    Left_turn;
  }
  while((a==1)||(b==1)||(d==0)||(e==0)) {
    Straight;
  }
  while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
  while((b==0)) {
    Straight ;
  }-
  Stop;
  scan;
  Block1_steps=stepCount;
  stepCount=0;
  while((
    Reverse 
    ))
    while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
      while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
   while((a==0)||(b==0)||(d==1)||(e==1)) {
    Straight;
  }
   while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
 while (b==0){
  Straight;
 }
  Stop;
  scan;
  Block2_steps=stepCount;
  stepCount=0;
  while((
    Reverse 
    ))
    while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
      while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
  while ((a==1)) {
    Straight ;
  }
while ((a==1)||(b==1)||(d==1)||(e==1)) {
  Left_turn;
}
  while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
    delay(2000);
 while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
    while ((a==1)||(b==1)||(d==1)||(e==1)) {
  Left_turn;
}
 while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
      while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
 while (b==0){
  Straight;
 }
  Stop;
  scan;
  Block3_steps=stepCount;
  stepCount=0;
  while((
    Reverse 
    ))
    while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
      while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
  while ((e==0)) {
    Straight;
  }
        while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
 while (b==0){
  Straight;
 }
  Stop;
  scan;
  Block4_steps=stepCount;
  stepCount=0;
  while(
    Reverse 
    )
  while ((a==0)) {
    Straight ;
  }
          while((a==1)||(b==1)||(d==1)||(e==1)) {
    Right_turn;
  }
 while (b==0){
  Straight;
 }
while ((a==1)||(b==1)||(d==1)||(e==1)) {
  Left_turn;
}
  while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
    while ((a==1)||(b==1)||(d==1)||(e==1)) {
  Left_turn;
}
while((a==0)&&(b==0)&&(d==0)&&(e==0) ) {
      Straight;
    }
 Stop;
 
 
 
 //LED BLINKING NOW   */
}

void Left_turn(void) {
  digitalWrite(Out1,LOW);
  digitalWrite(Out2,LOW);
  digitalWrite(Out3,HIGH);
  digitalWrite(Out4,LOW);
}

void Right_turn(void){
  digitalWrite(Out1,HIGH);
  digitalWrite(Out2,LOW);
  digitalWrite(Out3,LOW);
  digitalWrite(Out4,LOW);
}

void Straight(void) {
digitalWrite(Out1,HIGH);
digitalWrite(Out2,LOW);
digitalWrite(Out3,HIGH);
digitalWrite(Out4,LOW);
}

void Reverse(void) {
  digitalWrite(Out1,LOW);
  digitalWrite(Out2,HIGH);
  digitalWrite(Out3,LOW);
}

void Stop(void) {
  digitalWrite(Out1,HIGH);
   digitalWrite(Out2,HIGH);
    digitalWrite(Out3,HIGH);
     digitalWrite(Out4,HIGH);
  
}

/*void scan(void) {
   while(in1==1){
  myStepper.step(1);
  Totalsteps++;
   }
   while(in1==0) {
    myStepper.step(1);
    stepCount++;
     Totalsteps++;
   }
   while(Totalsteps!=0) {
    myStepper.step(-1);
    Totalsteps--;
   }  */
   
  





  

