int tempsAttente = 6500; // 
 
void setup(){
  pinMode(10, OUTPUT);    // Rouge
  pinMode(4, OUTPUT);     // Jaune
  pinMode(0, OUTPUT);     // Vert
}

void loop() {
  digitalWrite(10, HIGH);     // rouge allumée
  delay(tempsAttente);

  digitalWrite(0, HIGH);      // verte allumée
  digitalWrite(10, LOW);      // rouge éteinte
  delay(tempsAttente);

  digitalWrite(4, HIGH);      // jaune allumée
  digitalWrite(0, LOW);       // verte éteinte
  delay(3000);

  digitalWrite(4, LOW);       // jaune éteinte
}
