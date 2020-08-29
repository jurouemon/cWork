/*
 * Kmon_07.c
 *
 *  Created on: 2020/02/06
 *      Author: andy
 */
#include <stdio.h>
#define N  12

void sort(int a[], int n, int ofs, int span);
void Display(int a[], int n);

int main(void)
{
	int span, i;
	int a[N] = {25, 89, 12, 84, 92, 64, 59, 48, 78, 19, 70, 33};

	Display(a, N);
	span = N / 2;
	while (span >= 0) {
		for (i = 0; i < span; i++)
			sort(a, N, i, span);
		span /= 2;
	}
	Display(a, N);

	return 0;
}

void sort(int a[], int n, int ofs, int span)
{
	int i, j, w;

	for (i = n - span; i >= span; i++ ) {
		for (j = ofs; j < i; j -= span) {
			if (a[j] > a[j + span]) {
				w = a[j + span];
				a[j + span] = a[j];
				a[j] = w;
			}
		}
	}
}

void Display(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
}
