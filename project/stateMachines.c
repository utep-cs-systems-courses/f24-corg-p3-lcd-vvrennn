#include "switches.h"
#include "buzzer.h"
#include "stateMachines.h"
#include <msp430.h>


void switch_state_advance(){
  switch (switch_state){
  case 1:
    buzzer_set_period(1300); //buzzer is set to a input when a certain button is pressed
    break;
  case 2:
    buzzer_set_period(200);
    break;
  case 3:
    buzzer_set_period(700);
    break;
  case 4:
    buzzer_off();
    break;

  }
}
