/*
 * Kc01_02.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int year;

	printf("西暦年を入力 : ");
	fflush(0); scanf("%d", &year);

	if (year % 4 == 0)
		printf("夏季五輪\n");
	if (year % 2 == 0 && year % 4 != 0)
		printf("冬季五輪\n");
	if (year %2 != 0)
		printf("五輪なし\n");

	return 0;
}


