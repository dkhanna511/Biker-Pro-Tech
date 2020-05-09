int IR_SENSOR = 5 ; //pin where LED is attached
int PIN_RF = 9 ;   //pin where RF Transmitter is attached
int  LED = 13;
 
void setup() {
  // put your setup code here, to run once:
 pinMode(IR_SENSOR ,INPUT);
 pinMode(PIN_RF, OUTPUT);
 pinMode(LED, OUTPUT);
 digitalWrite(PIN_RF, HIGH);  //RD Transmitter transmits at LOW, so by default keepint it at HIGH
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    int sensor_val = digitalRead(IR_SENSOR); // Reading the IR Sensor 
    Serial.print("Sensor val is :  ");
    Serial.println(sensor_val);
  //condition for turning on the RF Transmitter
  if(sensor_val == 1)
  {
    digitalWrite(PIN_RF, LOW);
      
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(PIN_RF, HIGH);
  }  
  delay(2000);
}
