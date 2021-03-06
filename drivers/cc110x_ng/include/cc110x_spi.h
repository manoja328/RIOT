/******************************************************************************
 * Copyright 2008, Freie Universitaet Berlin (FUB). All rights reserved.
 *
 * These sources were developed at the Freie Universitaet Berlin, Computer Systems
and Telematics group (http://cst.mi.fu-berlin.de).
 * ----------------------------------------------------------------------------
 * This file is part of RIOT.
 *
 * This file subject to the terms and conditions of the GNU Lesser General
 * Public License. See the file LICENSE in the top level directory for more
 * details.
 *
*******************************************************************************/

/**
 * @ingroup		dev_cc110x
 * @{
 */

/**
 * @file
 * @internal
 * @brief		TI Chipcon CC1100 SPI driver
 *
 * @author      Freie Universität Berlin, Computer Systems & Telematics
 * @author		Thomas Hillebrandt <hillebra@inf.fu-berlin.de>
 * @author		Heiko Will <hwill@inf.fu-berlin.de>
 * @version     $Revision: 1775 $
 *
 * @note		$Id: cc110x_spi.h 1775 2010-01-26 09:37:03Z hillebra $
 */

#ifndef CC1100_SPI_H_
#define CC1100_SPI_H_

int cc110x_get_gdo0(void);
int cc110x_get_gdo1(void);
int cc110x_get_gdo2(void);

void cc110x_spi_init(void);
void cc110x_spi_cs(void);
void cc110x_spi_select(void);
void cc110x_spi_unselect(void);

/** @} */
#endif /* CC1100_SPI_H_ */
