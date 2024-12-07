#include <msp430.h>
#include "libTimer.h"
#include "switches.h"
#include "buzzer.h"
#include "stateMachines.h"
#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"


void main(void){
  configureClocks();
  switch_init();
  buzzer_init();
  enableWDTInterrupts();

  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLACK);
  int col = 0, row = 0;
  int centerCol = width / 4, centerRow = height / 4;

    
  or_sr(0x18); //CPU off,GIE on
}
//keep the red light on

//button is pressed

/*when button is pressed flash the red led 3 times
     switch case to check which button is pressed. 
        after the 3 flashes start the buzzer "whistle"
        and oscilate the green and red led for 3 seconds
        after the 3 seconds display the firework
        on the bottom of the lcd display the phrase
*/

//go back to the red led on and wait for another button to press.
