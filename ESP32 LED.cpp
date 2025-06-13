void setup() {
  // put your setup code here, to run once:
  pinMode(32, OUTPUT);
  Serial.begin(115200);
  Serial.println("LED is ready");
}

void loop() {
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(32, LOW);
  delay(1000);
}
