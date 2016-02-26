/* Richard Bennett	2/25/2016
What is the 10001st prime number?
*/

#include <iostream>
using namespace std;

//Checks if a number is prime
bool isPrime(long number)
{
	if(number == 2) return true;		//If the number is 2 it is prime
	if(number%2 == 0) return false;		//if the number is even it is not prime
	
	for(int i = 3; i*i < number+1; i+= 2) {	//from 3 to the square root of the number, odd numbers only
		if(number%i == 0) return false;			//if the number is evenly divisible it is not prime
	}
	return true;
}

//Main
int main() {
	
	//Variables
	int suspect = 0;
	int primeCount = 0;
	//

	while(primeCount < 10002) { 			//Until there is 10001 primes counted
		suspect++;							//go up a number
		if(isPrime(suspect)) primeCount++;	//check if it is a prime and if it is increment primeCount
	}

	//Print output
	cout << "\nEuler Problem 7" << endl;
	cout << "The 10001st prime number is:" << endl;
	cout << suspect << "\n" << endl;
	//
	return 0;
}
