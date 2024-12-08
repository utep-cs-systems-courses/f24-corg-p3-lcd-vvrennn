#include "switches.h"
#include "buzzer.h"
#include "stateMachines.h"
#include <msp430.h>
#include "lcdutils.h"
#include "lcddraw.h"


void switch_state_advance(){
  u_char width = screenWidth, height = screenHeight;
  int col = 0, row = 0;
  int centerCol = width / 2, centerRow = height / 2;
  int increment = 0;
  switch (switch_state){
  case 1:
    increment = 10;
    clearScreen(COLOR_BLACK);
    buzzer_set_period(1300);//buzzer is set to a input when a certain button is pressed
    draw_spiral(screenWidth, screenHeight, increment, COLOR_PURPLE);// calls the draw spiral function below.
    drawString5x7(0, 0, "Nice!", COLOR_WHITE, COLOR_BLACK); //make the text display
    break;
  case 2:
    increment = 10;
    clearScreen(COLOR_BLACK);
    buzzer_set_period(200);
    draw_spiral(screenWidth, screenHeight,increment, COLOR_YELLOW);// calls the draw spiral function below.
    increment= 20;
    draw_spiral(screenWidth, screenHeight,increment, COLOR_FIREBRICK);
    drawString5x7(0, 0, "You did it!", COLOR_FIREBRICK, COLOR_BLACK);
    break;
  case 3:
    clearScreen(COLOR_BLACK);
    buzzer_set_period(700);
    increment= 30;
    draw_spiral(screenWidth, screenHeight,increment, COLOR_PURPLE);
    drawString5x7(0, 0, "Congrats!", COLOR_SEA_GREEN, COLOR_BLACK);
    break;
  case 4:
    clearScreen(COLOR_BLACK);
    buzzer_off();
    increment= 1;
    draw_spiral(screenWidth, screenHeight,increment, COLOR_RED);
    drawString5x7((screenWidth / 2) - 10, (screenHeight / 2) - 10, "Mute!", COLOR_WHITE, COLOR_RED);
    break;

  }
  switch_state =0; 
}

