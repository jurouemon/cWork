/*
 * List01_01.c
 *
 *  Created on: 2019/12/28
 *      Author: andy
 */
#include <stdio.h>
int main(void)
{
	int width;
	int height;

	puts("長方形の面積を求めます");
	printf("横幅 : ");
	fflush(0); scanf("%d", &width);
	printf("高さ : ");
	fflush(0); scanf("%d", &height);


	printf("面積は%dです。\a\n", width * height);

	return 0;
}
