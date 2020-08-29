/*
 * Kmon02_07.c
 *
 *  Created on: 2020/02/09
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int SearchString(char t[], int ofs, char p[], int nce);

int main(void)
{
	char p[80], t[256];
	int ofs = 0, lenp, nce, line = 1;
	FILE *fp;

	printf("パターン文字列 : ");
	fflush(0); scanf("%s", p);
	lenp = strlen(p);

	printf("大文字／小文字を区別しない(0:No、1:Yes)");
	fflush(0); scanf("%d", &nce);

	fp = fopen("in.txt", "r");
	while (fgets(t, sizeof t, fp) != NULL) {
		ofs = 0;
		ofs = SearchString(t, ofs, p, nce);
		while (ofs != -1) {
			printf("行: %d, 文字位置: %3d\n", line, ofs + 1);
			ofs = SearchString(t, ofs - lenp, p, nce);
		}
		line++;
	}
	fclose(fp);

	return 0;
}

int SearchString(char t[], int ofs, char p[], int nce)
{
	int i, j;
	char cht, chp;
	int lent = strlen(t);
	int lenp = strlen(p);

	if (lent - ofs < lenp)
		return -1;

	for (i = ofs; lent - i >= lenp; i++) {
		for (j = 0; j < lenp; j++) {
			cht = nce ? toupper(t[j]) : t[j];
			chp = nce ? toupper(p[j]) : p[j];
			if (chp != '?' && cht == chp)
				break;
		}
		if (j == lenp)
			return i;
	}
	return -1;
}

