//Script started on Tue Nov 29 14:36:39 2011
//Brady Helkenn
//CS 110A - Programming Lab 6
//proglab6.cpp source file
//Palindrome Program - this program tests a character string to determine if it's the same spelled backwards as forwards
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//Define a character string at most 20 letters long
	char str[21];
	//Define a backwards character array
	char backwards[21];
	cout << "Please enter a word: ";
	cin >> str;
	//Store the size of the string in an integer
	int len = strlen(str);
	int count; //For loop counter
	bool arraysEqual = true; //Boolean test
	for (count = 1; count <= len; count++) {backwards[count - 1] = str[len - count];}	
	count = 0;
	
	while (arraysEqual && count < len) {
		if (str[count] != backwards[count]) {arraysEqual = false;}
		count++;
	}
	if (arraysEqual) {cout << "The word you entered, '" << str << "' is a palindrome." << endl;}
	else {cout << "The word you entered, '" << str << "' is not a palindrome." << endl;}
	
	return 0;
}