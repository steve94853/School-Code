#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	cout << "Welcome to the Bingo Number Generator!"
   << "Would you like to generate a number?\n1.Yes\n2.No\n";
	int x;
	cin >> x;
	
	if (x == 1) {
		srand(time(0)); 

		cout << "Your number is B" << rand() % 15 + 1 << endl;
		cout << "Your number is I" << rand() % 15 + 16 << endl;
		cout << "Your number is N" << rand() % 15 + 31 << endl;
		cout << "Your number is G" << rand() % 15 + 46 << endl;
		cout << "Your number is O" << rand() % 15 + 61 << endl;
		return 1;
	}
	else if (x == 2) {
		cout << "Goodbye!";
	
	}
	
	return 0;
}