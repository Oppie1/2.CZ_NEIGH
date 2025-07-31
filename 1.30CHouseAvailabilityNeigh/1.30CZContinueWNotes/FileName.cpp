#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>


//What houses on a given street in the neigh is available.
//1-5 is available 7 is available and 9 and 10 are available

int main()

{
	int num = 1;

	printf("These are the houses numbers available on Santo street:\n");

	do {//do this "while" this is the case

		if (num == 6 || num == 8) {
			/*So IF a program sees a 6 or || an 8 do this. So for numbers 1-5 they are tested and "fail" the if condition and
			so move on with program and skip the "innerior"/codeblock of if. And move onto next step in code which here is
			//The print statment. But when it is 6 this happens:*/
			num++; //So when if is true and it moves into codeblcok 6 is incremented by 1 (num==6) and so num (in this case 6)
			//gets to this point it has 1 added to it. So now it is 7 and moves on through if condition to "continue" keyword which
			//says to "continue" to end of program and retest with new incremented "num" which is now 7.
			continue;//So now int num = 7. 7 does not pass if condition and so goes onto print
		}


		printf("%d is available \n", num); //So 1-5, 7 and  9-10 print to screen and move onto increment step "n++"

		num++;//So for lets say int num = 1 it is incremented to 2 here (num++= num + 1 so num= 1+1 = 2. It then moves to while loop
		//to determin if program will continue. Which it will and "loop" back to top if it is so 

	} while (num <= 10); //So here for the example of num = 1 which changes to 2 because of last step is 2<=10? Which is true so move
	//back to begining of loop with now int num=2 and proceed to if statment/rest of program. So lets say at the end when 10 increments
	//to 11 in the step after the print statment. Is 11>=10? No, so this is where the program ends.  The items were being printed to
	//screen each iteration and so when 11 is num and while loop is false the program ends but numbers were being printed to screen the
	//whole time.
	
	
	return 0;
}