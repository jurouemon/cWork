/*
 * List07_01.c
 *
 *  Created on: 2020/01/24
 *      Author: andy
 */
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int vi[10];
	double vd[25];
	int n, na, nb;
	double dx, dy;

	printf("%d～%d\n", SCHAR_MIN, SCHAR_MAX);

	printf("\n%u\n", (unsigned)sizeof (char));
	printf("%u\n", (unsigned)sizeof(short));
	printf("%u\n", (unsigned)sizeof(int));
	printf("%u\n", (unsigned)sizeof(long));

	printf("\n%u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("%u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	printf("\n%u\n", (unsigned)sizeof na);
	printf("%u\n", (unsigned)sizeof dx);

	printf("\n%u\n", (unsigned)sizeof (na + nb));
	printf("%u\n", (unsigned)sizeof (na + dy));
	printf("%u\n", (unsigned)sizeof (dx + dy));

	printf("\n%u\n", (unsigned)sizeof 1);
	printf("%u\n", (unsigned)sizeof+1);
	printf("%u\n", (unsigned)sizeof-1);

	printf("\n%u\n", (unsigned)sizeof(unsigned)-1);
	printf("%u\n", (unsigned)sizeof(double)-1);
	printf("%u\n", (unsigned)sizeof((double)-1));

	printf("\n%u\n", (unsigned)sizeof n + 2);
	printf("%u\n", (unsigned)sizeof (n + 2));
	printf("%u\n", (unsigned)sizeof (n + 2.0));

	return 0;
}

