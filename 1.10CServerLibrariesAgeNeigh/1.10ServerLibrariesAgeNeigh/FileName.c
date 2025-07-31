#include<stdio.h>//At top these are preprocessor directives. In this example it is on the central server.
#include<stdlib.h>//For the neighborhood.
//#define MYNAME "Adam Tindall"//This could be done within program but for app makes more sense to have in its own directory.
//This is a constant that can never change. So I set my name in my neighboorhood app for every process I open up. Must be all caps.
#include "AdamsInfo.h"//Search in same directary which is the header file.
//The main app program can access these and use them in given process

int main() {

	printf("%s opened process \n", MYNAME);//This is me opening the neighborhood app for first time.

	int Age = (AGE / 2) + 7;//This is setting an age to work in the neighboorhood.
	//Can only do unpaid interships after 22 but only at 10 hours a week so long as they are in school in 3 classes.
	//They recieve universal basic income and healthcare.
	printf("%s law is in order to work in neighborhood you must be %d or older \n", MYNAME, Age);
	printf("\nHuman right to Universal Basic Income, free healthcare and free school whether working or not");

	return 0;

}