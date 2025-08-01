#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	int i;
	int house[3] = { 1,2,3 };
	int bathRooms[3] = { 2,5,4 };
	int rooms[3] = { 5,6,7 };
	float hrr[3];
	float bestHRR = 0.0; //HRR Home Room Ratio
	int bestHouse;

	for (i = 0; i < 3; i++) {// This must fully execute prior to moving to final print stament.  The inforamtion is stored and the for
		//loop keeps on running until the middle condition (i <3) is not met. So first run i = 0. i = 0 is the index location [i]=[0].
		//So 0 < 3 so move onto equation. Then i is incremented after control loop codeblock execution. so i++-> i=0-> 0++= 0+1 = i=1 to start next iteration
		//So i = 1 < 3. So now we use index 1 [i]= [1]-> index location
		//Increment to 1++ which is i = 2; Then increment 2++ which is 2+1 is 3 and so 3<3? False, break for loop and go to next codeblock/print statment
		hrr[i] = (float)bathRooms[i] / (float)rooms[i];
	//So for i=0 would be bathRooms[0,2] is 2/rooms[0,5]5=.40
	//Sof for i = 1 would be bathrooms[1,5] is 5/rooms [1,6]6=.83
	//This is 4/7 =.57


		printf("\t %d\t %d\t %d \t %.2f \n", house[i], rooms[i], rooms[i], hrr[i]);
		//So at index [0] we have house one, with 2 bathrooms, 5 total rooms and an hrr of .40, this line prints to screen and goes to nested if statment
		//At index [1] we have house 2, with five bathrooms, 6 total rooms and an hrr of .83 This line prints to screen and goes to nested codeblock/if stament

		if (hrr[i] > bestHRR) {
			//So here for house 1 .40 is greater than 0 which is what bestHRR at 0
//Here the current houses house 2) hrr is tested against the current best hrr which is .40.House 1 is greater at .82>.40 so move to next step with current hrr(.83)
//With current house 3 hrr is .57>.83? False, break if statment and return to for loop
			bestHRR = hrr[i];
			//So at first run .4 for is the best room to bathroom ration
			//So now the bestHRR is set to the current hrr[1,.83] which is the index of 1 where an hrr of . 83 is stored in float hrr 
			bestHouse = house[i];
			//so for now house 1 has the best ratio that said it is the only house for now.
			//Again the for loop and its nested if statment must fully execute prior to moving onto next codeblock.
			//Now the current house [0,1] which is house 2 is set to the bestHouse.
		}
	}

	printf("\n The best house is %d\n ", bestHouse);

	return 0;
}

/*
		 1       5       5       0.40
		 2       6       6       0.83
		 3       7       7       0.57

 The best house is 2
*/
