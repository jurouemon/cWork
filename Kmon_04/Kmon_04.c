/*
 * Kmon_04.c
 *
 *  Created on: 2020/02/09
 *      Author: andy
 */
#include <stdio.h>

struct s {
	unsigned char ch[2];
	unsigned short sh;
};

union u {
	unsigned char ch[2];
	unsigned short sh;
};

int main(void)
{
	struct s data_s;
	union u data_u;

	data_s.ch[0] = 0xab;
	data_s.ch[1] = 0xcd;
	data_s.sh = 0x1234;

	data_u.ch[0] = 0xab;
	data_u.ch[1] = 0xcd;
	data_u.sh = 0x1234;

	printf("(22) = %x\n", data_s.ch[0]);
	printf("(23) = %x\n", data_u.ch[1]);
	printf("(24) = %d\n", sizeof data_s);
	printf("(25) = %d\n", sizeof data_u);

	return 0;
}

