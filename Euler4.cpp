/* Richard Bennett 2/25/2016
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
using namespace std;

//Checks if an integer is a palindrome
bool checkPalindrome(int suspect)
{
	//Variables
	int number = suspect;
	int reverseSuspect = 0;
	//

	while(number != 0) {					//Reverse the integer as reverseSuspect
		reverseSuspect = (reverseSuspect*10) + (number%10);		
		number /= 10;
	}
	return (reverseSuspect == suspect);		//Return true if reverseSuspect and suspect are the same integer
}

//Main	
int main() 
{
	//Variables
	int largestPalindrome = 0;		//Holds the largest palindrome made by the product of two 3 digit numbers
	//

	for(int i = 999; i > 99; i--) {					//For all 3 digit numbers
		for(int j = 999; j > 99; j--) {					//multiply by all other 3 digit numbers
			if(checkPalindrome(i*j))						//check if it's a palindrome
				if(i*j > largestPalindrome) 					//if it's larger than the largest
					largestPalindrome = (i*j);						//it is now the largest palindrome
		}
	}

	//Print output
	cout << "\nEuler Project Problem 4" << endl;
	cout << "The largest palindrome made from the product of two 3-digit numbers is:" << endl;
	cout << largestPalindrome << "\n" << endl;
	//	
	return 0;
}
	
