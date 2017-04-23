


volatile boolean QS = false;        // becomes true when Arduoino finds a beat.

void controlLatido() {
    // serialOutput();
	// A Heartbeat Was Found BPM and IBI have been Determined 
	// Quantified Self "QS" true when arduino finds a heartbeat
	if (QS == true) {
		// A Beat Happened, Output that to serial.
        serialOutputWhenBeatHappens(); 
		LcdOutputWhenBeatHappens();
		// reset the Quantified Self flag for next time
        QS = false;                      	
	}
}	