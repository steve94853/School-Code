#include <iostream>

int main() {
    int x;
    int y;


    std::cout << "Welcome to the Resistor Calculation Program! \n";
    std::cout << "Please enter the first resistance value: ";
    std::cin >> x;
    std::cout << "\nPlease enter the second resistance value: ";
    std::cin >> y;

    int P = x + y;
    double S = 1.0 / ((1.0 / x) + (1.0 / y));
    std::cout << "\nThank you! You have entered " << x << " ohms and" << y << " ohms!";
    std::cout << "\n\n If your resistors are placed in series, they will total to " << P << " ohms.";
    std::cout << "\n If your resistors are placed in parallel, they will total to " << S << " ohms.";
	std::cout << "\n\nThank you for using the RCP!";
    return 0;
}