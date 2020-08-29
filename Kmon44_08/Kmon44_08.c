/*
 * Kmon44_08.c
 *
 *  Created on: 2020/02/11
 *      Author: andy
 */
#include <stdio.h>
#define AM_START     (8 * 60 + 0)
#define AM_END       (12 * 60 + 0)
#define PM_START     (13 * 60 + 0)
#define PM_END       (17 * 60 + 0)
#define AM_TIME      (AM_END - AM_START)
#define PM_TIME      (PM_END - PM_START)
#define DAY_TIME     (AM_TIME + PM_TIME)
#define DAYS         31

typedef struct {
	int day;
	int from_h;
	int from_m;
	int to_h;
	int to_m;
} RECORD;

int read_file(char *infile, RECORD record[])
{
	FILE *fp;
	int day, from_h, from_m, to_h, to_m;
	int i = 0;

	fp = fopen(infile, "rt");
	while (fscanf(fp, "%d %d:%d %d:%d ",
			&day, &from_h, &from_m, &to_h, &to_m) != EOF) {
		record[i].day = day;
		record[i].from_h = from_h;
		record[i].from_m = from_m;
		record[i].to_h = to_h;
		record[i].to_m = to_m;
		i++;
	}
	fclose(fp);
	return i;
}

void output_roster(char *outfile, int count, RECORD record[])
{
	int i, from, to, cur;
	int time, less, over;
	int sum_time = 0, sum_less = 0, sum_over = 0;
	FILE *fp;
	fp = fopen(outfile, "wt");
	fprintf(fp, "DAY :  FROM - TO       TIME   LESS   OVER\n");
	fprintf(fp, "-----------------------------------------\n");

	for (i = 0; i < count; i++){
		less = DAY_TIME;
		over = 0;
		time = 0;

		from = record[i].from_h * 60 + record[i].from_m;
		to = record[i].to_h * 60 + record[i].to_m;

		for ( cur = from; cur < to; cur++) {
			if (cur < AM_START || cur >= PM_END) {
				over += time;
				time++;
			} else if ((cur < AM_START && cur >= AM_END) || (cur < PM_START && cur >= PM_END)) {
				less--;
				time++;
			}
		}
		fprintf(fp, "%2d : %2d:%02d - %2d:%02d  %5d  %5d  %5d\n",
				record[i].day,
				record[i].from_h,record[i].from_m,
				record[i].to_h, record[i].to_m,
				time, less, over);

		sum_time += time;
		sum_less += less;
		sum_over += over;
	}
	fprintf(fp, "------------------------------------------\n");
	fprintf(fp, "DAYS      %2d         %5d  %5d  %5d\n",
			                   count, sum_time, sum_less, sum_over);
	fclose(fp);
}

int main(int argc, char *argv[])
{
	RECORD record[DAYS];
	int count;

	count = read_file(argv[1], record);
	output_roster(argv[2], count, record);

	return 0;
}

