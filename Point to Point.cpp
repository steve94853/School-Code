#include <iostream>

using namespace std;
double x, y, x1, yy, x2, y2;
int main()
{
	cout << "Welcome to the 2D Midpoint Program!\n\n"
		<< "Please enter the coordinates of the first and second points in the plane in the format <x,y><x2,y2:\n\n";
	char un;
	cin >> un >> x >> un >> y >> un >> un >> x1 >> un >> yy>> un;
	if (cin.fail())
	{
		cout << "Invalid input. Please enter the coordinates in the format <x,y><x2,y2>.\n";
		return 1;
	}
	
	cout << "\nCalculating the midpoint now...\n\n";
	x2 = (x + x1) / 2;
	y2 = (y + yy) / 2;
	cout << "The midpoint of the line segment between (" << x << ", " << y << ") and (" << x1 << ", " << yy << ") is (" << x2 << ", " << y2 << ").\n\n";
	cout << "Thank you for using the 2D Midpoint Program.\n\n";



	return 0;
}
