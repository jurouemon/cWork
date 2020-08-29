/*
 * Kmon44_03.c
 *
 *  Created on: 2020/02/11
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "ROM", str2[] = "RAM";
	char str3[] = "PROGRAM", str4[] = "PROJECT";
	char buf[100];
	size_t len;

	len = strlen(str1);
	printf("%d\n", len);

	strcpy(buf, str1);
	strcat(buf, str2);
	printf("%s\n", buf);

	if (strcmp(str3, str4) > 0) {
		strcpy(buf, str1);
	} else {
		strcpy(buf, str2);
	}
	printf("%s\n", buf);

	if (strncmp(str3, str4, 3) == 0) {
		strcpy(buf, str3 + 3);
	} else {
		strcpy(buf, str4 + 3);
	}
	printf("%s\n", buf);

	strcpy(buf, str4 + 3);
	strcat(buf, strchr(str3, str1[1]));
	printf("%s\n", buf);

	return 0;
}

