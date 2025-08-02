#include<stdio.h>
#include<stdlib.h>

int main()
{

	//Ranking
	int bedRooms = 4;
	int bathRooms = 3;
	int basements;
	int loft;

	if ((bedRooms > 2) && (bathRooms < 4)) {//This AND this must be true
		//((test) && ((test))
		printf("This house meets your requirements.\n\n");
	}

	else {
		printf("This house does not meet your requirements.\n\n");
	}

	printf("Please enter how many basements you want\n");
	scanf_s("%d", &basements);

	printf("Please enter how many lofts you would like\n");
	scanf_s("%d", &loft);

	if ((basements > 0) && (loft >= 1)) {
		printf("\nThis house meets your requirements for basement and lofts\n");
	}

	else {
		printf("\nThis house does not meet your requirements\n\n");

	}

	return 0;
}