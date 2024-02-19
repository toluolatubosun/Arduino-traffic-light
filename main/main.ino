const int RED =  9;
const int YELLOW = 8;
const int GREEN = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED, HIGH);
  delay(15000);
  digitalWrite(RED, LOW);

  for(int i = 0; i < 4; i++) {
    digitalWrite(YELLOW, HIGH);
    delay(1000);
    digitalWrite(YELLOW, LOW);
    delay(500);
  }

  digitalWrite(GREEN, HIGH);
  delay(20000);
  digitalWrite(GREEN, LOW);
  
  for(int i = 0; i < 4; i++) {
    digitalWrite(YELLOW, HIGH);
    delay(1000);
    digitalWrite(YELLOW, LOW);
    delay(500);
  }
}
