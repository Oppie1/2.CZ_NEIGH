#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

/*Write code that determines where a person wants to purchase house
based on yes or(||) no selection. Use if else stament saying
their decision has been recorded or tht they selected a wrong key*/

int main()
{
	char answer;

	printf("Would you like to purchase house 3 y/n \n");
	scanf("%c", &answer);

	if ((answer == 'y') || (answer == 'n')) {
		printf("Your selection has been recorded.");
	}
	else {

		printf("You have it wrong key. Please enter your decision (y/n) again");
	}

	return 0;

}