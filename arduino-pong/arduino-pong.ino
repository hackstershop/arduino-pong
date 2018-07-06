void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {

 
  Serial.write(map(analogRead(A0), 0, 1023, 0, 255  ));
  delay(50);

}

