/*
 * Kmon_05.c
 *
 *  Created on: 2020/02/09
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>
#define sub(x, y) ((x) - (y))

int main(void)
{
//	int w[] = {4, 1, 0, 2, 3};
//	int *p, *q;
//	int x = 7, y = 5;
	char str[] = "SUNMONTUEWEDTHUFRISAT";
	char buf[1000];
	char *p, *q;
	int i, cnt;
	double x;

	x = 123.5;
	printf("%.5f\n", floor(x + 0.5));

	strcpy(buf,str);
	p = strrchr(buf, buf[0]);
	*p = '\0';
	printf("%d\n", strlen(buf));

	cnt = 0;
	for (p = str; *p != '\0'; p++) {
		if (*p == 'T' || *p == 'U')
			cnt++;
	}
	printf("%d\n", cnt);

	i = 0;
	p = str;
	q = str + strlen(str) - 1;
	printf("%d\n", strlen(str));
	while (p < q) {
		if (i % 2 == 0)
			buf[i] = *p;
		else
			buf[i] = *q;
		p += 3;
		q -= 2;
		i++;
	}
	buf[i] = '\0';
	printf("%s\n", buf);

//	printf("%d\n", sub(8, 2) / 2);

//	p = w;
//	printf("%d\n", *(p + 3));
//	printf("%d\n", *p + 2);
//
//	q = p + 2;
//	*q = *p;
//	printf("%d\n", w[2]);
//	(*q)++;
//	printf("%d\n", w[2]);

	return 0;
}
