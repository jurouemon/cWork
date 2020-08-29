/*
 * C36_03.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>

/*int main(void)
{*/
/*	int i, a, b;
	int data[] = { 2, 2, 1, 2, 1, 1 };

	a = 1;
	b = 1;
	for (i = 0; i < 6; i++) {
		switch (i) {
			case 1 : a *= 3;  break;
			case 3 : a -= 5;  break;
		}
		switch (i * data[i]) {
			case 2 :
			case 6 : b += 3;  break;
			case 4 : b += 2;  break;
			default : b += 4; break;
		}
	}
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}*/

int main(void)
{
	int i, a, b, work[] = { 0, 0, 0, 0 };
	char str[][4] = { "JAN", "FEB", "MAR", "APL", "MAY" };

	a = 0;
	b = 0;
	for (i = 0; i < 5; i++) {
		switch (str[i][0]) {
			case 'J' : a += 2;
				switch (str[i][1]) {
					case 'U' : b += 7;
							   break;
					case 'A' : b += 9;
							   work[i % 4]++;
							   break;
				}
				break;
			case 'M' : a += 3;
				switch (str[i][1]) {
					case 'U' : b -= 7;
					   	   	   break;
					case 'A' : b -= 9;
					   	   	      work[i % 4] += 2;
					   	   	   break;
				}
				break;
			default : a += 5;
				switch (str[i][2]) {
					case 'L' : b += 7;
							   break;
					case 'N' : b -= 9;
							   break;
					default : work[i % 2]++;
							   break;
				}
				break;
		}
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", work[0]);
	printf("%d\n", work[1]);
	printf("%d\n", work[2]);
	printf("%d\n", work[3]);

	return 0;
}

