//Script started on Sat Nov 5 14:32:50 2011

//Brady Helkenn
//proglab4.cpp
//CS 110A Program Lab 4
//This program the size and composition of a parallelogram.

#include <iostream>
using namespace std;
int main() {
	char comp; //composition of the parallelogram
	int length; //length of each side
	int count = 0; //used for while loop
	cout << "This program will output a parallelogram.";
	
	cout << "\nHow long do you want each side to be? ";
	cin >> length;
	cout << "Please enter the character you want it to be made of: ";
	cin >> comp;
	
	while (count < length) {
		for (int i = 0; i <= count; i++) {cout << comp;}
		count++;
		cout << endl;
	}
	count--; //prevents having two lines the same length
	while (count > 0) {
		int spaces = 0;
		spaces = (length - count); //number of spaces
		for (int i = 0; i < spaces; i++) {cout << " ";}
		for (int i = 0; i < count; i++) {cout << comp;}
		count--;
		cout << endl;
	}
	
	return 0;
}