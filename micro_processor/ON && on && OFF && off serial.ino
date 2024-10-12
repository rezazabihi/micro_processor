int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    String value = Serial.readString();
    if(value == "ON" || value == "on"){
      digitalWrite(ledPin,1);
    }else if(value == "OFF" || value == "off"){
      digitalWrite(ledPin,0);
    }
  }
}
