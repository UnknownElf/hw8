int ledPWM = 11;
int counter = 0;

void setup() {
  pinMode(ledPWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //counter from 0 to 255
  //makes the led from dark to light
  counter++;
  if(counter >= 256){
    counter = 0;
  }
  Serial.println(counter);
  analogWrite(ledPWM,counter);
  delay(10);
}
