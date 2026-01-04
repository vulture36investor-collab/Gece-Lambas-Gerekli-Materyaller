// Kırmızı led grubu
const int FRST_RED_LED = 6;
const int SCND_RED_LED = 11;

// Mavi led grubu
const int FRST_BLUE_LED = 3;
const int SCND_BLUE_LED = 9;

// Yeşil led grubu
const int FRST_GREEN_LED = 5;
const int SCND_GREEN_LED = 10;

// Buton grubu
const int FORWARD_BUTTON = 2; // İleri gitmek için kullanılacak buton

int buttonCount = 0;

void setup() {
  
  // Kırmızı led grubu
  pinMode(FRST_RED_LED, OUTPUT);
  pinMode(SCND_RED_LED, OUTPUT);

  // Mavi led grubu
  pinMode(FRST_BLUE_LED, OUTPUT);
  pinMode(SCND_BLUE_LED, OUTPUT);

  // Yeşil led grubu
  pinMode(FRST_GREEN_LED, OUTPUT);
  pinMode(SCND_GREEN_LED, OUTPUT);

  // Buton grubu
  pinMode(FORWARD_BUTTON, INPUT_PULLUP);

  Serial.begin(9600);

}

void loop() {
  int Frwd_btn_read = digitalRead(FORWARD_BUTTON); // İleri gitmek için kullanılan butonu okuyor

  if(Frwd_btn_read == LOW){
    buttonCount++;
    Serial.println(buttonCount);    
  }

  switch(buttonCount){
      case 1:
        Koyu_Lacivert();
        break;
      case 2:
        Gece_Mavisi();
        break;
      case 3:
        Antrasit_Gri();
        break;
      case 4:
        Komur_Grisi();
        break;
      case 5:
        Fume();
        break;
      case 6:
        Koyu_Mor_Eggplant();
        break;
      case 7:
        Bordo();
        break;
      case 8:
        Koyu_Sarap();
        break;
      case 9:
        Orman_Yesili();
        break;
      case 10:
        Zeytin_Yesili();
        break;
      case 0:
        Sonuk();
        break;
    }

    if (buttonCount == 10) buttonCount = -1;

  delay(250);
}

void Sonuk(){
  analogWrite(FRST_RED_LED, 0);
  analogWrite(SCND_RED_LED, 0);

  analogWrite(FRST_GREEN_LED, 0);
  analogWrite(SCND_GREEN_LED, 0);

  analogWrite(FRST_BLUE_LED, 0);
  analogWrite(SCND_BLUE_LED, 0);
}

// 1. Koyu Lacivert
void Koyu_Lacivert(){
  analogWrite(FRST_RED_LED, 30);
  analogWrite(SCND_RED_LED, 30);

  analogWrite(FRST_GREEN_LED, 54);
  analogWrite(SCND_GREEN_LED, 54);

  analogWrite(FRST_BLUE_LED, 135);
  analogWrite(SCND_BLUE_LED, 135);
}

// 2. Gece Mavisi
void Gece_Mavisi(){
  analogWrite(FRST_RED_LED, 24);
  analogWrite(SCND_RED_LED, 24);

  analogWrite(FRST_GREEN_LED, 45);
  analogWrite(SCND_GREEN_LED, 45);

  analogWrite(FRST_BLUE_LED, 90);
  analogWrite(SCND_BLUE_LED, 90);
}

// 3. Antrasit Gri
void Antrasit_Gri(){
  analogWrite(FRST_RED_LED, 114);
  analogWrite(SCND_RED_LED, 114);

  analogWrite(FRST_GREEN_LED, 114);
  analogWrite(SCND_GREEN_LED, 114);

  analogWrite(FRST_BLUE_LED, 114);
  analogWrite(SCND_BLUE_LED, 114);
}

// 4. Kömür Grisi
void Komur_Grisi(){
  analogWrite(FRST_RED_LED, 84);
  analogWrite(SCND_RED_LED, 84);

  analogWrite(FRST_GREEN_LED, 84);
  analogWrite(SCND_GREEN_LED, 84);

  analogWrite(FRST_BLUE_LED, 84);
  analogWrite(SCND_BLUE_LED, 84);
}

// 5. Füme
void Fume(){
  analogWrite(FRST_RED_LED, 150);
  analogWrite(SCND_RED_LED, 150);

  analogWrite(FRST_GREEN_LED, 150);
  analogWrite(SCND_GREEN_LED, 150);

  analogWrite(FRST_BLUE_LED, 150);
  analogWrite(SCND_BLUE_LED, 150);
}

// 6. Koyu Mor (Eggplant)
void Koyu_Mor_Eggplant(){
  analogWrite(FRST_RED_LED, 144);
  analogWrite(SCND_RED_LED, 144);

  analogWrite(FRST_GREEN_LED, 75);
  analogWrite(SCND_GREEN_LED, 75);

  analogWrite(FRST_BLUE_LED, 156);
  analogWrite(SCND_BLUE_LED, 156);
}

// 7. Bordo
void Bordo(){
  analogWrite(FRST_RED_LED, 191);
  analogWrite(SCND_RED_LED, 191);

  analogWrite(FRST_GREEN_LED, 45);
  analogWrite(SCND_GREEN_LED, 45);

  analogWrite(FRST_BLUE_LED, 75);
  analogWrite(SCND_BLUE_LED, 75);
}

// 8. Koyu Şarap
void Koyu_Sarap(){
  analogWrite(FRST_RED_LED, 180);
  analogWrite(SCND_RED_LED, 180);

  analogWrite(FRST_GREEN_LED, 30);
  analogWrite(SCND_GREEN_LED, 30);

  analogWrite(FRST_BLUE_LED, 60);
  analogWrite(SCND_BLUE_LED, 60);
}

// 9. Orman Yeşili
void Orman_Yesili(){
  analogWrite(FRST_RED_LED, 54);
  analogWrite(SCND_RED_LED, 54);

  analogWrite(FRST_GREEN_LED, 120);
  analogWrite(SCND_GREEN_LED, 120);

  analogWrite(FRST_BLUE_LED, 75);
  analogWrite(SCND_BLUE_LED, 75);
}

// 10. Zeytin Yeşili
void Zeytin_Yesili(){
  analogWrite(FRST_RED_LED, 180);
  analogWrite(SCND_RED_LED, 180);

  analogWrite(FRST_GREEN_LED, 191);
  analogWrite(SCND_GREEN_LED, 191);

  analogWrite(FRST_BLUE_LED, 90);
  analogWrite(SCND_BLUE_LED, 90);
}

// 11. Petrol Mavisi (Koyu)
void Petrol_Mavisi_Koyu(){
  analogWrite(FRST_RED_LED, 45);
  analogWrite(SCND_RED_LED, 45);

  analogWrite(FRST_GREEN_LED, 135);
  analogWrite(SCND_GREEN_LED, 135);

  analogWrite(FRST_BLUE_LED, 165);
  analogWrite(SCND_BLUE_LED, 165);
}

// 12. Çam Yeşili
void Cam_Yesili(){
  analogWrite(FRST_RED_LED, 54);
  analogWrite(SCND_RED_LED, 54);

  analogWrite(FRST_GREEN_LED, 105);
  analogWrite(SCND_GREEN_LED, 105);

  analogWrite(FRST_BLUE_LED, 60);
  analogWrite(SCND_BLUE_LED, 60);
}

// 13. Toprak Kahverengisi
void Toprak_Kahverengisi(){
  analogWrite(FRST_RED_LED, 165);
  analogWrite(SCND_RED_LED, 165);

  analogWrite(FRST_GREEN_LED, 120);
  analogWrite(SCND_GREEN_LED, 120);

  analogWrite(FRST_BLUE_LED, 75);
  analogWrite(SCND_BLUE_LED, 75);
}

// 14. Koyu Kahve
void Koyu_Kahve(){
  analogWrite(FRST_RED_LED, 135);
  analogWrite(SCND_RED_LED, 135);

  analogWrite(FRST_GREEN_LED, 90);
  analogWrite(SCND_GREEN_LED, 90);

  analogWrite(FRST_BLUE_LED, 60);
  analogWrite(SCND_BLUE_LED, 60);
}

// 15. Koyu Bej (Kum Tonu)
void Koyu_Bej_Kum_Tonu(){
  analogWrite(FRST_RED_LED, 54);
  analogWrite(SCND_RED_LED, 54);

  analogWrite(FRST_GREEN_LED, 120);
  analogWrite(SCND_GREEN_LED, 120);

  analogWrite(FRST_BLUE_LED, 75);
  analogWrite(SCND_BLUE_LED, 75);
}

// 16. Koyu Krem
void Koyu_Krem(){
  analogWrite(FRST_RED_LED, 54);
  analogWrite(SCND_RED_LED, 54);

  analogWrite(FRST_GREEN_LED, 120);
  analogWrite(SCND_GREEN_LED, 120);

  analogWrite(FRST_BLUE_LED, 75);
  analogWrite(SCND_BLUE_LED, 75);
}

// 17. Taupe (Gri - Kahve)
void Taupe_Gri_Kahve(){
  analogWrite(FRST_RED_LED, 191);
  analogWrite(SCND_RED_LED, 191);

  analogWrite(FRST_GREEN_LED, 180);
  analogWrite(SCND_GREEN_LED, 180);

  analogWrite(FRST_BLUE_LED, 165);
  analogWrite(SCND_BLUE_LED, 165);
}

// 18. Koyu Gri - Mavi
void Koyu_Gri_Mavi(){
  analogWrite(FRST_RED_LED, 135);
  analogWrite(SCND_RED_LED, 135);

  analogWrite(FRST_GREEN_LED, 165);
  analogWrite(SCND_GREEN_LED, 165);

  analogWrite(FRST_BLUE_LED, 191);
  analogWrite(SCND_BLUE_LED, 191);
}

// 19. Dumanlı Mor
void Dumanli_Mor(){
  analogWrite(FRST_RED_LED, 191);
  analogWrite(SCND_RED_LED, 191);

  analogWrite(FRST_GREEN_LED, 150);
  analogWrite(SCND_GREEN_LED, 150);

  analogWrite(FRST_BLUE_LED, 225);
  analogWrite(SCND_BLUE_LED, 225);
}

// 20. Koyu Haki
void Koyu_Haki(){
  analogWrite(FRST_RED_LED, 180);
  analogWrite(SCND_RED_LED, 180);

  analogWrite(FRST_GREEN_LED, 191);
  analogWrite(SCND_GREEN_LED, 191);

  analogWrite(FRST_BLUE_LED, 135);
  analogWrite(SCND_BLUE_LED, 135);
}
