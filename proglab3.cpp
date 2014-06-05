//Script started on Thu Oct 6 20:31:31 2011

//Brady Helkenn
//Rock-Paper-Scissors program
//proglab3.cpp - source file
#include <iostream>
using namespace std;

int main() {
	char player_one, player_two;
	cout << "Player One, please enter your move ('P' for Paper, 'R' for Rock, 'S' for Scissors): ";
	cin >> player_one;
	cout << "Player Two, please enter your move ('P' for Paper, 'R' for Rock, 'S' for Scissors): ";
	cin >> player_two;
	switch (player_one) {
		case 'r': //include lowercase for Rock
		case 'R': 
			player_one = 'R'; //sets char player_one to R without worrying about case-sensitivity
			break;
		case 'p': //include lowercase for Paper
		case 'P':
			player_one = 'P'; //sets char player_one to P without worrying about case-sensitivity
			break;
		case 's': //include lowercase for Scissors
		case 'S':
			player_one = 'S'; //sets char player_one to S without worrying about case-sensitivity
			break;
		default: //if none of the above
			cout << "Player 1 has entered an invalid move." << endl;
			break;
	}
	switch (player_two) {
		case 'r':
		case 'R':
			player_two = 'R';
			break;
		case 'p':
		case 'P':
			player_two = 'P';
			break;
		case 's':
		case 'S':
			player_two = 'S';
			break;
		default:
			cout << "Player 2 has entered an invalid move." << endl;
			break;
	}
	if (player_one != player_two) {
		int winner = 0; //defines the winner as either 1 or 2, but it needs to be defined as 0 at first
		
		if (player_one == 'R') {
			if (player_two == 'S') {
				winner = 1;
				cout << "Player " << winner << " wins: Rock breaks Scissors!!" << endl;
			}
			else if (player_two == 'P') {
				winner = 2;
				cout << "Player " << winner << " wins: Paper covers Rock!!" << endl;
			}
		}
		else if (player_one == 'P') {
			if (player_two == 'S') {
				winner = 2;
				cout << "Player " << winner << " wins: Scissors cut Paper!!" << endl;
			}
			else if (player_two == 'R') {
				winner = 1;
				cout << "Player " << winner << " wins: Paper covers Rock!!" << endl;
			}
		}
		else if (player_one == 'S') {
			if (player_two == 'R') {
				winner = 2;
				cout << "Player " << winner << " wins: Rock breaks Scissors!!" << endl;
			}
			else if (player_two == 'P') {
				winner = 1;
				cout << "Player " << winner << " wins: Scissors cut Paper!!" << endl;
			}
		}
	}
	else {
		if (player_one == 'R' && player_two == 'R') {cout << "Tie with Rock!" << endl;}
		else if (player_one == 'P' && player_two == 'P') {cout << "Tie with Paper!" << endl;}
		else if (player_one == 'S' && player_two == 'S') {cout << "Tie with Scissors!" << endl;}
		else {cout << "An error in the program has occcurred." << endl;}
	}
	return 0;
}