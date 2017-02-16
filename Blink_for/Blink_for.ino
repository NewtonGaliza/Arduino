int pin1 = 9;
int pin2 = 8;
int pin1ligado = 250;
int pin1desligado = 200;
int pin2ligado = 250;
int pin2desligado= 200;

void setup() {
  
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  
}

void loop() {

for (int i = 0; i < 10; i++ ){
 digitalWrite(pin1, HIGH);
 delay(pin1ligado);
 digitalWrite(pin1, LOW);
 delay(pin1desligado);
   if (i % 2 == 0){
   digitalWrite(pin2, HIGH);
   delay(pin2ligado);
   digitalWrite(pin2, LOW);
   delay(pin2desligado);
    }
}

}
