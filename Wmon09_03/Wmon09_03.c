/*
 * Wmon09_03.c
 *
 *  Created on: 2020/02/01
 *      Author: andy
 */
#include <stdio.h>

void swap1(int, int);
void swap2(int*, int*);

int main(void)
{
	int a = 10, b = 20;

	printf("a = %d, b = %d\n", a, b);
	swap1(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n", x, y);

	return;
}

void swap2(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("x = %d, y = %d\n", *x, *y);

	return;
}
