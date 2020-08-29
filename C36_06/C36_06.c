/*
 * C36_06.c
 *
 *  Created on: 2020/01/19
 *      Author: andy
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char week[][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	char is[128], os[128];
	int i, j, k, n;

	printf("入力文字列 : ");
	fflush(0); scanf("%s", is);

	i = 0;
	j = 0;
	while (is[i] != '\0') {
		if (is[i] == '@') {
			if (is[i + 1] == '@') {
				os[j++] = '@';
			} else if (isdigit(is[i + 1])) {
				n = is[i + 1] - '0';
				if (n < 7) {
					k = 0;
					while (week[n][k] != '\0')
						os[j++] = week[n][k++];
				}
			}
			i += 2;
		} else
			os[j++] = is[i++];
	}
	os[j] = '\0';
	printf("置換後文字列 : %s", os);

	return 0;
}

