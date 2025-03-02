#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int di;
    cout << "Enter a number: ";
    cin >> di;
    if (di % 3 == 0 && di % 5 == 0) {
        cout << "FrizzBuzz";
    }
    else if (di % 3 == 0) {
        cout << "Frizz";
    }
    else if (di % 5 == 0) {
        cout << "Buzz";
    }
    return 0;
}
