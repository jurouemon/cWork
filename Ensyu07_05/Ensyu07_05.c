/*
 * Ensyu07_05.c
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

unsigned short set_bit(int n)
{
	unsigned short w = 1U;
	int i;
	for (i = 1; i <= n - 1; i++) {
		w <<= 1;
		w  += 1;
	}
	return w;
}

unsigned short set_n(unsigned short x, int pos, int n)
{
	return x | (set_bit(n) << (pos - 1));
}

unsigned short reset_n(unsigned short x, int pos, int n)
{
	return x & (~(set_bit(n) << (pos - 1)));
}

unsigned short inverse_n(unsigned short x, int pos, int n)
{
	return x ^ (set_bit(n) << (pos - 1));
}

int main(void)
{
	unsigned short x;
	int pos, n;

	printf("非負の整数 : ");
	fflush(0); scanf("%hu", &x);
	printf("変更開始ビット番号 : ");
	fflush(0); scanf("%d", &pos);
	printf("変更ビット個数 : ");
	fflush(0); scanf("%d", &n);

	printf("\n%dを2進数に変換                = ", x); print_bits(x);
	printf("\n%dの%dビット目から%dビットを1に  = ", x, pos, n);
	print_bits(set_n(x, pos, n));
	printf("\n%dの%dビット目から%dビットを0に  = ", x, pos, n);
	print_bits(reset_n(x, pos, n));
	printf("\n%dの%dビット目から%dビットを反転 = ", x, pos, n);
	print_bits(inverse_n(x, pos, n));

	return 0;
}
