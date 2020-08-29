/*
 * List05_01.c
 *
 *  Created on: 2020/01/07
 *      Author: andy
 */
#include <stdio.h>

#define NUMBER 7
int main(void)
{
	int i;
	int x[NUMBER];


	for(i = 0; i < NUMBER; i++) {
		printf("x[%d] : ", i);
		fflush(0); scanf("%d", &x[i]);
	}
	for(i = 0; i < NUMBER / 2; i++) {
		int temp = x[i];
		x[i]     = x[(NUMBER - 1) - i];
		x[6 - i] = temp;
	}

	puts("反転しました。");
	for(i = 0; i < NUMBER; i++) {
		printf("x[%d] = %d\n", i, x[i]);
	}

	return 0;
}

