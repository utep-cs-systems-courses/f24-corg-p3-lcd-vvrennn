/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLACK);
  int col = 0, row = 0;
  int centerCol = width / 4, centerRow = height / 4;
  
   drawString5x7(0, 0, "Nice!", COLOR_WHITE, COLOR_BLACK);

  fillRectangle(30,30, 60, 60, COLOR_BLACK);
  
}
