/*
 * Kmon_06.c
 *
 *  Created on: 2020/02/09
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>


int main(void)
{
	char buf[80], *p;
	char str1[] = "Rio", str2[] = "Tokyo", str3[] = "<-->";
	int len;
	double d = 1.23;

	printf("%d\n", (int)floor(d));
	printf("%d\n", (int)floor(-d));

	strcpy(buf, str1);
	strcat(buf, str2);
	printf("%s\n", buf);

	len = strlen(str1);
	buf[len] = '\0';
	printf("%s\n", buf);

	strcpy(buf, str1);
	strcat(buf, &str3[2]);
	strcat(buf, str2);
	printf("%s\n",buf);

	strcpy(buf, str1);
	strncpy(buf + len, str2, 2);
	strcpy(buf + len + 2, str2);
	printf("%s\n",buf);

	p = strchr(str2, 'o');
	printf("%s\n", p);

	return 0;
}
