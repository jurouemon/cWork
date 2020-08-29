/*
 * Ensyu07_03.c
 *
 *  Created on: 2020/01/26
 *      Author: andy
 */
#include <stdio.h>

int count_bits(unsigned short x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) bits++;
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~(short)0U);
}

void print_bits(unsigned short x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--) {
		putchar(((x >> i) & 1U) ? '1' : '0');
	}
}

unsigned short rrotate(unsigned short x, int n)
{
	return x >> n | x << (int_bits() - n);
}

unsigned short lrotate(unsigned short x, int n)
{
	return x << n | x >> (int_bits() - n);
}

int main(void)
{
	unsigned short x;
	int n;

	printf("非負の整数を入力 : ");
	fflush(0); scanf("%hu", &x);
	printf("シフトするビット数 : ");
	fflush(0); scanf("%d", &n);

	printf("\nx            = ");     print_bits(x);
	printf("\n%dビット 右へ = ", n);
	print_bits(rrotate(x, n));

	putchar('\n');
	printf("\nx            = ");     print_bits(x);
	printf("\n%dビット 左へ = ", n);
	print_bits(lrotate(x, n));

	return 0;
}
