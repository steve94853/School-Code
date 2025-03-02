#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int dice;
int sides;
int roll;
int mod;
char ch;

int main() {
    cout << "Welcome to the Dice Statistics Program!\n\n"
         << "What is your roll? ";

	cin >> dice >> ch >> sides;
   
    double min = dice + mod;
    double max = (dice * sides) + mod;
    double avg = (max + min) / 2;

    cout << "\n\nThank you! When rolling a " << dice << "d" << sides << " + " << mod <<", your statistics will be:\n\n"
        << "    Minimum: " << min << "\n"
        << "    Average: " << avg << "\n"
        << "    Maximum: " << max << "\n\n";
    srand(time(0));
    double total = 0;

    for (int i = 0; i < dice; ++i) {
        double roll = rand() % sides + 1;
        total += roll;
    }
    if (dice == 1 && sides == 20)
    {
        cout << "You rolled a natural 20! Critical hit!\n\n";
    }
    else {
        cout << "You rolled a " << total << "!\n\n";
    }
   
    cout << "Thank you for using the DSP!";
	
    
   
    return 0;
}