//Script started on Mon Nov 14 16:57:19 2011

//Brady Helkenn
//Practice Problem 6: Writing Functions
//CS 110A - source file: pp6.cpp
//This program uses different functions to determine how many days an average employee is out of work.
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes
int Employees();
int Days(int);
double Average(double, double);
int main() {
	//variables to hold return values
	int employees, days;
	double average;
	employees = Employees();
	days = Days(employees);
	average = Average(employees, days);
	cout << fixed << showpoint << setprecision (1);
	cout << "The average number of days missed per employee is " << average << "." << endl;
	return 0;
}
int Employees() {
	int num;
	
	cout << "How many employees does the company have? ";
	cin >> num;
	
	//Validation
	while (num < 1) {
		cout << "The number of employees must be one or greater. Please re-enter: ";
		cin >> num;
	}
	return num;
}

int Days(int employees) {
	int value, total = 0;
	for (int count = 1; count <= employees; count++) {
		cout << "Days missed by employee #" << count << ": ";
		cin >> value;
		
		while (value < 0) {
			cout << "Days missed must be zero or greater. Please re-enter: ";
			cin >> value;
		}
		total += value;
	}
	
	return total;
}
double Average(double employees, double days) {
	double average = days / employees;
	return average;
}