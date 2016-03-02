/* Richard Bennett 2/26/2016
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
using namespace std;

//Function to find the answer so I can return out of the loop
int pythTriplet(int sum)
{
	//Variables
	int a, b, c;  				//Three numbers
	int answer;					//if a+b+c = 1000, a*b*c
	//

	for(a = 1; a < 1000; a++)					//a is any number between 1 and 999
		for(b = 2; b < 1000; b++)					//b is any number between 2 and 999
			for(c = 3; c < 1000; c++)					//c is any number between 3 and 999
				if((a*a) + (b*b) == (c*c) && a < b < c)		//if a^2 + b^2 = c^2 and a < b < c
					if(a + b + c == 1000)						//if the sum is 1000
						return a*b*c;								//return the product of a*b*c
	return 0;
}

//Main
int main()
{
	//Print output
	cout << "\nEuler Project Problem 9" << endl;
	cout << "There exists exactly one Pythagorean triplet for which a + b + c = 1000." << endl;
	cout << "Find the product of a*b*c\n" << endl;
	cout << "The answer is: " << pythTriplet(1000) << "\n" << endl;
	//
	return 0;
}
