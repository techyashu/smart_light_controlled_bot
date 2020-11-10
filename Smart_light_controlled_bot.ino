
#define ldr1 D1;
#define ldr2 D2;
#define ldr3 D7;
#define ldr4 D8;

int leftmotorbackward=D3;
int leftmotorforward=D4;
int rightmotorforward=D5;
int rightmotorbackward=D6;


void setup() {
 pinMode(leftmotorbackward,OUTPUT);
 pinMode(leftmotorforward,OUTPUT);
 pinMode(rightmotorforward,OUTPUT);
 pinMode(rightmotorbackward,OUTPUT);
 pinMode(ldr1,INPUT);
 pinMode(ldr2,INPUT);
 pinMode(ldr3,INPUT);
 pinMode(ldr4,INPUT);
}

void forward()
 {
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorBackward,LOW);
 }
 void right()
 {
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(leftMotorBackward,HIGH);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,LOW);
 }
 void left()
 {
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(leftMotorBackward,HIGH);
  digitalWrite(rightMotorBackward,LOW);
  digitalWrite(leftMotorForward,LOW);
 }
 void freeze()
 {
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,LOW);
 }

void loop() { 
 int reading1=analogRead(ldr1);
 int reading2=analogRead(ldr2);
 int reading3=analogRead(ldr3);
 int reading4=analogRead(ldr4);
 
 if (reading1<200 && reading1<reading2 && reading1<reading3 && reading1<reading4 )  
 {
  forward();
 }
 if (reading2<200 && reading2<reading1 && reading2<reading3 && reading2<reading4 )
 {
  right();
 }
 if (reading3<200 && reading3<reading1 && reading3<reading2 && reading3<reading4 )
 {
  left();
 }
 if (reading4<200 && reading4<reading1 && reading4<reading2 && reading4<reading3 )
 {
  freeze();
 }
}
 
