/*	Richard Bennett 2/26/2016
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

THIS TIME USING PRIME FACTORIALIZATION
*/

#include <iostream>
#include <math.h>
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
	int bottom = 1;						//Starting number (Inclusive)
	int top = 20;						//End number (inclusive)
	int sum = 1;						//The answer
	int count, bestCount;				//For counting powers of primes
	int squareRoot = (int) sqrt(top);	//Square root of the top number
	//

	for(int i = squareRoot+1; i <= top; i++) {	//All primes greater than the square root of the top
		if(isPrime(i)) {						//Will only be multiplied by the sum once
			sum *= i;
		}
	}
	
	for(int i = 2; i <= squareRoot; i++) {		//All the primes less than or equal to the square root of the top
		if(isPrime(i)) {							
			bestCount = 1;						//Highest number of powers of the prime in any number 1 - 20
			for(int j = i; j <= top; j++) {		//For every number greater than the prime
				if(j%i == 0) {						//If it divides cleanly into that number
					int count = 0;					//Start a count
					int number = j;					//Copy the number
					while(number % i == 0) {		//While the prime cleanly divides into the number
						count++;					//Increase the count
						number /= i;				//Divide the number by the prime
					}								
					if(count > bestCount) bestCount = count;	//If the count is greater than the best count, replace best count
				}
			}
			for(int k = 1; k <= bestCount; k++) sum *= i;		//For each prime, multiply the sum bestCount times that prime
		}
	}

	//Print output
	cout << "\nEuler Project Problem 5 Solution B" << endl;
	cout << "What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?\n" << endl;
	cout << "The answer is: " << sum << "\n" << endl;
	//
	return 0;
}
