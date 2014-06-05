//Script started on Sun Nov 20 13:52:19 2011
//Brady Helkenn
//CS 110A ProgLab5
//proglab5.cpp
//This program helps to define and determine loan calculations based on user input.
#include <iostream>
#include <iomanip>
using namespace std;
//Prototypes
void input(double&, double&, double&);
void payoff(double, double, double, int&, double&);
int main() {
	double principal, interest, payment; //declare input variables
	int months = 1;
	double total_interest = 0; //interest accrued during payoff
	cout << "** Welcome to the Consumer Loan Calculator **" << endl;
	input(principal, interest, payment); //Get input
	payoff(principal, interest, payment, months, total_interest); //Calculate loan payoff
	return 0;
}
//Define input function
void input(double &principal, double &interest, double &payment) {
	cout << "\nHow much do you want to borrow? $";
	cin >> principal;
	while (principal <= 0) {
		cout << "You must enter a positive number!" << endl;
		
		cout << "\nHow much do you want to borrow? $";
		cin >> principal;
	}
	cout << "\nWhat is the annual interest rate expressed as a percent? ";
	cin >> interest;
	while (interest < 0) {
		cout << "You must enter a positive number!" << endl;
		cout << "\nWhat is the annual interest rate expressed as a percent? ";
		cin >> interest;
	}
	
	cout << fixed << showpoint << setprecision(2);
	interest = (interest * 0.01) / 12; //Convert to monthly decimal value
	cout << "\nWhat is the monthly payment amount? $";
	cin >> payment;
	while (payment <= 0) {
		cout << "You must enter a positive number!" << endl;
		cout << "\nWhat is the monthly payment amount? $";
		cin >> payment;
	}
}
//Define payoff function
void payoff(double principal, double rate, double payment, int &months, double &total_interest) {
	cout << fixed << showpoint << setprecision(2);
	double accrued = principal * rate;
	
	if (accrued >= payment) {
		payment = accrued + 1;
		cout << "You must make payments of at least $" << payment << " because your monthly interest is $" << accrued << endl;
		cout << "\n** Don't get overwhelmed with debt! **" << endl;
		exit(0);
	}
	else {
		for (; principal >= payment; months++) {
			accrued = principal * rate; //accrued interest for the month
			principal = principal + accrued - payment;
			total_interest += accrued;
		}	accrued = principal * rate;
	principal += accrued;
	total_interest += accrued;
	cout << "\nYour debt will be paid off after " << months << " months, with a final payment of just $" << principal << endl;
	cout << "\nThe total amount of interest you will pay during that time is $" << total_interest << endl;
	
	cout << "\n** Don't get overwhelmed with debt! **" << endl;
}