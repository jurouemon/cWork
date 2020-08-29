/*
 * Ensyu05_03.c
 *
 *  Created on: 2020/01/12
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {17, 23, 36, 0, 0};
	int b[5];

	for (i = 0; i < 5; i++) {
		b[i] = a[4 -i];
	}
	puts("  a    b ");
	puts("---------");

	for (i = 0; i < 5; i++) {
		printf("%4d%4d\n", a[i], b[i]);
	}

	printf("last = %d", i);

	return 0;
}

