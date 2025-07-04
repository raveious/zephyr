/*
 * Copyright (c) 2025 Ian Wakely
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_USBC_TCPC_HUSB238_PRIV_H_
#define ZEPHYR_DRIVERS_USBC_TCPC_HUSB238_PRIV_H_

#define HUSB238_REG_PD_STATUS0		0x00
#define HUSB238_REG_PD_STATUS1		0x01
#define HUSB238_REG_SRC_PDO_5V		0x02
#define HUSB238_REG_SRC_PDO_9V		0x03
#define HUSB238_REG_SRC_PDO_12V		0x04
#define HUSB238_REG_SRC_PDO_15V		0x05
#define HUSB238_REG_SRC_PDO_18V		0x06
#define HUSB238_REG_SRC_PDO_20V		0x07
#define HUSB238_REG_SRC_PDO			0x08
#define HUSB238_REG_GO_COMMAND		0x09

#define HUSB238_SRC_DETECT			BIT(7)

enum husb238_currents {
	/* PDO selection for 0.5A */
	CURRENT_0_5_A = 0b0000,
	/* PDO selection for 0.7A */
	CURRENT_0_7_A = 0b0001,
	/* PDO selection for 1.0A */
	CURRENT_1_0_A = 0b0010,
	/* PDO selection for 1.25A */
	CURRENT_1_25_A = 0b0011,
	/* PDO selection for 1.5A */
	CURRENT_1_5_A = 0b0100,
	/* PDO selection for 1.75A */
	CURRENT_1_75_A = 0b0101,
	/* PDO selection for 2.0A */
	CURRENT_2_0_A = 0b0110,
	/* PDO selection for 2.25A */
	CURRENT_2_25_A = 0b0111,
	/* PDO selection for 2.50A */
	CURRENT_2_50_A = 0b1000,
	/* PDO selection for 2.75A */
	CURRENT_2_75_A = 0b1001,
	/* PDO selection for 3.0A */
	CURRENT_3_0_A = 0b1010,
	/* PDO selection for 3.25A */
	CURRENT_3_25_A = 0b1011,
	/* PDO selection for 3.5A */
	CURRENT_3_5_A = 0b1100,
	/* PDO selection for 4.0A */
	CURRENT_4_0_A = 0b1101,
	/* PDO selection for 4.5A */
	CURRENT_4_5_A = 0b1110,
	/* PDO selection for 5.0A */
	CURRENT_5_0_A = 0b1111
};

#endif /* ZEPHYR_DRIVERS_USBC_TCPC_HUSB238_PRIV_H_ */