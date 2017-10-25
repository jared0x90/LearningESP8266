uint8_t LED_Pin = D4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Set PWM frequency. Range is 1 to 1000Hz
  analogWriteFreq(10);
  // Set PWM to 50% duty cycle 0 - 1023 range
  analogWrite(LED_Pin, 512);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("PWM test");
  delay(1000);
}
