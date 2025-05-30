/*
 * f_uart.h
 *
 *  Created on: Nov 30, 2024
 *      Author: Lam Quang Trung
 */

#ifndef INC_F_UART_H_
#define INC_F_UART_H_

#include "f_global.h"
#include <stdio.h>
#include <string.h>

extern UART_HandleTypeDef huart2;

void uartTransmit7SEG(uint8_t);
void uartProcessing();

#endif /* INC_F_UART_H_ */
