#include<stdio.h>
#include<stdlib.h>

int main()
{
	int house1Cost = 500;
	int monthlyPayment = 50;
	printf("You will have the house 1 paid off in %d months.\n\n", house1Cost / monthlyPayment);

	float house2Cost = 550.00;
	float monthlyPayment2 = 53.00;
	printf("You will have house 2 paid off in %f months. \n\n", house2Cost / monthlyPayment2);

	int house3Cost = 1000;
	
	printf("If you purchase this house 3 payments of 250 can be made over %d months.\n", house3Cost % 12);

	return 0;
}

//% just means divide the number but only leave the remainder discarding the whole part of number