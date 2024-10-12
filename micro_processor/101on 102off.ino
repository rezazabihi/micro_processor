int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    int value = Serial.parseInt();
    if(value == 101){
      digitalWrite(ledPin,1);
    }else if(value == 102){
      digitalWrite(ledPin,0);
    }
  }
}
