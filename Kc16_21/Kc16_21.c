/*
 * Kc16_21.c
 *
 *  Created on: 2020/02/02
 *      Author: andy
 */
#include <stdio.h>
#include <string.h>

typedef struct {
	char name[256];
	int age;
	int sex;
} people;

void inputpeople(people *data);
void showpeople(people data);

int main(void)
{
	people data[3];
	int i;

	for (i = 0; i < 3; i++) {
		inputpeople(&data[i]);
	}

	for (i = 0; i < 3; i++) {
		showpeople(data[i]);
	}

	return 0;
}

void inputpeople(people *data)
{
	printf("名前 : ");
	fflush(0); scanf("%s", data->name);
	printf("年齢 : ");
	fflush(0); scanf("%d", &data->age);
	printf("性別（1－男性、2－女性）: ");
	fflush(0); scanf("%d", &data->sex);
	printf("\n");
}

void showpeople(people data)
{
	char sex[16];

	printf("名前 : %s\n", data.name);
	printf("年齢 : %d\n", data.age);

	if (data.sex == 1) {
		strcpy(sex, "男性");
	} else {
		strcpy(sex, "女性");
	}

	printf("性別 : %s\n", sex);
	printf("\n");
}
