/*
 * f.timer.h
 *
 *  Created on: Nov 30, 2024
 *      Author: Lam Quang Trung
 */

#ifndef INC_F_TIMER_H_
#define INC_F_TIMER_H_

#include "f_global.h"

int currentCounter(int timer);
int isTimerUp(int Timer);
void setTimer(int timer, int duration);
void timerRun();

#endif /* INC_F_TIMER_H_ */
