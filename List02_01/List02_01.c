/*
 * List02_01.c
 *
 *  Created on: 2019/12/29
 *      Author: andy
 */
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	double r;

	printf("整数aとbの値 : ");
	fflush(0); scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);

	printf("(a+b)/2 = %d\n", (a + b) / 2);

	printf("平均値  = %f\n\n", (double)(a + b) / 2);

	printf("半径 : ");
	fflush(0); scanf("%lf", &r);

	printf("半径%.3fの円の面積は%.3fです。\n", r, 3.14 * r * r);

	return 0;
}
