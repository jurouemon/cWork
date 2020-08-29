/*
 * C345_02.c
 *
 *  Created on: 2020/01/21
 *      Author: andy
 */
#include <stdio.h>

int main(void)
{
	int weight[] = {30, 180};
	int price[2] = {0, 0}, i;

	for (i = 0; i < 2; i++) {
		if (weight[i] <= 50)
			price[i] = 80;
		if (weight[i] <= 200)
			price[i] = 120;
		if (weight[i] > 200)
			price[i] = 250;
	}
	printf("%d\n", price[0]	);
	printf("%d\n", price[1]	);

	price[0] = 120;
	price[1] = 120;
	for (i = 0; i < 2; i++) {
		if (weight[i] <= 50)
			price[i] = 80;
		else if (weight[i] <= 200)
			price[i] = 120;
		else
			price[i] = 250;
	}
	printf("%d\n", price[0]	);
	printf("%d\n", price[1]	);

	return 0;
}

