/*
 * Kc13_31.c
 *
 *  Created on: 2020/02/02
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, arraycnt;

	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		printf("%2d ", array[i]);
	}
	putchar('\n');

	arraycnt = sizeof(array) / sizeof(array[0]);
	for (i = 1; i <= arraycnt; i++) {
		printf("%2d ", array[arraycnt - i]);
	}

	return 0;
}

