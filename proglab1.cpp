//Script started on Sat Sep 17 15:14:08 2011

//Brady Helkenn
//Programming Lab 1: Muni Ridership Calculator
//source file proglab1.cpp
#include <iostream>
using namespace std;
int main() {
	char MuniLine[16];
	int DaysSurveyed;
	unsigned int PeopleCounted;
	float AveragePerDay;
	
	cout << "Welcome to the Muni Ridership Calculator." << endl;
	cout << "Which Muni line did you survey? ";
	cin >> MuniLine;
	
	cout << "How many days did you survey it? ";
	cin >> DaysSurveyed;
	
	cout << "How many riders did you count? ";
	cin >> PeopleCounted;
	
	//Calculate the average number of people counted per day.
	AveragePerDay = static_cast<float>(PeopleCounted) / DaysSurveyed;
	
	cout << "According to your survey, an average of ";
	cout << AveragePerDay << " people rode the " << MuniLine << " per ";
	cout << "day." << endl;
	
	return 0;
}