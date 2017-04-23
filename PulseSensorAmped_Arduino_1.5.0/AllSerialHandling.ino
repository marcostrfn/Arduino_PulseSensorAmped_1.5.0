
//////////
/////////  All Serial Handling Code,
/////////  It's Changeable with the 'outputType' variable
/////////  It's declared at start of code.
/////////

// Volatile Variables, used in the interrupt service routine!
volatile int BPM;                   // int that holds raw Analog in 0. updated every 2mS
volatile int IBI = 600;             // int that holds the time interval between beats! Must be seeded!
volatile int Signal;                // holds the incoming raw data


void serialOutput() {   
      Serial.print(BPM);
      Serial.print(",");
      Serial.print(IBI);
      Serial.print(",");
      Serial.println(Signal);
}

void serialOutputWhenBeatHappens() {  
	Serial.print("B ");
	Serial.print(BPM);
	Serial.print(", Q ");
    Serial.print(IBI);
    Serial.print(", S ");
    Serial.println(Signal);
}

void LcdOutputWhenBeatHappens() {
	char buffer[20];
    sprintf(buffer, "BPM %4d    %4d IBI", BPM, IBI);  
	lcd.setCursor(0, 3);
	lcd.print(buffer);	
}


  

