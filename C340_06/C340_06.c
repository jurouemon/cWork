/*
 * C340_06.c
 *
 *  Created on: 2020/01/20
 *      Author: andy
 */
#include <stdio.h>
#define MONEYS  6

int main(void)
{
	int yen[MONEYS] = {500, 100, 50, 10, 5, 1};
	int left[MONEYS], back[MONEYS];
	int i, amount, number;
	int price, payment, change;

	for (i = 0; i < MONEYS; i++) {
		left[i] = 0;
		back[i] = 0;
	}

	printf("額面（円） : ");
	fflush(0); scanf("%d", &amount);
	while (amount != -1) {
		printf("残枚数 : ");
		fflush(0); scanf("%d", &number);
		for (i = 0; i < MONEYS; i++) {
			if (yen[i] == amount) {
				left[i] = number;
				break;
			}
		}
		printf("額面（円 : ");
		fflush(0); scanf("%d", &amount);
	}

	printf("\n購入金額（円）: ");
	fflush(0); scanf("%d", &price);

	printf("支払金額（円) : ");
	fflush(0); scanf("%d", &payment);

	change = payment - price;
	if (change < 0) {
		printf("\n支払金額不足\n");
	} else {
		printf("\n釣銭 %5d 円（内訳）\n", change);
		for (i = 0; i < MONEYS; i++) {
			while (change > 0 && left[i] > 0 && change >= yen[i]) {
				left[i]--;
				back[i]++;
				change -= yen[i];
			}
			if (change == 0) {
				break;
			}
		}
		if (change != 0) {
			printf("釣銭不足\n");
		} else {
			for (i = 0; i < MONEYS; i++) {
				printf("%4d 円 : %3d 枚\n", yen[i], back[i]);
			}
		}
		return 0;
	}
}

