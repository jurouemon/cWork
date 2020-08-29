/*
 * Ensyu07_02.c
 *
 *  Created on: 2020/01/26
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	unsigned short x, xa, xb;
	unsigned short i, n;

	printf("非負の数 : ");
	fflush(0); scanf("%hu", &x);
	printf("シフトするビット数 : ");
	fflush(0); scanf("%hu", &n);

	xa = x;
	for (i = 1; i <= n; i++) {
		xa *= 2;
	}

	printf("%dの2の%d乗の乗算結果  = %d\n", x, n, xa);
	printf("%dを左に%dビットシフト = %d\n", x, n, x << n);

	xb = x;
	for (i = 1; i <= n; i++) {
		xb /= 2;
	}

	printf("%dの2の%d乗の除算結果  = %d\n", x, n, xb);
	printf("%dを右に%dビットシフト = %d\n", x, n, x >> n);

	return 0;
}

