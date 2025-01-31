const int LED_ON = 13;
const int TIME_OFF_ON = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_ON,OUTPUT);
  Serial.begin(9600);
}

void allumer(){

  //Allumage de la LED pendant 2s
  Serial.println("Allume - 2347643");
  digitalWrite(LED_ON,HIGH);
  delay(TIME_OFF_ON);
}

void clignoter(){
  Serial.println("Clignotement - 2347643");

  //1- Déclaration des variables à utiliser
  unsigned int chiffre = 4;
  int nombreClignotement= round(chiffre/2.0) + 1;

  //2- cycle de clignotement en fonction du numero de DA
  for(int compteur = 1; compteur <= nombreClignotement; compteur++){
    digitalWrite(LED_ON,LOW);
    delay(250);
    digitalWrite(LED_ON,HIGH);
    delay(250);
  }

}

void variation(){
  Serial.println("Variation – 2347643");

  //1- Déclaration des variables à utiliser
  int brithness = 255;
  const int FADE_AMOUNT = 1;
  int runningTime = 2048;
  int time = runningTime/((brithness/FADE_AMOUNT) + 1);
  
  //2- Cycle de variation
  while(brithness >= 0){
    analogWrite(LED_ON, brithness);
    brithness -= FADE_AMOUNT;
    delay(time);
  }

}

void eteint(){
  //Eteindre la LED pendant 2s
  Serial.println("Éteint - 2347643");
  digitalWrite(LED_ON,LOW);
  delay(TIME_OFF_ON);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Etape 1- État Allume
  allumer();

  //Etape 2 - Clignotement
  clignoter();

  //Etape 3 - Variation
  variation();

  //Etape 4 - Eteint
  eteint();
  
}
