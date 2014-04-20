int pinCoin = 2;

void setup() {
  pinMode(pinCoin, INPUT);
  Serial.begin(115200);
}

void loop() {
  
  if(digitalRead(pinCoin) == HIGH){
    Serial.println(1);  
  }
  delay(10);
}

