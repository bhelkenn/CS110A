//Script started on Fri Sep 23 19:43:11 2011

//Brady Helkenn
//Practice Problem 4: Sales Tax
//source file pp4.cpp
#include <iostream>
#include <iomanip>
#include <fstream>using namespace std;

int main() {
	char month[20];
	const char OUTPUT_FILENAME[20] = "SalesTaxData.txt";
	int year;
	double monthly_income, sales, county_tax, state_tax, total_tax;
	
	const float STATE_TAX_PERCENT = 0.04;
	const float COUNTY_TAX_PERCENT = 0.02;
	const float TOTAL_TAX_PERCENT = STATE_TAX_PERCENT + COUNTY_TAX_PERCENT;
	
	ofstream OutputFile; //Declare the file variable
	OutputFile.open (OUTPUT_FILENAME); //Create the file
	
	OutputFile << "\nMonth:   ";
	cout << "Please enter the month for this report: ";
	cin >> month;
	OutputFile << month << " ";
	cout << "Please enter the year for this report: ";
	cin >> year;
	OutputFile << year;
	
	OutputFile << "\n-----------------------\n";
	
	//Sets the decimal to 2 places
	OutputFile << setprecision(2) << fixed << showpoint;
	
	OutputFile << left << setw(24) << "Total Collected:";
	cout << "Please enter the total income for this month: ";
	cin >> monthly_income;
	OutputFile << "$ " << right << setw(9) << monthly_income << endl;
	
	OutputFile << left << setw(24) << "Sales:";
	sales = monthly_income / (1 + TOTAL_TAX_PERCENT);
	OutputFile << "$ " << right << setw(9) << sales << endl;
	
	OutputFile << left << setw(24) << "County Sales Tax:";
	county_tax = sales * COUNTY_TAX_PERCENT;
	OutputFile << "$ " << right << setw(9) << county_tax << endl;
	
	OutputFile << left << setw(24) << "State Sales Tax:";	state_tax = sales * STATE_TAX_PERCENT;
	OutputFile << "$ " << right << setw(9) << state_tax << endl;
	
	OutputFile << left << setw(24) << "Total Sales Tax:";	total_tax = county_tax + state_tax;	OutputFile << "$ " << right << setw(9) << total_tax;
	OutputFile << "\n-----------------------\n";	OutputFile.close(); //Close the file
	cout << "Sales Tax Report Saved to file: " << OUTPUT_FILENAME << endl;
	return 0;
}