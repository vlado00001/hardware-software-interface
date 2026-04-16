// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>

#include "odd_even.h"

void print_binary(int number, int nr_bits)
{
	/* TODO */
	//printf("0b%08b\n", number);
	printf("0b");
	for (int i = 0; i < nr_bits; i++) {
		int mask = 1 << (nr_bits - 1 - i);
		printf("%d", (number & mask) >> (nr_bits - 1 - i));
	}
	printf("\n");
}

void check_parity(int *numbers, int n)
{
	/* TODO */
	for (int i = 0; i < n; i++) {
		if (!(*(numbers + i) & 1)) {
			print_binary(*(numbers + i), 8/*sizeof(*(numbers + i)) * 8*/ );
		} else {
			printf("0x%08X\n", *(numbers + i));
		}
	}
}

