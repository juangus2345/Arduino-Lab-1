int sensorValue;
int thisLED;
int timer= 100;
int limit;


void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);

  for (int thisLED = 2; thisLED < 7; thisLED++) { 
    pinMode(thisLED, OUTPUT);
  }
}

void loop() {
  
int sensorValue = analogRead(A0);
  
Serial.println(sensorValue);

  
if (sensorValue >=50){
   limit=2;
}
  
if (sensorValue > 100) { 
  limit = 3;
}
if (sensorValue > 200) { 
  limit = 4;
}
if (sensorValue > 300) { 
  limit = 5;
}
if (sensorValue > 400) { 
  limit = 6;
}
  if (sensorValue > 450) { 
  limit = 7;
}
    for (int thisLED = 2; thisLED < limit; thisLED++) {
  digitalWrite(thisLED, HIGH);
  }
   for (int thisLED = limit; thisLED < 7; thisLED++) {
  digitalWrite(thisLED, LOW);
  }
}