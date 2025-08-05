#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	char house1; //Is char instead of int instead since it is only one character the computer can "handle" it.


	printf("Please press any key and press enter.\n");
	scanf_s(" %c", &house1);

	if (isalpha(house1)) {
		printf("%c is a letter and your app is working as designed.", house1);
	}

	else {
		if (isdigit(house1)) {
			printf("%c is a number and again your app is working as designed.", house1);
		}

		else {
			printf("%c is not a letter or number. Your app is working but you may have mashed your keyboard;)", house1);
		}

	}

	return 0;

}