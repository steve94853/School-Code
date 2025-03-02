#include <iostream>
#include <string>

using namespace std;

int getValidPositiveInt(string prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail() || value <= 0) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Invalid input. Please enter a positive whole number.\n";
        } else {
            cin.ignore();
            return value;
        }
    }
}

int getValidTally(string prompt) {
    string input;
    while (true) {
        cout << prompt;
        cin >> input;

        if (input == "exit") return -1;

        try {
            int value = stoi(input);
            if (value > 0) return value;
        } catch (...) {}

        cout << "Invalid input. Please enter a positive number or type 'exit'.\n";
    }
}

int main() {
    cout << "Welcome to the Room Capacity Program!\n\n";

    int Capacity = getValidPositiveInt("Enter the maximum number of people the room can hold: ");
    int Attending = 0;

    cout << "\nStart entering the number of peop
