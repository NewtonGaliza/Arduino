int pin1 = 9;
int pin2 = 8;
int pin1on = 250;
int pin1off = 200;
int pin2on = 250;
int pin2off= 200;

void setup() {
  
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  
}

void loop() {

for (int i = 0; i < 10; i++ ){
 digitalWrite(pin1, HIGH);
 delay(pin1on);
 digitalWrite(pin1, LOW);
 delay(pin1off);
   if (i % 2 == 0){
   digitalWrite(pin2, HIGH);
   delay(pin2on);
   digitalWrite(pin2, LOW);
   delay(pin2off);
    }
}
}
