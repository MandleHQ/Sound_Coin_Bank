// Coin Pin
int pinCoin = 2;

void setup() {
  // set Coin pin as input pin
  pinMode(pinCoin, INPUT);
  // initialize serial with setting baudrate to 115,200 bps
  Serial.begin(115200);
}

void loop() {
  
  // check whether Coin pin is LOW or HIGH
  if(digitalRead(pinCoin) == HIGH){
    // send 1 to PC by serial
    Serial.println(1);  
  }
  // wait 0.01 second
  delay(10);
}

