// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

void rotate_left(unsigned int *number, int bits)
{
	/* TODO */
	for (int i = 0; i < bits; i++) {
		unsigned int bit = (*number & (1 << 31)) >> 31;
		*number = (*number << 1) | bit;
	}
}

void rotate_right(unsigned int *number, int bits)
{
	/* TODO */
	for (int i = 0; i < bits; i++) {
		unsigned int bit = (*number & 1) << 31;
		*number = (*number >> 1) | bit;
	}
}
