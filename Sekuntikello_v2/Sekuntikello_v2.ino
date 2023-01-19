void alustaTimer(void);
char* getFormattedTime(uint32_t);

bool state = false;
uint32_t seconds  = 0;
char  formattedTimeBuff[17];                              // global char buffer for the printing of milliseconds in formatted time

void setup() {
   Serial.begin(115200);
   alustaTimer();
}

char* getFormattedTime(uint32_t SecondsCount)             // return a seconds value as a string formatted as "HH:MM:SS"
{
  uint16_t hours            = SecondsCount / 3600;        // convert seconds to hours
  uint16_t secondsRemaining = SecondsCount % 3600;        // seconds left over

  uint16_t minutes  = secondsRemaining / 60 ;             // convert seconds left over to minutes
  uint16_t seconds  = secondsRemaining % 60;              // seconds left over

  snprintf(formattedTimeBuff, sizeof(formattedTimeBuff),  // create formatted output to a char array (string)
            "%02d:"   //HH:
            "%02d:"   //MM:
            "%02d"    //SS.
            ,
            hours,
            minutes,
            seconds
        );
  return formattedTimeBuff;
}


ISR(TIMER1_COMPA_vect){
  if (state == true){
    //seconds++;
    Serial.println(getFormattedTime(seconds++));
  }
}

void loop(){
  String input;
  String uHour;
  String uMinutes;
  String uSeconds;

  if (Serial.available()>0){
    String input = Serial.readStringUntil('\n');
    

    if (input == "start"){
      state = true;
      Serial.println("Started");

    }
    if (input == "stop"){
      state = false;
      Serial.println("Stopped");
   }

    if (input == "set"){
    Serial.println("Set time in format [00:00:00]");
    while(!Serial.available()){}

    uHour = Serial.readStringUntil(':');
    uMinutes = Serial.readStringUntil(':');
    uSeconds = Serial.readStringUntil('\n');

    seconds = 0;
    seconds = ((uHour.toInt() * 3600) + (uMinutes.toInt()*60) + uSeconds.toInt());

   }
  }
}





uint32_t setTime(){


}

void alustaTimer(void)
{
  noInterrupts(); // Disabloidaan keskeytykset alustuksen ajaksi

  TCCR1A = 0; //Alustetaan nämä kaksi keskeistä kontrollirekisteriä
  TCCR1B = 0; // ensin nollaksi

  TCCR1B |= (1 << WGM12); // Tämä bitti päälle ja timer on CTC moodissa
  
  TCCR1B |= (1 << CS10); //Näillä kahdella bitillä B-rekisterissä
  TCCR1B |= (0 << CS11); //Näillä kahdella bitillä B-rekisterissä
  TCCR1B |= (1 << CS12); //asetetaan kellon jako 1024:lla

  OCR1A = ( (F_CPU / 1024) / 1);
                        
  
  TIMSK1 |= (1 << OCIE1A); //Timer HW:sta enabloidaan Output Compare Interrupt Enable

  interrupts(); //Sallitaan keskeytykset alustuksen päätyttyä
}