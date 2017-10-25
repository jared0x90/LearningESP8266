uint8_t LED_Pin = D4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello wifi world");
  delay(1000);
  digitalWrite(LED_Pin, !digitalRead(LED_Pin));
}
