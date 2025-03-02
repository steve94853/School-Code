#include <iostream>
#include <cmath>

using namespace std;
double x_1, y_1, x_2, y_2, z_1, z_2;
int main()
{
	cout << "Welcome to the Distance Program!\n\n"
		<< "Do you want to calculate a distance in 2 or 3 dimensions? ";
	int di;
	cin >> di;
	if (di == 2)
	{
		cout << "Please enter the first and second points in the plane in the format x,y x2,y2:\n\n";
		char un;
		cin >> x_1 >> un >> y_1 >> x_2 >> un >> y_2;
        if (cin.fail() || un != ',')
		{
			cout << "Invalid input. Please enter in the format x,y x2,y2.\n";
			return 1;
		}

		cout << "\nCalculating the distance now...\n\n";
		double x = (x_2 - x_1) * (x_2 - x_1);
		double y = (y_2 - y_1) * (y_2 - y_1);
		double distance = sqrt(x + y);
		cout << "The distance between (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is " << distance << ".\n\n";
		
		double dot = (x_1 * x_2) + (y_1 * y_2);
		double x1 = x_1 * x_1;
		double yy1 = y_1 * y_1;
		double mag1 = sqrt(x1 + yy1);
		double x2 = x_2 * x_2;
		double y2 = y_2 * y_2;
		double mag2 = sqrt(x2 + y2);
		double cosim = dot / (mag1 * mag2);
		cout << "The cosine similarity between (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is " << cosim << ".\n\n";
	}
	else if (di == 3)
	{
		cout << "Please enter the first and second points in space in the format x,y,z x2,y2,z2:\n\n";
		char un1;
		cin >> x_1 >> un1 >> y_1 >> un1 >> z_1 >> x_2 >> un1 >> y_2 >> un1 >> z_2;
		if (cin.fail())
		{
			cout << "Invalid input. Please enter in the format x,y,z x2,y2,z2.\n";
			return 1;
		}

		cout << "\nCalculating the distance now...\n\n";
		double x = (x_2 - x_1) * (x_2 - x_1);
		double y = (y_2 - y_1) * (y_2 - y_1);
		double z = (z_2 - z_1) * (z_2 - z_1);
		double distance = sqrt(x + y + z);
		cout << "The distance between (" << x_1 << ", " << y_1 << ", " << z_1 << ") and (" << x_2 << ", " << y_2 << ", " << z_1 << ") is " << distance << ".\n\n";
	}
	else
	{
		cout << "Invalid input. Please enter 2 or 3.\n";
		return 1;
	}
		
	if (di == 2)
	{
		cout << "Thank you for using the 2D Distance Program.\n\n";
	}
	else if (di == 3)
	{
		cout << "Thank you for using the 3D Distance Program.\n\n";
	}
	return 0;
}
