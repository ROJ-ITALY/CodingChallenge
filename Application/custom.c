// ___________________________________________________________________________
//
//	Roj s.r.l. (ROJ)
//  via Vercellone 11, 13900 Biella, Italy
//  © Copyright 2023, Roj s.r.l., Biella, Italy
//
//  All rights reserved. ROJ’s source code is an unpublished work and the
//  use of a copyright notice does not imply otherwise. This source code
//  contains confidential, trade secret material of ROJ. Any attempt or
//  participation in deciphering, decoding, reverse engineering or in any
//  way altering the source code is strictly prohibited, unless the prior
//  written consent of ROJ is obtained.
//
//! \file custom.h
//! \brief Customization.
//!
//! \author Marco Arlone (marco.arlone@vandewiele.com)
// ___________________________________________________________________________

#include <usart.h>

int __io_putchar(int ch)
{
	HAL_UART_Transmit(&hlpuart1, (uint8_t *) &ch, 1, 100);
	return ch;
}
