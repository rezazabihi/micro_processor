//Reza Zabihi
#define key1 digitalRead(A0)

void setup() {
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {

  if (key1 == 0) {
    int randomNumber = random(1, 7);
    Serial.println(randomNumber);

    for (int i = 0; i <= 8; i++) {
      digitalWrite(i, LOW);
    }
    delay(300);

    digitalWrite(randomNumber, HIGH);
  }
  delay(1000);
}