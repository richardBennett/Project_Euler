/*	Richard Bennett 3/2/2016
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

#include <iostream>
using namespace std;

int main() {
	int numGrids = 20;				//The number of grids per side
	int size = numGrids + 1;		//the number of paths
	long grid[size][size];			//An array for each path

	for(int i = 0; i < size; i++) {	//Every path on the top and left is equal to one
		grid[0][i] = 1;
		grid[i][0] = 1;
	}

	for(int i = 1; i < size; i++) {			//For every other path it is equal to the one above it and the one to the left added
		for(int j = 1; j < size; j++) {		
			grid[i][j] = grid[i][j-1] + grid[i-1][j];	
		}
	}

	//Print output
	cout << "\nEuler Project Problem 15" << endl;
	cout << "How many such routes are there through a 20×20 grid?\n" << endl;
	cout << "The answer is : " << grid[numGrids][numGrids] << endl << endl;
	//
	return 0;
}
