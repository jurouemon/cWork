/*
 * Ensyu10_02.c
 *
 *  Created on: 2020/01/28
 *      Author: andy
 */
#include <stdio.h>

static int maxday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void decrement_date(int *y, int *m, int *d)
{
	if (*d != 1) {
		(*d)--;
	} else {
		if (*m != 1) {
			(*m)--;
		} else {
			(*y)--;
			*m = 12;
		}
		*d = maxday[(*m)-1];
	}
}

void increment_date(int *y, int *m, int *d)
{
	if (*d != maxday[(*m)-1]) // 最終日でなければ*dをインクリメント
		(*d)++;
	else {
		if (*m != 12)   // 12月以外の最終日
			(*m)++;
		else {      // １２月３１日
			(*y)++;
			*m = 1;
		}
		*d = 1;
	}
}

void uru_chk(int year)
{
	if ((year % 400) == 0 || ((year % 4) == 0 && (year % 100) != 0)) {
		maxday[1] = 29;
	} else {
		maxday[1] = 28;
	}
}

int main(void)
{
	int year, month, day;
	int y1, m1, d1;
	int y2, m2, d2;

	puts("西暦を入力");
	printf("年 : ");
	fflush(0); scanf("%d", &year);
	printf("月 : ");
	fflush(0); scanf("%d", &month);
	printf("日 : ");
	fflush(0); scanf("%d", &day);

	printf("入力した西暦 : %d年%d月%d日\n", year, month, day);

	y1 = y2 = year;
	m1 = m2 = month;
	d1 = d2 = day;

	uru_chk(year);
	decrement_date(&y1, &m1, &d1);
	increment_date(&y2, &m2, &d2);

	printf("入力した西暦の前の日 : %d年%d月%d日\n", y1, m1, d1);
	printf("入力した西暦の次の日 : %d年%d月%d日\n", y2, m2, d2);

	return 0;
}
