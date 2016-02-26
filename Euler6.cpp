/* Richard Bennett	02/25/2016
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

//Main
int main()
{
	//Variables
	int n = 100; 			//Limit to go to 
	int squaredSum = 0; 			//The sum of the squares
	int sumSquared;			//The sum of the numbers squared
	int answer;				//sum - sumSquared
	//

	for(int i = 1; i < 101; i++)	//From 1 to 100
	{
		squaredSum += (i*i);			//Add to the sum the square of each number
	}
	
	sumSquared = (n*(n+1))/2;					//Sum Squared = the sum
	sumSquared *= sumSquared;					//Then square it
	if(sumSquared > squaredSum) 				//if sumSquared is greater than squaredSum
		answer = sumSquared - squaredSum;			//The answer is sumSquared - squaredSum
	else answer = squaredSum - sumSquared;		// else it's squaredSum - sumSquared

	//Print output
	cout << "\nEuler Problem 6" << endl;
	cout << "the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is:" << endl;
	cout << answer << "\n" << endl;
	//
	return 0;
}
