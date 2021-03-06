/*
 * Ensty12_05.c
 *
 *  Created on: 2020/02/03
 *      Author: andy
 */
#include <stdio.h>
#include <math.h>

#define sqr(n)   ((n) * (n))

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	Point pt;
	double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
	printf("現在位置 : (%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料 : %.2fリットル\n", c.fuel);
}

int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int car_move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);
	if(d > c->fuel)
		return 0;
	c->pt.x += dest.x;
	c->pt.x += dest.y;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	int s;
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		Point dest;

		put_info(mycar);

		printf("移動しますか【Yes…１／No…０】 : ");
		fflush(0); scanf("%d", &select);
		if (select != 1) break;


	do {
		puts("入力方法""[1 : 座標入力  2 : 移動距離入力  3 : 終了]");
		printf("入力 : ");
		fflush(0); scanf("%d", &s);

		switch (s) {
		case 1 :
			printf("目的地のX座標 : ");
			fflush(0); scanf("%lf", &dest.x);
			printf("        Y座標 : ");
			fflush(0); scanf("%lf", &dest.y);
			if (!move(&mycar, dest))
				puts("\a燃料不足で移動できません。");
			break;
		}

	} while (s != 3);

	return 0;
	}
}
