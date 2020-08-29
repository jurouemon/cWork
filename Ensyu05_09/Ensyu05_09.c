/*
 * Ensyu05_09.c
 *
 *  Created on: 2020/01/08
 *      Author: andy
 */
#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i, j;
	int max = 0;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("人数を入力してください : ");

	do {
		fflush(0); scanf("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a1～%dで入力してください : ", NUMBER);
		}
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);

	for(i = 0; i < num; i++) {
		printf("%2d番 : ", i + 1);
		do {
			fflush(0); scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100) {
				printf("\a0～100で入力してください : ");
			}
		} while (tensu[i] < 0 || tensu[i] > 100	);
		bunpu[tensu[i] / 10]++;
	}
	for(j = 0; j < 11; j++) {
		if (max < bunpu[j]) {
			max = bunpu[j];
		}
	}
	for(i = max; i > 0; i--) {
		for(j = 0; j < 11; j++) {
			if (bunpu[i] >= i) {
				printf(" * ");
			}
			else {
				printf("   ");
			}
		}
		putchar('\n');
	}
	putchar('\n');
	puts("---------------------------------");
	puts(" 0 10 20 30 40 50 60 70 80 90 100");

	return 0;
}

