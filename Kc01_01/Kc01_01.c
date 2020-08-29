/*
 * Kc01_01.c
 *
 *  Created on: 2020/01/18
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int score;

	do {
		if (score != 0)
			printf("点数は 0～100の範囲で入力して下さい。\n");
		printf("テストの点数を入力 : ");
		fflush(0); scanf("%d", &score);
	} while (score < 0 || score > 100);

	printf("入力された点数 : %d\n", score);

	return 0;
}

