char t;
//int GSM1 
int in1 = 4;
int in2 = 5;
int enA = 6;
//int GSM2 
int in3 = 7;
int in4 = 8;
int enB = 9;
void setup()
{
  
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
 Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop()
{
if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    t = Serial.read(); // Reads the data from the serial port
 }
   if (t == 'F') {
  // Geradeaus fahren
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, HIGH);  
  digitalWrite(in2, LOW);   
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH);   
   }
   if (t == 'R') {
// Geradeaus Rechts fahren
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, LOW);  
  digitalWrite(in2, HIGH);   
  digitalWrite(in3, LOW);  
  digitalWrite(in4, HIGH);   
   }
   if (t == 'L') {
//  Links fahren
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, HIGH);  
  digitalWrite(in2, LOW);   
  digitalWrite(in3, HIGH);  
  digitalWrite(in4, LOW);   
   }
 if (t == 'B') {
  // Rückwärts fahren
    analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, LOW);  
  digitalWrite(in2, HIGH);   
  digitalWrite(in3, HIGH);  
  digitalWrite(in4, LOW);   
 }
}