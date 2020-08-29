/*
 * C31_06.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>
#define N   5
#define MOD 19

int main(void)
{
	char code[256], ch;
	int i, value;
	int weight[N] = {3, 5, 1, 7, 9};

	do {
		printf("5ケタの数字コードを入力してください : ");
		fflush(0); scanf("%s", code);
		value = 0;
		i = 0;
		while (code[i] != '\0' && i < N) {
			ch = code[i];
			if (ch < '0' || ch > '9') {
				break;
			}
			value += (ch - '0') * weight[i];
			i++;
		}
	} while (code[i] != '\0' || i != N);

	value %= MOD;
	if (value > 9) {
		value = value / 10 + value % 10;
	}

	code[N] = '0' + value;
	code[N + 1] = '\0';

	printf("チェックディジット付コード : %s\n", code);

	return 0;
}

