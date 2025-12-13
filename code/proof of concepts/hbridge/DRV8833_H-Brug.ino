// Pinnen volgens jouw indeling
const int IN6 = 10;   // BN1 //links voorwaarts
const int IN7 = 9;   // BN2 //links achter
const int IN10 = 11;   // AN1 //rechts voorwaarts
const int IN8 = 13;  // AN2 //rechts achter
const int STBY = 12; // VERBIND DEZE MET DRV8833 nSLEEP

void setup() {
  Serial.begin(9600);
  pinMode(IN8, OUTPUT); //LA
  pinMode(IN10, OUTPUT); // LV
  pinMode(IN7, OUTPUT); //RV
  pinMode(IN6, OUTPUT); //RA
  pinMode(STBY, OUTPUT);

  digitalWrite(STBY, HIGH); // driver wakker maken
}

void loop() {
  digitalWrite(IN8, HIGH); 
  digitalWrite(IN10, HIGH);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(3000);
  
  // stop (coast)
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);

  digitalWrite(IN8, LOW);
  digitalWrite(IN10, HIGH);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(3000);

  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);
   digitalWrite(IN8, LOW); //RECHTSVOOR
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, HIGH); //LINKSACHTER
  digitalWrite(IN6, LOW);
  delay(3000);

  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);

  
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, HIGH);
  delay(3000);

  
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);


  
}
