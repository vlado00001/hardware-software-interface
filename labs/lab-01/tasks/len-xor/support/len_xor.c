// SPDX-License-Identifier: BSD-3-Clause

#include "len_xor.h"

int my_strlen(const char *str)
{
	/* TODO */
	/**
	 * The cast to (void) is used to avoid a compiler warning. Remove the line
	 * below to find out what the warning is.
	 *
	 * Remove this cast when implementing the function.
	 */
	// (void) str;
	if (*str == 0) return 0;
	return 1 + my_strlen(++str);
}

void equality_check(const char *str)
{
	/* TODO */
	// (void) str;
	int len = my_strlen(str);
	int i = 0;
	while (*(str + i) ^ 0) {
		//printf("%d: %c\n", i, *(str + i));
		if (!(*(str + i) ^ *(str + (i + (1 << i)) % len))) {
			printf("Address of %c: %p\n", *(str + i), str + i);
		}
		i++;
	}
}
