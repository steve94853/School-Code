#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Welcome to the Room Capacity Program!\n\n"
   <<"How many people can this room hold? ";
	double Capacity;
	double Attending;
	cin >> Capacity;
	cout << "How many people have arrived for the meeting? ";
	cin >> Attending;
	double Percentageattend = round((Attending * 100) / Capacity);
	cout << "\nYou have used up "<< Percentageattend <<"% of your room's capacity.\n";
	double remaining = round(Capacity - Attending);
	if (Percentageattend > 100) {
		cout << "Some people have to leave.\n\n"
			<< "This meeting is NOT LEGAL - you need to break it up!\n\n";
	}
	else { 
		cout << "You still have room for "<< remaining <<" more people.\n\n"
			<< "This meeting is LEGAL - proceed with the congregation!\n\n";
	}
	cout << "Thank you for using the Room Capacity Program!";
	
	return 0;
}