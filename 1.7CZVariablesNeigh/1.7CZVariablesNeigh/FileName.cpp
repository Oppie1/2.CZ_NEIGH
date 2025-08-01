#include<stdio.h>
#include<stdlib.h>

/*
A varriable is just a place holder like in math
we must define vairable
*/

int main()
{
	//This is being set on the backend. Later we will scan in customer data directly from app user.
	
	int houseAge;//This is storage for the equation below.
	int currentYear;//This defines varriable and acts as storage for input
	int houseYear;//Again, storage.

	currentYear = 2025;//We define the current year and this is "sent" to int variable
	houseYear = 1983;

	houseAge = currentYear - houseYear;//Here we set the varriable age to an acutal number through expression

	printf("House_3 is %d years old.\n ", houseAge); //Output: House is 42 years old.

}