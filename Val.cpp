#include <cassert>
#include <cctype>
#include <iostream>

using namespace std;

bool valid_password(string password) {
    int digit_count = 0;
    bool has_upper = false;
    bool has_special = false;
    string special_characters = "^%.<>?/!_=,@\";:'&*()+[]{}|#$-`~";

    for (char ch : password) {
        if (isdigit(ch)) {
            digit_count++;
        }
        else if (isupper(ch)) {
            has_upper = true;
        }
        else if (special_characters.find(ch) != string::npos) {
            has_special = true;
        }
    }

    if (digit_count < 2) {
        return false;
    }
    if (!has_upper) {
        return false;
    }
    if (!has_special) {
        return false;
    }

    return true;
}

int main() {
    assert(!valid_password("some invalid password"));
    assert(valid_password("some valid password"));
}