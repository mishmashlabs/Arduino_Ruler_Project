const int trigPin = 10;
const int echoPin = 11;

void setup() { 
  Serial.begin(9600);
  } 
  
void loop(){
  long duration, inches, cm, mm;
  pinMode(trigPin, OUTPUT); 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2000); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(1000); 
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT); 
  
  duration = pulseIn(echoPin, HIGH);
  
  inches = duration / 74 / 2; 
  cm = duration / 29 / 2;
  mm = duration / 2.9 / 2;

  if (cm <= 60){
    Serial.print(inches); 
    Serial.print(" in,   "); 
    Serial.print(cm);
    Serial.print(" cm,   ");
    Serial.print(mm);
    Serial.println(" mm");
    
    delay(1000);
  }
}
