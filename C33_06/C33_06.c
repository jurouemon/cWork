/*
 * C33_06.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int param[][3] = {
					  {0, 1, 3},
					  {1, 2, 4},
					  {3, 4, 5}
	};

	int a, b, c, w;
	int p, q, r;
	int i, d[6];

	printf("最大公約数を求めたい三つの数値 : ");
	fflush(0); scanf("%d %d %d", &a, &b, &c);
	d[0] = a;
	d[1] = b;
	d[2] = c;

	for (i = 0; i < 3; i++) {
		p = d[param[i][0]];
		q = d[param[i][1]];
		if (p != q) {
			if (p < q) {
				w = p;
				p = q;
				q = w;
			}
			while (q != 0) {
				r = p % q;
				p = q;
				q = r;
			}
		}
		d[param[i][2]] = p;
	}

	printf("最大公約数は%d\n", d[5]);

	return 0;
}

