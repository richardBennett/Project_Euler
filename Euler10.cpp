/* Richard Bennett 2/26/2016
Find the sum of all the primes below two million.
*/

#include <iostream>
using namespace std;

//Checks if a number is prime
bool isPrime(long number)
{
	if(number == 1) return false;		//If the number is 1 it is not prime
	if(number == 2) return true;		//If the number is 2 it is prime
	if(number%2 == 0) return false;		//if the number is even it is not prime
	
	for(long i = 3; i*i < number+1; i+= 2) {	//from 3 to the square root of the number, odd numbers only
		if(number%i == 0) return false;				//if the number is evenly divisible it is not prime
	}
	return true;
}

//Main
int main() 
{
	//Variables
	long sum	= 0;		//Holds the sum
	//
	
	for(long i = 0; i < 2000000; i++)	//For 1 through 2 million
		if(isPrime(i)) sum += i;			//If it's prime add it to sum

	//Print output
	cout << "\nEuler Project Problem 10" << endl;
	cout << "Find the sum of all the primes below two million\n" << endl;
	cout << "The answer is: " << sum << "\n" << endl;
	//
	return 0;
}
