#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char name[20] = "Adaam Tindall";
	printf("My name is %s \n", name);

	name[2] = 'I';
	printf("My name is %s \n", name);

	char houses[10] = "HouseOne";
	printf("The best house is %s \n", houses);

	strcpy(houses, "HouseThree");
	printf("The best house is %s \n", houses);

	return 0;

}