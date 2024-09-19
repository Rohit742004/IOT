int sensorPin = A0;   
unsigned int sensorValue = 0;           // select the input pin for LDunsigned int sensorValue = 0;  // variable to store value coming from LDR
int threshold = 100;
void setup() {
  // put your setup code here, to run once:

 pinMode(13, OUTPUT);  
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
           // start serial for output - for testing
  sensorValue = analogRead(sensorPin);   
  Serial.println(sensorValue); 
    if(sensorValue < threshold) digitalWrite(13, HIGH);   // set the LED on
  else digitalWrite(13, LOW);   // set the LED off   
}
