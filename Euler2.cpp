/* Richard Bennett 2/25/2016
By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms.

The Fibonacci Sequence starting with 0,1 is the next number is the sum of the two numbers before it.
*/

#include <iostream>
using namespace std;

//Main
int main()
{
	//Variables
	int a = 0;			//The first number
	int b = 1;			//The second number
	int c;				//The next Number;
	int sum = 0;		//Sum of the even valued terms
	//

	while(b < 4000000)	//while the sequence is less than four million
	{
		c = a + b;			//The next number is the sum of the first and second numbers
		if(c%2 == 0)		//If the next number is even
			sum += c;			//add it to the sum
		a = b;				//The first number is the previous second number
		b = c;				//The second number is the previous next number
	}
	
	//Print output
	cout << "\nEuler Project Problem 2" << endl;
	cout << "The sum of the even number terms of the Fibbonaci sequence" << endl;
	cout << "Whose values do not exceed four million is: " << endl;
	cout << sum << "\n" << endl;
	//
	return 0;
}
