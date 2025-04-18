const int sensorPin = A0;
const int delayTime = 50; // microseconds (adjust for time/div)

void setup() {
  Serial.begin(115200);
}

void loop(){
  int lightValue = analogRead(sensorPin);
  Serial.println(lightValue); //plot this
  delayMicroseconds(delayTime);
}
