/*
 * Ensyu07_04.c
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

unsigned short set(unsigned short x, int pos)
{
	return x | (1U << (pos - 1)) ;
}

unsigned short reset(unsigned short x, int pos)
{
	return x & (~(1U << (pos - 1)));
}

unsigned short inverse(unsigned short x, int pos)
{
	return x ^ (1U << (pos - 1));
}

int main(void)
{
	unsigned short x;
	int n;

	printf("非負の数 : ");
	fflush(0); scanf("%hu", &x);
	printf("変更するビット番号 : ");
	fflush(0); scanf("%d", &n);

	printf("\n%d                  = ", x);  print_bits(x);
	printf("\n%dの第%dビットを1に  = ", x, n);
	print_bits(set(x, n));
	printf("\n%dの第%dビットを0に  = ", x, n);
	print_bits(reset(x, n));
	printf("\n%dの第%dビットを反転 = ", x, n);
	print_bits(inverse(x, n));
	putchar('\n');

	return 0;
}
