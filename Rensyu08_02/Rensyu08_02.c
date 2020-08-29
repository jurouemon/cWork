/*
 * Rensyu08_02.c
 *
 *  Created on: 2020/02/02
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int str[10];
	int i;

	printf("10個の数値を入力\n");
	for (i = 0; i < 10; i++){
		fflush(0); scanf("%d", str + i);

	}
	putchar('\n');
	for (i = 9; i >= 0; i--) {
		printf("%d", *(str + i));
	}

	return 0;
}

