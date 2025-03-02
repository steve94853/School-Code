#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << "Welcome to the Point Conversion Program!\n\n";

    int choice;
	while (true) {
        std::cout << "Do you want to enter your coordinate in:\n\n";
        std::cout << "(1) Spherical Coordinates\n";
        std::cout << "(2) Cartesian Coordinates\n\n";
		std::cin >> choice;
		if (choice == 1 || choice == 2) {
			break;
		}
		std::cout << "\nThat is not a valid choice!\n\n";
	}

    std::cout << "\nEnter your coordinates, separated by spaces:\n\n";

    if (choice == 1) {
        double r, theta, phi;
        std::cin >> r >> theta >> phi;

        double x = r * sin(theta) * cos(phi);
        double y = r * sin(theta) * sin(phi);
        double z = r * cos(theta);

        std::cout << "\nYour Cartesian coordinates are: (" << x << ", " << y << ", " << z << ")\n";
        std::cout << std::fixed << std::setprecision(1) << "Your Spherical coordinates are: (" << r << ", " << theta << ", " << phi << ")\n";
    }
    else {
        int x, y, z;
        std::cin >> x >> y >> z;

        double r = sqrt(x * x + y * y + z * z);
        double theta = acos(z / r);
        double phi = atan2(y, x); 

        std::cout << std::fixed << std::setprecision(1) << "\nYour Spherical coordinates are: (" << r << ", " << theta << ", " << phi << ")\n";
        std::cout << "Your Cartesian coordinates are: (" << x << ", " << y << ", " << z << ")\n";
    }

    std::cout << "\nThank you for using the Point Conversion Program!\n";
    return 0;
}
