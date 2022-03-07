volatile unsigned long timeA = 0;
volatile unsigned long rev = 0;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  attachInterrupt(0, calc, RISING);
}

void calc() {
  if (digitalRead(2) == HIGH ) {
    if (digitalRead(2) == HIGH ) {
      if (digitalRead(2) == HIGH ) {
        rev = 30000000/(micros()-timeA);
        timeA = micros();
      }
    }
  }
}

void loop() {
  if ( int(rev/1000) % 2 == 1 ) {
    digitalWrite(13,HIGH);
  } else {
    digitalWrite(13,LOW);
  }
}
