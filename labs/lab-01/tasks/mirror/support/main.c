// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mirror.h"

int main(void)
{
	/* TODO: Test function */
	char *buf = (char *) malloc(1024);
	memcpy(buf, "LoremIpsum\0", sizeof("LoremIpsum"));
	printf("%s\n", buf);
	mirror(buf);
	printf("%s\n", buf);
	memcpy(buf, "asdfghjl\0", sizeof("asdfghjl"));
	printf("%s\n", buf);
	mirror(buf);
	printf("%s\n", buf);
	memcpy(buf, "qwerty\0", sizeof("qwerty"));
	printf("%s\n", buf);
	mirror(buf);
	printf("%s\n", buf);
	free(buf);
	return 0;
}
