#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
**CYCLES**
Air Fluff: Blower, Timer
Auto Dry (Reg.): Blower, Timer, Heating Element, Thermostat, Moisture Sensor
Auto Dry (Press Care): Blower, Timer, Heating Element, Thermostat, Moisture Sensor 
Timed Dry: Blower, Timer, Heating Element
Cool Down: Blower, Timer

**CYCLE COMPONENTS**
Timer: tracks time
Blower: on/off
Heating Element: on/off
Moisture Sensor: output signal
Thermostat: output signal
*/

int getNum(){
  int x{}; 

  std::cout << "Enter a number greater than 10: "; 
  std::cin >> x; 
  
  while (x < 10){
    std::cout << "Invalid entry! Try again: ";
    std::cin >> x; 
  }
  std::cout << "Success! Your number is: " << x; 
  return x;
}

int main() {
  getNum(); 
}