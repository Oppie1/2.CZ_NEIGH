#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	char grade;
	
	printf("Please grade each house you have looked at in neighborhood: A,B,C,D,F\n");
	scanf_s("%c", &grade);

	switch (grade) {
	case 'A': printf("This is an excellent house with no problems.");
		break;//We use break statment because we don't what the loop to evaluate statements after selection is main

	case 'B': printf("This is a house with minor blemishes that can be fixed.");
		break;

	case 'C': printf("This is a house that needs at least one major repair.");
		break;

	case 'D': printf("This house needs 2 or more repairs.");
		break;

	case 'F': printf("This house cannot be sold in current condition.");
		break;

	default:printf("You have pressed an incorrect key please try again.");

}

return 0;

}