const int LED_ON = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_ON,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Etape 1- État Allume
  Serial.println("Allume - 2347643");
  digitalWrite(LED_ON,HIGH);
  delay(2000);

  //Etape 2 - clignotement
  Serial.println("Clignotement - 2347643");
  unsigned int chiffre = 5;
  int nombreClignotement= round(chiffre/2.0) + 1;
  digitalWrite(LED_ON,HIGH);
  delay(250);
  digitalWrite(LED_ON,LOW);
  delay(250);
  Serial.println(nombreClignotement);

}
