const int sensor_pin=D6;
void setup() {
  pinMode(sensor_pin, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT); 
  Serial.begin(115200);

}

void loop() {
  digitalWrite(LED_BUILTIN, digitalRead(sensor_pin));
  delay(100);
  }
