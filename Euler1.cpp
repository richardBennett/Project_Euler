/* Richard Bennett 2/25/2016
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
using namespace std;

//Main
int main()
{
	//Variables
	int sum = 0;	//Holds the total sum
	//

	for(int i = 1; i < 1000; i++)	//For all numbers between 1 and 1000
	{
		if(i%3 == 0 || i%5 == 0)		//If it is divisible by 3 or 5
			sum += i;						//add it to the sum
	}

	//Print output
	cout << "\nEuler Project Problem 1" << endl;
	cout << "The sum of all the multiples of 3 or 5 below 1000 is: " << endl;
	cout << sum << "\n" << endl;
	//
	return 0;
}
