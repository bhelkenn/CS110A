//Script started on Thu Sep 29 18:34:58 2011

//Brady Helkenn
//Programming Lab 2: Bank Charges
//source file - proglab2.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int checks;
	const int FLAT = 10; //Flat fee per month
	const int MINBALANCE = 15; //Fee for dropping below $400 starting balance
	float per_check, balance, fee = 0;
	char pause;
	fee += FLAT;
	
	cout << "Enter the following information about your checking account.\n";
	
	cout << "Beginning balance: $";
	cin >> balance;
	
	cout << "Number of checks written: ";
	cin >> checks;
	if (checks < 20 && checks >=0) {per_check = 0.10;}
	else if (checks < 40 && checks >=0) {per_check = 0.08;}
	else if (checks < 60 && checks >=0) {per_check = 0.06;}
	else if (checks >= 60) {per_check = 0.04;}
	else {
		cout << "Please enter either a positive number or 0";
		cout << "\n\n\nQuitting program!\n\n";
		return 0;
	}
	fee += (checks * per_check);
	if (balance < 0) {cout << "WARNING! THIS ACCOUNT IS OVERDRAWN!" << endl;}
	if (balance < 400) {fee += MINBALANCE;}
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The bank fee this month is $" << fee << endl;
	if (balance - fee < 0) {
		cout << "WARNING! This fee will overdraw your account!" << endl;
		cout << "Press Enter to continue...";
		cin.ignore(); //Pauses the program
		cin.get(pause); //Requires a keystroke to show recognition of overdraft
	}
	balance -= fee; //Subtract the total fee from the starting balance
	cout << "\nYour new balance after the bank fee will be $" << balance << endl;
	return 0;
}