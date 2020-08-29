/*
 * C344_03.c
 *
 *  Created on: 2020/01/21
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int i, j, a, b;
	int data[] = {5, 3, 4, 6, 2, 9, 7, 8};

	a = 0;
	b = 0;
	for (i = 0; i < 7; i += 2) {
		for (j = i + 1; j < 8; j++) {
			if (data[i] - data[j] > 0) {
				a += data[i] - data[j];
				b++;
			}
		}
	}
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}

