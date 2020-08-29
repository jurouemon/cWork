/*
 * List05_12.c
 *
 *  Created on: 2020/01/13
 *      Author: andy
 */
#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("人数を入力してください : ");

	do {
		fflush(0); scanf("%d", &num);
		if (num < 1 || num > NUMBER) {
			puts("\a");
		}
	}while (num < 1 || num > NUMBER);

	printf("%d人の点数\n", num);

	for (i = 0; i < num; i++) {
		printf("%2d番 : ", i + 1);
		fflush(0); scanf("%d", &tensu[i]);
		bunpu[tensu[i] / 10]++;
	}
	puts("\n---分布グラフ---");
	printf("      100 : ");

	for (j = 0; j < bunpu[10]; j++) {
		putchar('*');
	}putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d ～%3d : ", i * 10, i * 10 + 9);
		for (j = 0; j < bunpu[i]; j++) {
			putchar('*');
		}putchar('\n');
	}

	return 0;
}

