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
