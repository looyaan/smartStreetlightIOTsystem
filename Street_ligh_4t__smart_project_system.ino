int lightLDRpin = A0; 
int lightReadVal;
int LED1 = 10;
int LED2 = 11; 
int LED3  = 5;
int LED4 = 6; 


//  IR 

 int IR_1 = 9;
int IR_2 = 4;
int IR_3  = 7  ;
int IR_4 = 8;

 int IR_val1;
int IR_val2;
int IR_val3;
int IR_val4;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);

pinMode(IR_1, INPUT);
pinMode(IR_2, INPUT);
pinMode(IR_3, INPUT);
pinMode(IR_4, INPUT);
pinMode(lightLDRpin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightReadVal = analogRead(lightLDRpin);
IR_val1 = digitalRead(IR_1);
IR_val2 = digitalRead(IR_2);
IR_val3 = digitalRead(IR_3);
IR_val4 = digitalRead(IR_4); 

Serial.println(lightReadVal);
delay(300);

if (lightReadVal < 200){
  analogWrite(LED1, 0);
  analogWrite(LED2, 0);
  analogWrite(LED3, 0);
  analogWrite(LED4, 0);
 

}
else if (lightReadVal > 200){
  analogWrite(LED1, 25);
  analogWrite(LED2, 25);
  analogWrite(LED3, 25);
  analogWrite(LED4, 25);

   // state 1
  if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
   // state 2
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 0){
  analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
  // state 3
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
  // state 4
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25);
  }
   // state 5
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 0){
 analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
  // state 6
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 0 ){
 analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 7
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 1 ){
 analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 8
 else if (IR_val1  == 0 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 9
 else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
    // state 10
 else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
    // state 11
 else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
    // state 12
  else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
   // state 13
  else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 14
  else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 15
  else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 16
  else if (IR_val1  == 0 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,255 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 17
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
   // state 18
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
   // state 19
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
   // state 20
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
   // state 21
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 22
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 23
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 24
  else if (IR_val1  == 1 && IR_val2  == 0 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,255 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 25
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,25);
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
   // state 26
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 0 ){
  analogWrite(LED1,25);
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,255 );
  }
   // state 27
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
   // state 28
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 0 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,255 );
  analogWrite(LED4,25 );
  }
   // state 29
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
  
   // state 30
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 0 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,255 );
  }
   // state 31
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }
   // state 32
  else if (IR_val1  == 1 && IR_val2  == 1 && IR_val3  == 1 && IR_val4  == 1 ){
  analogWrite(LED1,25 );
  analogWrite(LED2,25 );
  analogWrite(LED3,25 );
  analogWrite(LED4,25 );
  }   
  
}
}
