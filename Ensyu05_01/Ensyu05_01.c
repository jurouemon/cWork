/*
 * Ensyu05_01.c
 *
 *  Created on: 2020/01/07
 *      Author: andy
 */
#include <stdio.h>
#define NUMBER 10
int main(void)
{
	int i, num;
	int su[NUMBER];

	printf("データ数 : ");
	fflush(0); scanf("%d", &num);

	for(i = 0; i < num; i++) {
		printf(" %d番 : ", i + 1);
		fflush(0); scanf("%d", &su[i]);
	}

	putchar('{');
	for(i = 0; i < num; i++) {
		printf("%d", su[i]);
		if (i + 1 != num) {
			printf(",  ");
		}
	}
	putchar('}');

	return 0;
}

