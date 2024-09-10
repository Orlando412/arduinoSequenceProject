
int leds[] = {8,6,4,2}; //pins connected to the light 
int delays[] = {3000, 2000, 2000, 5000}; //time delays for each led light 
int flashDelay = 100; //the delay for the flashing lights at the end of the count down for all light when the sequence is finished 
int numOfLeds = 4; // count of the led lights

void setup() {

  for(int i = 0; i < numOfLeds; i++) {
    //sets up all the pins
    pinMode(leds[i], OUTPUT);

  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < numOfLeds; i++) {
    digitalWrite(leds[i], HIGH); //turns on the current led light 
    delay(delays[i]); //countdown per delay

    if(leds[i] == 2) { //checks if the led light is on (starting led light)
      flashAllLights(10); //flashes 10 times when finished 
    }

    digitalWrite(leds[i], LOW); //turns off the led lights
    delay(1000); //wait time before going to the next led light 

  }
    

}


//function to flash all leds once sequence is finished 
void flashAllLights(int countOfFlashes) {

  for(int j = 0; j < numOfLeds; j++) {


    for(int i = 0; i < numOfLeds; i++) {

      digitalWrite(leds[i], HIGH);

    }

    delay(flashDelay);

    for(int i = 0; i < numOfLeds; i++) {

      digitalWrite(leds[i], LOW);

    }

       delay(flashDelay);

  }

}
