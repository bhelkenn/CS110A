//Script started on Wed Oct 26 15:42:03 2011

//Brady Helkenn
//pp5.cpp
//CS 110A PP5
//This program calculates the growth of a jackalope population over a user-defined number of generations.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//Define increase and decrease of the population.
	const double INC = 0.03, DEC = 0.01;
	//Define input variables
	int gen, pop;
	//Define for loop counter
	int count;
	cout << "How many jackalopes do you have? ";
	cin >> pop;
	//Validation loop
	while (pop < 0) {
		cout << "\nPlease enter a positive number: ";
		cin >> pop;
	}
	cout << "How many generations do you want to wait? ";
	cin >> gen;
	//Validation loop
	while (gen < 0) {
		cout << "\nPlease enter a positive number: ";
		cin >> gen;
	}
	
	//Need to start the cout statement here to use the initial population input
	cout << "If you start with " << pop << " ";
	//Define variable for the pop changes to accumulate
	double change = pop;

	//Define loop count to increment until it reaches the number input for gen
	for (count = 1; count <= gen; count++) {
		//Increase in population
		change += (change * INC);
		//Decrease in population
		change -= change * DEC;
	}
	//Set population back to an integer
	pop = change;
	//Finish the cout statement that was started before the for loop
	cout << "jackapoles and wait " << gen << " generations, you'll end up with a total of " << pop << " of them.\n";
	
	return 0;
}