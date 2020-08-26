  const int buzz1 = 2;
  const int buzz2 = 3;
  const int buzz3 = 4;
  const int buzz4 = 5;
  const int go = 6;

  const int led1 = 10;
  const int led2 = 11;
  const int led3 = 12;
  const int led4 = 13;

  int B_ON = 0;

void setup() {

Serial.begin(9600);

pinMode(buzz1, INPUT);
pinMode(buzz2, INPUT);
pinMode(buzz3, INPUT);
pinMode(buzz4, INPUT);

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
  

}

void loop() {

  if (digitalRead(buzz1)==1){
    B_ON = 1;
    Serial.println("led1"); 
  }
   if (digitalRead(buzz2)==1){
    B_ON = 2; 
  }
 if (digitalRead(buzz3)==1){
    B_ON = 3; 
  }
 if (digitalRead(buzz4)==1){
    B_ON = 4; 
  }

  switch (B_ON){
    case 1:
      digitalWrite(led1,HIGH);
      break;
    case 2:
      digitalWrite(led2,HIGH);
      break;
    case 3:
      digitalWrite(led3,HIGH);
      break;
    case 4:
      digitalWrite(led4,HIGH);
      break;
  }
  delay(2);


}
