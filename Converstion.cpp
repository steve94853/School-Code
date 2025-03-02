#include <iostream>
#include <cmath>

using namespace std;
double lb;
double ounces;
double re;
double lb2;

int main() {
	cout << "Welcome to the Ounce Conversion Program!"
		<< "\n\nThis program will convert ounces to grams."
		<< "\n\nPlease enter the number of ounces: ";
	cin >> ounces;
	lb2 = ounces / 16.0;
	lb = floor(lb2);
	re = ounces - (lb * 16);
	cout<< "Thank you! Converting ounces to pounds."
		<< "\n\n" << ounces << " oz is equivalent to " << lb << " lbs and " << re << " oz."
		<< "\n\n" << ounces << " oz is equivalent to " << lb2 << " lbs. "
		<< "\n\nThank you for using the OCP!";
	return 0;


}