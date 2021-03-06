/*
 * Copyright (C) 2017 - 2018 FIX94
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#ifndef vrc3_h_
#define vrc3_h_

void vrc3init(uint8_t *prgROM, uint32_t prgROMsize, 
			uint8_t *prgRAM, uint32_t prgRAMsize,
			uint8_t *chrROM, uint32_t chrROMsize);
void vrc3initGet8(uint16_t ori_addr);
void vrc3initSet8(uint16_t ori_addr);
void vrc3cycle();

#endif
