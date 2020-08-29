/*
 * Kc14_31.c
 *
 *  Created on: 2020/02/02
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fname[256];
	char name[256];

	printf("苗字を入力してください : ");
	fflush(0); scanf("%s", fname);

	printf("名前を入力してください : ");
	fflush(0); scanf("%s", name);

	strcat(fname, name);

	printf("フルネームは %s\n", fname);

	return 0;
}

