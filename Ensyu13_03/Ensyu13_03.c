/*
 * Ensyu13_03.c
 *
 *  Created on: 2020/02/05
 *      Author: andy
 */
#include <stdio.h>

#define NUMBER 6
#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	double height;
	double weight;
} Student;

void swap_Student(Student *x, Student *y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1].height > a[j].height) {
				swap_Student(&a[j - 1], &a[j]);
			}
		}
	}
}

int main(void)
{
	FILE *fp;
	Student std[NUMBER];
	int i, ninzu = 0;
	double hsum = 0.0;
	double wsum = 0.0;

	if ((fp = fopen("hw.dat", "r")) == NULL)
		printf("\aファイルをオープンできません。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", std[i].name, &std[i].height, &std[i].weight) == 3) {
			printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
			ninzu++;
			hsum += std[i].height;
			wsum += std[i].weight;
		}

		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
	}

	sort_by_height(std, NUMBER);
	while (fscanf(fp, "%s%lf%lf", std[i].name, &std[i].height, &std[i].weight) == 3) {
		printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
		ninzu++;
		hsum += std[i].height;
		wsum += std[i].weight;

	}
	printf("----------------------\n");
	printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
	fclose(fp);




	return 0;
}

