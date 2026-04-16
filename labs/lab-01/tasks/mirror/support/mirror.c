// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mirror.h"

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

void mirror(char *s)
{
	/*for (int i = my_strlen(s) - 1; i >= 0; i--) {
		printf("%c", *(s + i));
	}
	printf("\n");
	(void) s;*/
	int len = my_strlen(s);
	for (int i = 0; i < len / 2; i++) {
		char aux = *(s + len - 1 - i);
		*(s + len - 1 - i) = *(s + i);
		*(s + i) = aux;
	}
}
