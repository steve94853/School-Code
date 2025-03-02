#include <iostream>

int num;
using namespace std;


int main() {
    cout << "Please enter a number \n";
    cin >> num;
    if (num > 10 || num < 7) {
        cout << "A \n";
    }
    else if(num > 5) {
        cout << "B\n";
    }
    else {
        cout << "C\n";
    }
    return 0;
}
