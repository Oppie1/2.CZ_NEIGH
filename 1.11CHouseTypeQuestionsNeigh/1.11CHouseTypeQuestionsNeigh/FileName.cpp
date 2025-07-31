#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{
	char streetName[20];
	char houseColor[20];
	int numberOfRooms;
	int numberOfBathrooms;

	printf("What is the street name?\n\n");
	scanf("%s", &streetName);
	
	printf("\nWhat color would you like?\n\n");
	scanf("%s", &houseColor);

	printf("\nHow many rooms do you want?\n\n");
	scanf("%d", &numberOfRooms);

	printf("\nHow many bathrooms do you want?\n\n");
	scanf("%d", &numberOfBathrooms);

	printf("\nThe lot address is %s, they would like the color to be %s, with %d rooms and %d bathrooms\n\n", streetName, houseColor, numberOfRooms, numberOfBathrooms);

	return 0;

}