// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

#include "len_xor.h"

int main(void)
{
	/* TODO: Test functions */
	char *buf = (char *) calloc(1024, 1);
	memmove(buf, "ababababacccbacbacbacbacbabc", sizeof("ababababacccbacbacbacbacbabc"));
	printf("%s: %d\n", buf, my_strlen(buf));
	equality_check(buf);
	free(buf);
	return 0;
}
