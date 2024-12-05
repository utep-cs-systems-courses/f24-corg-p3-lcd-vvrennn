#include" buzzer.h"
#include "stateMachines.h"
#include <msp430.h>


char switch1_state,switch2_state,switch3_state,switch4_state;
char switch_state_changed;
void

switch_init(){
  P2REN |= SWITCHES;
  P2IE = SWITCHES;
  P2OUT |= SWITCHES;
  P2DIR &= ~SWITCHES;
  switch_update_interrupt_sense();
}
if (switch1_state) //sets switch state to what was pressed
  switch_state = 1;
