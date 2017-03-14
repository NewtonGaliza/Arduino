int pin = 9;
int on = 500;
int off = 300;


void setup() {
  
  pinMode(pin, OUTPUT);
  
}

void loop() {
 
  digitalWrite(pin, HIGH);
  delay(on);
  digitalWrite(pin, LOW);
  delay(off);

}
