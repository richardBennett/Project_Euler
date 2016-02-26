/* Richard Bennett 2/25/2016
What is the largest prime factor of the number 600851475143 ?
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
int main()
{
	//Variables
	long baseNumber = 600851475143;		//The number to find the largest prime factor of
	long answer = 600851475143;			//If it is prime itself the answer won't change
	//

	if(answer % 2 == 0) answer = 2;		//If it's even make the answer 2 just in case
	for(long i = 3; i*i < baseNumber; i+=2) {	//From 3 to the square root of the number, odd numbers only
		if(baseNumber % i == 0)						//If the number is a divisor
			if(isPrime(i)) answer = i;					//and it is prime, set answer equal to it
	}
	
	//Print output
	cout << "\nEuler Project Problem 3" << endl;
	cout << "The largest prime factor of the number 600851475143 is: " << endl;
	cout << answer << "\n" << endl;
	//
	return 0;
}





