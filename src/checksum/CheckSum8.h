/*
* Copyright (c) 2013-2015 Freescale Semiconductor, Inc.
* All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*/
#ifndef _CHECKSUM8_H_
#define _CHECKSUM8_H_

#include <stdint.h>

//! @addtogroup checksum8
//! @{

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// API
////////////////////////////////////////////////////////////////////////////////

#if __cplusplus
extern "C" {
#endif

	//! @name CheckSum8
	//@{

	uint8_t checksum8_calc(const uint8_t *src, uint32_t lengthInBytes);

	//@}

#if __cplusplus
}
#endif

//! @}

#endif
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
