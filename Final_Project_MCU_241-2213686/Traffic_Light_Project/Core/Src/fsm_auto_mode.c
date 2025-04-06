/*
 * fsm_auto_mode.c
 *
 *  Created on: Nov 30, 2024
 *      Author: Lam Quang Trung
 */


#include "fsm_auto_mode.h"

void fsmAutoModeRun()
{
	switch (mode)
	{
		case INIT:
			mode = AUTO_MODE;
			resetLight();
			setTimer(6, UART_TIME_STEP);
			break;
		case AUTO_MODE:
			// Switch to MANUAL MODE when press MODE button
			if (isButtonPressed(BUTTON_MODE))
			{
				mode = MANU_MODE;
			}

			// Display single LEDs according to the traffic rules
			displayLeds();
			break;
		default:
			break;
	}
}
