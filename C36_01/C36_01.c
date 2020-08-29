/*
 * C36_01.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>

#define CC   "CCompiler"
#define ADD1  1 + 3
#define ADD2  (x + y + z)

int main(void)
{
	int x = 8, y = 2, z = 5;
	printf("(9) = %s\n", CC);
	printf("(10) = %d\n", ADD1);
	printf("(11) = %d\n", ADD2);
	printf("(12) = %d\n", ADD2 * 2);

	return 0;
}

