#include "buzzer.h"
#include "stateMachines.h"
#include <msp430.h>
#include "switches.h"


char switch1_state,switch2_state,switch3_state,switch4_state;
char switch_state_changed;

void
switch_state = 0;
static char
switch_update_interrupt_sense(){
  char p2val = P2IN;
  P2IES |= (p2val & SWITCHES);
  P2IES &= (p2val | ~SWITCHES);
  return p2val;
}


SWITCH_INIT(){
  P2REN |= SWITCHES;
  P2IE |= SWITCHES;
  P2OUT |= SWITCHES;
  P2DIR &= ~SWITCHES;
  SWITCH_UPDATE_INTERRUPT_SENSE();
}
if(switch_state) //sets switch state to what was pressed
  switch_state = 1;
