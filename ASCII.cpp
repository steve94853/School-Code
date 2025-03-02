#include <iostream>
#include <cmath>

using namespace std;
int choice;
int choice2;

int main() {
	cout << "Welcome to the ASCII Shapes program! Would you like to draw a (1) square or (2) triangle?\n\n ";
	cin >> choice;
	if (choice == 1) {
		cout << "Great choice!How big do you want the side length to be ?\n\n";
		cin >> choice2;
		cout << "Here is your square: \n\n";
		for (int i = 0; i < choice2; i++) {
		for (int j = 0; j < choice2; j++) {
			cout << " * ";
		}

		cout << endl;

	}
	}
	else if (choice == 2) {
		cout << "Great choice! How big do you want the base length to be ?\n\n";
		cin >> choice2;
		cout << "Here is your triangle: \n\n";
		for (int i = 1; i <= choice2; i++) {
			for (int j = 1; j <= i; j++) {
				cout << " * ";
			}

			cout << endl;
		}
	}
	else {
		cout << "Invalid choice. Please try again.\n\n";
	}
	cout << "Thank you for using the ASCII Shapes program! Goodbye!\n\n";
	
	return 0;
}
	
	
