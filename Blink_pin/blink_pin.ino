int pin = 9;
int ligado = 500;
int desligado = 300;


void setup() {
  
  pinMode(pin, OUTPUT);
  
}

void loop() {
 
  digitalWrite(pin, HIGH);
  delay(ligado);
  digitalWrite(pin, LOW);
  delay(desligado);

}
