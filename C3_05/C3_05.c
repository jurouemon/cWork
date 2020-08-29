/*
 * C3_05.c
 *
 *  Created on: 2020/01/20
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int a, b;

	a = 2;
	if (a++ == 2) {
		printf("(28) : T%d\n", a);
	} else {
		printf("(28) : F%d\n", a);
	}

	a = 1;
	b = 3;
	if (++a == 1 && ++b == 3) {
		printf("(29) : T%d%d\n", a, b);
	} else {
		printf("(29) : F%d%d\n", a, b);
	}

	a = 1;
	b = 3;
	if (++a == 1 || b++ == 3) {
		printf("(30) : T%d%d\n", a, b);
	} else {
		printf("(30) : F%d%d\n",a, b);
	}

	a = 1;
	b = 3;
	if (a++ == 1 && b++ == 3) {
		printf("(31) : T%d%d\n", a, ++b);
	} else {
		printf("(31) : F%d%d\n", a, --b);
	}

	a = 1;
	b = 3;
	if (a++ == 1 || ++b == 3) {
		printf("(32) : T%d%d\n", --a, b);
	} else {
		printf("(32) : F%d%d\n", ++a, b);
	}

	return 0;
}

