/*
 * List10_05.c
 *
 *  Created on: 2020/01/27
 *      Author: andy
 */
#include <stdio.h>

void sum_diff(int n1, int n2, int *sum, int *diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("二つの整数を入力してください。");
	printf("整数a : ");
	fflush(0); scanf("%d", &na);
	printf("整数b : ");
	fflush(0); scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);

	printf("和は%dで差は%dです。\n", wa, sa);

	return 0;
}

