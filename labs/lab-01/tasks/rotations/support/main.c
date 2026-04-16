// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>

#include "rotate.h"

int main(void)
{
	/* TODO: Test functions */
	unsigned int number = 0x80000000;
	rotate_left(&number, 1);
	printf("%u\n", number);
	number = 0x00000001;
	rotate_right(&number, 16);
	printf("%u\n", number);
	return 0;
}
