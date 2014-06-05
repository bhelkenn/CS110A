//Script started on Fri Sep 9 19:07:29 2011
//Brady Helkenn
//pp3.cpp
//CS 110A Practice Problem 3
#include <iostream>
using namespace std;
int main() {	int GallonsOfGas = 12;
	int MilesTraveled = 350;
	int MPG;
	
	// Calculate the miles per gallon
	MPG = MilesTraveled / GallonsOfGas;
	
	cout << "A vehicle with a " << GallonsOfGas << " gallon tank that ";
	cout << "travels " << MilesTraveled << " miles on a full tank has ";
	cout << "an MPG rating of " << MPG << "." << endl;
	
	return 0;
}