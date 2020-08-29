/*
 * List03_01.c
 *
 *  Created on: 2019/12/30
 *      Author: andy
 */
#include <stdio.h>
int main(void)
{
	int month;

	printf("何月ですか : ");
	fflush(0); scanf("%d", &month);

	switch (month) {
	case 3  :
	case 4  :
	case 5  : printf("%d月は春です。\n", month); break;
	case 6  :
	case 7  :
	case 8  : printf("%d月は夏です。\n", month); break;
	case 9  :
	case 10 :
	case 11 : printf("%d月は秋です。\n", month); break;
	case 12 :
	case 1  :
	case 2  : printf("%d月は冬です。\n", month); break;
	default : printf("%d月はありませんよ。\n", month); break;
	}

	return 0;
}
