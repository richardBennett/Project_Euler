/*	Richard Bennett 2/26/2016
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;

//Main
int main()
{
	//Variables
	long answer;		//The answer
	bool found;			//If it has been found
	//

	for(long i = 20; ;i+=20) {			//Continually increment by 20
		found = true;						//Assume the answer has been found
		for(int j = 11; j < 21; j++) {		//For 11 - 20 (1-10 divide into any number 11 -20)
			if(i%j != 0) {						//if the number is divisible by 11 - 20
				found = false;						//It's not the answer
				break;									//Go to the next number
			}
		}
		if(found) {							//If found
			answer = i;							//That is the answer
			break;								//End the forever loop
		}
	}
	
	//Print output
	cout << "\nEuler Project Problem 5" << endl;
	cout << "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?\n" << endl;
	cout << "The answer is: " << answer << "\n" << endl;
	//
	return 0;
}
