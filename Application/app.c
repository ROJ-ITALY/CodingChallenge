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
//! \file app.h
//! \brief Application.
//!
//! \author Marco Arlone (marco.arlone@vandewiele.com)
// ___________________________________________________________________________

#include "gpio.h"
#include "app.h"

// ___________________________________________________________________________
//!	\brief Application main function (weak version).
//!
//!	Called by "main" function after initializations.
// ___________________________________________________________________________
__weak void APP_Main(void)
{
	for (;;)
	{
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		HAL_Delay(500);
	}
}
