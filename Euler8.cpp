/* Richard Bennett 2/26/2016
The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450
Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/

#include <iostream>
#include <fstream>
//#include <string>
using namespace std;

//Main
int main()
{
	//Variables			
	long product;						//Current product
	long bestProduct = 0;				//Best Product
	long numbers [1000];				//Holds all the digits
	ifstream myfile ("Euler8.dat");		//File with all the digits
	//
	
	for(int i = 0; i <1000; i++)			//For every digit				
		numbers[i] = myfile.get() - 48;			//It's equal to the character code - 48
	
	for(int i = 0; i < 987; i++)			//For every digit but the last 12
	{
		product = numbers[i];					//The product is that digit times the next twelve digits
		for(int j = 1; j < 13; j++)
			product *= numbers[i+j];		 
	
		if(product > bestProduct)				//If that product is the biggest so far
			bestProduct = product;					//Set it as the bestProduct
	}

	//Print output
	cout << "\nEuler Project Problem 8" << endl;
	cout << "Find the thirteen adjacent digits in the 1000-digit number " <<
		"that have the greatest product. What is the value of this product?\n" << endl;

	cout << "The answer is: " << bestProduct << "\n" << endl;
	return 0;
}	
