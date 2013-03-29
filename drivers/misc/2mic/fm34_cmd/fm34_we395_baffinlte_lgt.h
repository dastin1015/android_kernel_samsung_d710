/*
 * Copyright (C) 2012 Samsung Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


 #ifndef __FEM34_WE395_CMD_H__
#define __FEM34_WE395_CMD_H__

unsigned char loopback_cmd[] = {
/*0xC0,*/
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC0, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xC1, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xC2, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x22, 0xC3, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x00, 0xB8,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x02, 0x01, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x6D, 0x99,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xDE,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x03, 0xC8,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x26,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x3C, 0x00, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x50, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x0F, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x0E, 0x0E,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x05, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x21, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x1C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x77, 0x2C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x05,
	0xFC, 0xF3, 0x3B, 0x23, 0x86, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8B, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8C, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA6, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xB7, 0x00, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xC9, 0x16, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xCB, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCD, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDF, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE0, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE1, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE2, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x16, 0x3E,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x16, 0xA2,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x2C, 0xCC,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x0C,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x03, 0x5E,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_ExtraVol_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x02, 0x01, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xDE,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x03, 0xC8,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x50,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x3C, 0x00, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x50, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x0E, 0x0E,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x05, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x21, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x1C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x77, 0x2C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x86, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8B, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8C, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA6, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x09,
	0xFC, 0xF3, 0x3B, 0x23, 0xB7, 0x00, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xC9, 0x16, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xCB, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCD, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x16, 0x3E,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x16, 0xA2,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x2C, 0xCC,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x6D, 0x99,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x26,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x0F, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x05,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDF, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE0, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE1, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE2, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x0C,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x03, 0x5E,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_NS_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x8F,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F, 0x82, 0x06, 0xB8, 0x0F, 0x00, 0xF8, 0x27,
	0x9E, 0xFF, 0x22, 0x72, 0x0F, 0x70, 0x82, 0x39,
	0x34, 0x00, 0x0E, 0x19, 0x99, 0xCF, 0x36, 0x70,
	0x21, 0x3C, 0x00, 0xB5, 0x40, 0xCC, 0xC7, 0x34,
	0x00, 0x0E, 0x19, 0x6F, 0xBF, 0x80, 0x9C, 0xDA,
	0x22, 0xF2, 0x9F, 0x48, 0xA0, 0x04, 0x26, 0xE2,
	0x0F, 0x22, 0x00, 0x04, 0x90, 0x9C, 0xDA, 0x82,
	0x3A, 0x5A, 0x34, 0x00, 0x0E, 0x19, 0x59, 0xFF,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x99, 0x9B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x50, 0x1C,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x96, 0xF8,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x23,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x95, 0x9E,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x28,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x48,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x7D, 0x99,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xCF,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x20, 0x2C,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x26,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x0C,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x60, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x61, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x64, 0x00, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x03, 0x5E,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x0C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x05, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x1C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x07,
	0xFC, 0xF3, 0x3B, 0x23, 0x86, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8B, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0x42, 0x22,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x33, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x46, 0x8F,
	0xFC, 0xF3, 0x3B, 0x23, 0x94, 0xFF, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x95, 0xFF, 0xF4,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA6, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xA7, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xBA, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x00, 0x70,
	0xFC, 0xF3, 0x3B, 0x23, 0xC9, 0x16, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xCB, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCD, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x03, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD3, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDF, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE0, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE1, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE2, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x16, 0x3E,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x16, 0xA2,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x2C, 0xCC,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEF, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x54, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xBF, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x02, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x1E, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x1E, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x53, 0x38, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x54, 0x0F, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x55, 0x44, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x01, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x58, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x59, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5A, 0x05, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5B, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x0C, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x77, 0x2C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x38, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x01, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_ExtraVol_NS_cmd[] = {
/*0xC0,*/
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x8F,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F, 0x82, 0x06, 0xB8, 0x0F, 0x00, 0xF8, 0x27,
	0x9E, 0xFF, 0x22, 0x72, 0x0F, 0x70, 0x82, 0x39,
	0x34, 0x00, 0x0E, 0x19, 0x99, 0xCF, 0x36, 0x70,
	0x21, 0x3C, 0x00, 0xB5, 0x40, 0xCC, 0xC7, 0x34,
	0x00, 0x0E, 0x19, 0x6F, 0xBF, 0x80, 0x9C, 0xDA,
	0x22, 0xF2, 0x9F, 0x48, 0xA0, 0x04, 0x26, 0xE2,
	0x0F, 0x22, 0x00, 0x04, 0x90, 0x9C, 0xDA, 0x82,
	0x3A, 0x5A, 0x34, 0x00, 0x0E, 0x19, 0x59, 0xFF,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA2, 0x99, 0x9B,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB2, 0x50, 0x1C,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA3, 0x96, 0xF8,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB3, 0x50, 0x23,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA4, 0x95, 0x9E,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB4, 0x50, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x0C,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDF, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE0, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE1, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE2, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x16, 0x3E,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x16, 0xA2,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x2C, 0xCC,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEF, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x54, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD3, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x50,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x22, 0xBF, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x48,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x7D, 0x99,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xCF,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x20, 0x2C,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x02, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x26,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x1E, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x1E, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x53, 0x38, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x54, 0x0F, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x55, 0x44, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x01, 0x28,
	0xFC, 0xF3, 0x3B, 0x23, 0x58, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x59, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5A, 0x05, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5B, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x60, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x61, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x64, 0x00, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x03, 0x5E,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x0C, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x0C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x05, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x1C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x77, 0x2C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x38, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x0A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x03, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x07,
	0xFC, 0xF3, 0x3B, 0x23, 0x86, 0x48, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8B, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0x42, 0x22,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x33, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x44, 0x44,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x46, 0x8F,
	0xFC, 0xF3, 0x3B, 0x23, 0x94, 0xFF, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x95, 0xFF, 0xF4,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA6, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x23, 0xA7, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x08,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xBA, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x00, 0x70,
	0xFC, 0xF3, 0x3B, 0x23, 0xC9, 0x16, 0x18,
	0xFC, 0xF3, 0x3B, 0x23, 0xCB, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCD, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x04, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x01, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x03, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HF_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xB8, 0x1F, 0x40,
	0xFC, 0xF3, 0x3B, 0x22, 0xB9, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x48,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x6D, 0xD9,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xCF,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x2D,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x04, 0x03,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x70,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x00, 0xFA,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x50,
	0xFC, 0xF3, 0x3B, 0x23, 0x11, 0x4E, 0xA9,
	0xFC, 0xF3, 0x3B, 0x23, 0x12, 0xB1, 0x5C,
	0xFC, 0xF3, 0x3B, 0x23, 0x13, 0x4E, 0xA9,
	0xFC, 0xF3, 0x3B, 0x23, 0x14, 0x95, 0x7C,
	0xFC, 0xF3, 0x3B, 0x23, 0x15, 0x5C, 0xB7,
	0xFC, 0xF3, 0x3B, 0x23, 0x16, 0x54, 0x2A,
	0xFC, 0xF3, 0x3B, 0x23, 0x17, 0xAB, 0xEF,
	0xFC, 0xF3, 0x3B, 0x23, 0x18, 0x54, 0x2A,
	0xFC, 0xF3, 0x3B, 0x23, 0x19, 0x84, 0x8D,
	0xFC, 0xF3, 0x3B, 0x23, 0x1A, 0x79, 0x55,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x27, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2D, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x00, 0x30,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0xFF, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x3C, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x3D, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x3F, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0x41, 0xFF, 0xF3,
	0xFC, 0xF3, 0x3B, 0x23, 0x42, 0xFF, 0xF2,
	0xFC, 0xF3, 0x3B, 0x23, 0x43, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x44, 0x00, 0x05,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x0B, 0x4D,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x34, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x34, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0x53, 0x20, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x54, 0x1F, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x6A, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x5A, 0x09, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5B, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x5C, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x5F, 0x00, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x64, 0x00, 0x3C,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x10, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x72, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x15, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7A, 0x05, 0xAA,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7D, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7F, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x07,
	0xFC, 0xF3, 0x3B, 0x23, 0x8C, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8D, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x8E, 0x74, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0xA9, 0x98,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x75, 0x56,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x54, 0x43,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x33, 0x36,
	0xFC, 0xF3, 0x3B, 0x23, 0x96, 0x24, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x97, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9D, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9E, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA5, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0xB5, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB7, 0x00, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xB8, 0x78, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB9, 0x24, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBA, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBB, 0x0C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBC, 0x00, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x01, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xBE, 0x26, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x78, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x7F, 0xA0,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x90,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEF, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x6A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0D,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x0C,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HF_ExtraVol_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x68, 0x64, 0x04,
	0xFC, 0xF3, 0x3B, 0x3F, 0xE8, 0x00, 0x50,
	0xFC, 0xF3, 0x0D, 0x10, 0x00, 0x0C, 0x2C, 0x00,
	0xFC, 0xF3, 0x88,
	0x2E, 0xEC, 0xAC, 0x19, 0x00, 0x52, 0x47, 0xFF,
	0xF4, 0x19, 0x00, 0x6F, 0x1C, 0x99, 0x8F, 0x37,
	0x83, 0x01, 0x47, 0xC2, 0x97, 0x60, 0x00, 0xA5,
	0x62, 0xE2, 0xE6, 0x19, 0x00, 0xC4, 0x42, 0x66,
	0x67, 0x20, 0xCE, 0x0F, 0x0D, 0x00, 0xBC, 0x0D,
	0x00, 0xCD, 0x21, 0x0A, 0x0F, 0x6A, 0x64, 0xB4,
	0x80, 0x7A, 0x17, 0x68, 0x8A, 0xA6, 0x0E, 0x64,
	0x0F, 0x0E, 0x44, 0x0F, 0x10, 0x5B, 0x59, 0x90,
	0x7A, 0x1F, 0x80, 0x7A, 0x2A, 0x22, 0x6A, 0x0F,
	0x90, 0x7A, 0x2A, 0x34, 0x00, 0x0E, 0x1A, 0x61,
	0x0F,
	0xFC, 0xF3, 0x68, 0x64, 0x00,
	0xFC, 0xF3, 0x3B, 0x3F, 0xA1, 0xA6, 0x06,
	0xFC, 0xF3, 0x3B, 0x3F, 0xB1, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xB8, 0x1F, 0x40,
	0xFC, 0xF3, 0x3B, 0x22, 0xB9, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF2, 0x00, 0x48,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x6D, 0xD9,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x03, 0xCF,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x2D,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x04, 0x03,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x70,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x00, 0xF7,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x90,
	0xFC, 0xF3, 0x3B, 0x23, 0x11, 0x4E, 0xA9,
	0xFC, 0xF3, 0x3B, 0x23, 0x12, 0xB1, 0x5C,
	0xFC, 0xF3, 0x3B, 0x23, 0x13, 0x4E, 0xA9,
	0xFC, 0xF3, 0x3B, 0x23, 0x14, 0x95, 0x7C,
	0xFC, 0xF3, 0x3B, 0x23, 0x15, 0x5C, 0xB7,
	0xFC, 0xF3, 0x3B, 0x23, 0x16, 0x54, 0x2A,
	0xFC, 0xF3, 0x3B, 0x23, 0x17, 0xAB, 0xEF,
	0xFC, 0xF3, 0x3B, 0x23, 0x18, 0x54, 0x2A,
	0xFC, 0xF3, 0x3B, 0x23, 0x19, 0x84, 0x8D,
	0xFC, 0xF3, 0x3B, 0x23, 0x1A, 0x79, 0x55,
	0xFC, 0xF3, 0x3B, 0x23, 0x25, 0x58, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x26, 0x00, 0x38,
	0xFC, 0xF3, 0x3B, 0x23, 0x27, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x28, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x2D, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x2F, 0x00, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x32, 0x00, 0x30,
	0xFC, 0xF3, 0x3B, 0x23, 0x33, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x37, 0xFF, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0x39, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x3C, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x3D, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x3F, 0x00, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0x41, 0xFF, 0xF3,
	0xFC, 0xF3, 0x3B, 0x23, 0x42, 0xFF, 0xF2,
	0xFC, 0xF3, 0x3B, 0x23, 0x43, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x44, 0x00, 0x05,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x0B, 0x4D,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x03, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x34, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x34, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x52, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0x53, 0x20, 0x10,
	0xFC, 0xF3, 0x3B, 0x23, 0x54, 0x1F, 0xF0,
	0xFC, 0xF3, 0x3B, 0x23, 0x56, 0x6A, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x5A, 0x09, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x5B, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x5C, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x5F, 0x00, 0x40,
	0xFC, 0xF3, 0x3B, 0x23, 0x64, 0x00, 0x3C,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6F, 0x10, 0x06,
	0xFC, 0xF3, 0x3B, 0x23, 0x70, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x71, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x72, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x73, 0x12, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x74, 0x15, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x75, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7A, 0x05, 0xAA,
	0xFC, 0xF3, 0x3B, 0x23, 0x7C, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7D, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x7F, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x80, 0x70, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x81, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x82, 0x04, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x83, 0x05, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x84, 0x00, 0x07,
	0xFC, 0xF3, 0x3B, 0x23, 0x8C, 0x10, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x8D, 0x00, 0x04,
	0xFC, 0xF3, 0x3B, 0x23, 0x8E, 0x74, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x90, 0xA9, 0x98,
	0xFC, 0xF3, 0x3B, 0x23, 0x91, 0x75, 0x56,
	0xFC, 0xF3, 0x3B, 0x23, 0x92, 0x54, 0x43,
	0xFC, 0xF3, 0x3B, 0x23, 0x93, 0x33, 0x36,
	0xFC, 0xF3, 0x3B, 0x23, 0x96, 0x24, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x97, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9C, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9D, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x9E, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xA5, 0x00, 0x07,
	0xFC, 0xF3, 0x3B, 0x23, 0xB5, 0x60, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB7, 0x00, 0x20,
	0xFC, 0xF3, 0x3B, 0x23, 0xB8, 0x78, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB9, 0x24, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBA, 0x06, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBB, 0x0C, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xBC, 0x00, 0xC0,
	0xFC, 0xF3, 0x3B, 0x23, 0xBD, 0x01, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xBE, 0x26, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xCF, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD0, 0x06, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0xD1, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD2, 0x18, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xD5, 0x78, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDB, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xDC, 0x50, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE5, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xE6, 0x7F, 0xA0,
	0xFC, 0xF3, 0x3B, 0x23, 0xE7, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xE8, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xE9, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEA, 0x7F, 0xFF,
	0xFC, 0xF3, 0x3B, 0x23, 0xEB, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0xEC, 0x00, 0x90,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x00, 0x60,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x20, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEF, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x6A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xB3, 0x00, 0x0E,
	0xFC, 0xF3, 0x3B, 0x23, 0xB4, 0x00, 0x0D,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char EP_cmd[] = {
/* 0xC0, */
	0xFC, 0xF3, 0x3B, 0x22, 0xC2, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC3, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x02, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x03, 0x01, 0x01,
	0xFC, 0xF3, 0x3B, 0x23, 0x04, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x05, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x08, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x09, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x01, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x10, 0x12, 0x80,
	0xFC, 0xF3, 0x3B, 0x23, 0x48, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x49, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x50, 0x38, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x51, 0x28, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x6E, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xED, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xEE, 0x40, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0xF0, 0x30, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char BT_SCO_cmd[] = {
/*0xC0,*/
	0xFC, 0xF3, 0x3B, 0x22, 0xC0, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC1, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xC2, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC3, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x00, 0xB8,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_FACTORY_RCV_cmd[] = {
/*0xC0,*/
	0xFC, 0xF3, 0x3B, 0x22, 0xC0, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC1, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC2, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC3, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x00, 0xB8,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

unsigned char HS_FACTORY_SPK_cmd[] = {
/*0xC0,*/
	0xFC, 0xF3, 0x3B, 0x22, 0xC0, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xC1, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xC2, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC3, 0x00, 0x02,
	0xFC, 0xF3, 0x3B, 0x22, 0xC6, 0x00, 0x7D,
	0xFC, 0xF3, 0x3B, 0x22, 0xC7, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xC8, 0x00, 0x18,
	0xFC, 0xF3, 0x3B, 0x22, 0xD2, 0x82, 0x94,
	0xFC, 0xF3, 0x3B, 0x22, 0xEE, 0x00, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF5, 0x00, 0x03,
	0xFC, 0xF3, 0x3B, 0x22, 0xF6, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xF8, 0x80, 0x01,
	0xFC, 0xF3, 0x3B, 0x22, 0xF9, 0x08, 0x7F,
	0xFC, 0xF3, 0x3B, 0x22, 0xFA, 0x24, 0x8B,
	0xFC, 0xF3, 0x3B, 0x23, 0x07, 0x00, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0A, 0x1A, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x0C, 0x00, 0xB8,
	0xFC, 0xF3, 0x3B, 0x23, 0x0D, 0x02, 0x00,
	0xFC, 0xF3, 0x3B, 0x23, 0x65, 0x08, 0x00,
	0xFC, 0xF3, 0x3B, 0x22, 0xFB, 0x00, 0x00
};

#endif
