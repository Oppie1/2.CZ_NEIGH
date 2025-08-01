#include <stdio.h>
#include <stdlib.h>


int main()
{
	printf("We have %d houses available.\n", 9);
	printf("%s is the most complete %s we have at this point in construction. \n", "house_3", "house");

	printf("The house is furthur described by the decimal %f.\n", 3.1415926535);
	//defualt decimal places is 6. The last digit will be rounded up so "2" rounds to 3 in this case.
	printf("The house's number, here, %.4f help as identifiers to features.\n", 3.1415926535);
	//You can set to 4,3,2,1,7,8 ect. 
	printf("This can be formated by management using decimal %.0f limitation to the customer.\n", 3.1415926535);
	//You can have 0 as well(.0) depending on how you set it.

	return 0;
	
}