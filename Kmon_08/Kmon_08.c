/*
 * Kmon_08.c
 *
 *  Created on: 2020/02/07
 *      Author: andy
 */
#include <stdio.h>

void func_1(int *x);
int func_2(int *y);
int func_3(int *y);
int func_4(int *y);
int func_5(int *a, int *b);

int x = 10;
int y = 20;

int main(void)
{
	int x = 30, z = 40;

	func_1(&x);
	printf("%d\n", x + y);

	x = func_2(&z);
	printf("%d\n", x);

	x = 3;
	z = func_3(&x) + func_3(&x);
	printf("%d\n", z);

	x = 4;
	z = func_4(&x) + func_4(&x);
	printf("%d\n", z);

	x = 5;
	z = func_5(&x, &y);
	printf("%d\n", z);

	return 0;
}

void func_1(int *x)
{
	*x += 5;
}

int func_2(int *y)
{
	return *y + x;
}

int func_3(int *y)
{
	int x = 6;
	return ++x - --*y;
}

int func_4(int *y)
{
	static int x = 7;
	return ++x - --*y;
}

int func_5(int *a, int *b)
{
	return ++*a + ++x + --*b;
}
