/*
 * List04_01.c
 *
 *  Created on: 2020/01/01
 *      Author: andy
 */
#include <stdio.h>
int main(void)
{
	int i, j, len;

	puts("下向き数字ピラミッドを作ります。");
	printf("何段ですか : ");
	fflush(0); scanf("%d", &len);

	for(i = 1; i <= len; i++) {
		for(j = 1; j <= i - 1; j++) {
			putchar('.');
		}
		for(j = 1; j <= (len - i) * 2 + 1; j++) {
			printf("%d", i % 10);
		}
		putchar('\n');
	}

	return 0;
}
