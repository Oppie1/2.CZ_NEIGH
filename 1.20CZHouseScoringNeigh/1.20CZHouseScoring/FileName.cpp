#include <stdio.h>
#include<stdio.h>

//Use else if when you want only one block to execute of several mutuakky exclusive
//options. Use separate if statments when multiple conditions can want all matching
//blocks to execute. In if else control conditions are checked in order. As soon as one
//condition is true the rest are skipped. Only one block executes, even if multiple
//conditions could be true.

int main()
{
	float House1;//Float varriables are used when decimal use is needed.
	float House2;
	float House3;

	printf("Enter your 3 test grades: \n");
	scanf_s(" %f", &House1);//%f is what is used for floats to accomadate user entering data
	scanf_s(" %f", &House2);
	scanf_s(" %f", &House3);

	float avg = (House1 + House2 + House3) / 3;
	printf("Average:%.2\n", avg);//floats default to 6 decimal places. %.2f sets the limit to 2
	//Can use %.3 for 3 dec places %.4

//**We use else if because we want the code to execute when value is found. If we used
//all if statements and a person got a 96=5 all the following would be true
//The person would get all the grades A,B,C,D execpt the final else statment. "F"

if (avg >= 90) {
	printf("Grade: A");
}
else if (avg >= 80) {
	printf("Grade: B");
}
else if (avg >= 70) {
	printf("Grade: C");
}

else if (avg >= 60) {
	printf("Grade: D");
}

else {
	printf("Grade:F");
}

return 0;

}

//By using else if the program will read each control statment and execute printf when 
//condition is true and go to next step when condition is satisfied.  So say a person gave
//a house the score of 75. If(70>90)? False. Move onto next if control statment.
//Is (75>=80? False then else if 75>=70? True print grade C.  If were just if would be
//this could happen is 75>=60? Which would be true and would print C when person got D.
//Each if statment is tested and printed.