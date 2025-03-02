#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
	cout << "Welcome to the Monogram Program!\n\n"
	     << "What are your initials (Include a space between each initial)? ";
	char f, m, l;
	cin >> f >> m >> l;
	
	if (cin.peek() == '\n') {
		cout << "\nDo you want to use (s)paces or (p)eriods? ";
		char choice;
		cin >> choice;

		if (tolower(choice) == 's') {
			cout << "\nYour monogram can be one of two choices: "
				<< static_cast<char>(toupper(f)) << " "
				<< static_cast<char>(tolower(m)) << " "
				<< static_cast<char>(toupper(l))
				<< "\n\n\nor\n\n\n"
				<< static_cast<char>(toupper(f))
				<< " "
				<< static_cast<char>(toupper(l))
				<< "\n\n "
				<< static_cast<char>(toupper(m))
				<< "\n\nThank you for using the Monogram Program!";
			return 0;
		}
		else if (tolower(choice) == 'p') {
			cout << "\nYour monogram will be "
				<< static_cast<char>(toupper(f)) << "."
				<< static_cast<char>(tolower(m)) << "."
				<< static_cast<char>(toupper(l))
				<< "\n\nThank you for using the Monogram Program!";
			return 0;
		}
		else {
			cout << "\nError: Please enter 's' or 'p'.\n\n";
			return 1;
		}
	}
	else {
		cout << "\nInvalid input - an initial can only be one letter!\n";
		return 1;
	}
	
	
	
	return 0;
}