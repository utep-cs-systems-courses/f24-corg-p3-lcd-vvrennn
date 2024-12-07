#include "switches.h"
#include "buzzer.h"
#include "stateMachines.h"
#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"

void switch_state_advance(){
  switch (switch_state){
  case 1:
    clearScreen(COLOR_BLACK);
    buzzer_set_period(1300);//buzzer is set to a input when a certain button is pressed
    drawString5x7(0, 0, "Nice!", COLOR_WHITE, COLOR_BLACK);
    break;
  case 2:
    clearScreen(COLOR_BLACK);
    buzzer_set_period(200);
    drawString5x7(0, 0, "You did it!", COLOR_FIREBRICK, COLOR_BLACK);
    break;
  case 3:
    clearScreen(COLOR_BLACK);
    buzzer_set_period(700);
    drawString5x7(0, 0, "Congrats!", COLOR_SEA_GREEN, COLOR_BLACK);
    break;
  case 4:
    clearScreen(COLOR_BLACK);
    buzzer_off();
    drawString5x7(0, 0, "Mute!", COLOR_YELLOW, COLOR_BLACK);
    break;

  }
  switch_state =0; 
}
