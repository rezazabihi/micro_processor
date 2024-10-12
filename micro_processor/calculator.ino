int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    float num1=Serial.parseFloat();
    char s=Serial.read();
    float num2=Serial.parseFloat();

     Serial.print(num1);
    Serial.print(s);
    Serial.print(num2);
    Serial.print("=");
    switch(s){
      case '+':
      Serial.println(num1+num2);
      break;
      case '-':
       Serial.println(num1-num2);
         break;
          case '*':
       Serial.println(num1*num2);
         break;
            case '/':

             if(num2 == 0){
              Serial.println("We can`t devision to ziro");
            
   }else{
          
       Serial.println(num1/num2);
         break;
    }
   }
    
   
         
         
    }
    
  
}
