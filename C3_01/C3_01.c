/*
 * C3_01.c
 *
 *  Created on: 2020/01/20
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int x, y, z;
	char str[] = "abcbadbabce";

	x = 1;
	y = 0;
	while (y < 3) {
		x += (x + 1);
		y++;
	}
	printf("%d\n", x);

	x = 4;
	y = 1;
	do {
		y += x;
	} while (--x > 0);
	printf("%d\n", x);
	printf("%d\n", y);

	x = 1;
	while (++x < 10) {
		x += 4;
	}
	printf("%d\n", x);

	x = 2;
	y = 0;
	while (str[x++] != 'a') {
		y++;
	}
	printf("%c\n", str[x]);
	printf("%d\n", y);

	z = 0;
	x = 0;
	while (str[x] != 'c') {
		y = x + 1;
		while (str[y] != '\0') {
			if (str[x] == str[y]) {
				z++;
			}
			y++;
		}
		x++;
	}
	printf("%d\n", x);
	printf("%d\n", z);

	return 0;
}

