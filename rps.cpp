#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    cout << "Welcome to Rock, Paper, Scissors! You are going to play against a random computer player."
        << "\n\nPick a move:\n\n"
        << "1) Rock\n2) Paper\n3) Scissors\n"
        << "\n> ";

	int playerMove;
	string playerMoveWord;
	string computerMoveWord;
	cin >> playerMove;
	if (playerMove != 1 && playerMove != 2 && playerMove != 3) {
		cout << "Invalid input. Please enter a number between 1 and 3.\n";
		return 1;
	}
	else
	{
		srand(time(0));
		int computerMove = rand() % 3 + 1;
		if (playerMove == 1) {
			playerMoveWord = "Rock";
		}
		else if (playerMove == 2) {
			playerMoveWord = "Paper";
		}
		else if (playerMove == 3) {
			playerMoveWord = "Sissors";
		}
		if (computerMove == 1) {
			computerMoveWord = "Rock";
		}
		else if (computerMove == 2) {
			computerMoveWord = "Paper";
		}
		else if (computerMove == 3) {
			computerMoveWord = "Sissors";
		}
		cout << "You chose " << playerMoveWord << " while the computer chose " << computerMoveWord;
		if (playerMove == computerMove) {
			cout << "\n\nIt's a tie!";
		}
		else if (playerMove == 1 && computerMove == 2) {
			cout << "\n\nYou lose!";
		}
		else if (playerMove == 1 && computerMove == 3) {
			cout << "\n\nYou win!";
		}
		else if (playerMove == 2 && computerMove == 1) {
			cout << "\n\nYou win!";
		}
		else if (playerMove == 2 && computerMove == 3) {
			cout << "\n\nYou lose!";
		}
		else if (playerMove == 3 && computerMove == 1) {
			cout << "\n\nYou lose!";
		}
		else if (playerMove == 3 && computerMove == 2) {
			cout << "\n\nYou win!";
		}

		cout << "\n\nPlay again?\n\n"
			<< "1) Yes\n2) No\n"
			<< "\n> ";
		int Again;
		cin >> Again;
		if (Again == 1) {
			main();
		}
		else {
			cout << "Have a great day!";

		}
	}
	

    return 0;
}
