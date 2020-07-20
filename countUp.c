//arduino count up loop using C. 
//Writes to the hardware.

int countUp = 0; // creates a variable integer call countUp

void setup() {
    Serial.begin(9600); // use the serial port to print the numbers
}

void loop() {
    countUp++; //adds 1 to the countUp int on every loop
    Serial.print(countUp); //prints out the current state of countUp
    delay(1000);
}