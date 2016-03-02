/*	Richard Bennett 03/03/2016
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

#include <iostream>
using namespace std;

//Returns the count of the collatz sequence
int collatz(long long num)
{
	int count = 1;

	while(num != 1) {
		count++;
		if(num%2 == 0) {
			num /= 2;
		}
		else {
			num = (3 * num) + 1;
		}
	}
	return count;
}

int main()
{
	//Variables
	int numWithLongestChain = 0;		//The number with the longest chain
	int longestChain = 0;				//The longest chain so far
	int chain;							//The current chain
	//

	for(long long i = 1; i < 1000000; i++) {		//From one to one million find the number with the longest collatz chain
		chain = collatz(i);
		if(chain > longestChain) {
			numWithLongestChain = i;
			longestChain = chain;
		}
	}

	//Print output
	cout << "\nEuler Project Problem 14" << endl;
	cout << "Which starting number, under one million, produces the longest collatz chain?.\n" << endl;
	cout << "The answer is : " << numWithLongestChain << endl << endl;
	//
	return 0;
}
