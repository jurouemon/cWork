/*
 * Wmon10_04.c
 *
 *  Created on: 2020/02/04
 *      Author: andy
 */
#include <stdio.h>

struct grade {
	int score[10];
	double average;
};

int calc_average(struct grade *corse);

int main(void)
{
	struct grade math = {82, 68, -1, 74, 47, -1, 28, 42, -1, -1, 0.0};

	struct grade japanese = {42, 47, 54, -1, 92, 97, 80, -1, -1, -1, 0.0};

	struct grade *course;
	int n;
	course = &math;
	n = calc_average(course);
	printf("<算数>受講テスト : %d回 平均点 : %6.2f\n", n, course->average);

	course = &japanese;
	n = calc_average(course);
	printf("<国語>受講テスト : %d回 平均点 : %6.2f\n", n, course->average);

	return 0;
}

int calc_average(struct grade *course)
{
	int sum, n, i;
	sum = n = 0;
	for (i = 0; i < 10; i++) {
		if (course->score[i]>= 0) {
			n++;
			sum += course->score[i];
		}
	}
	course->average = (double)sum / n;
	return n;
}
