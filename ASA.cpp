#include <iostream>

using namespace std;

void pass_by_reference(string& my_string) {
	cout << "\n\nInside pass_by_reference, before modification: " << my_string;
	my_string += "This is the new part!\n";
	cout << "\nInside pass_by_reference, after modification: " << my_string;
}

void pass_by_value(string my_string) {
	cout << "\nInside pass_by_value, before modification: " << my_string;
	my_string += "This is the new part!\n";
	cout << "\nInside pass_by_value, after modification: " << my_string;
}

int main() {
	string my_string = "This is a string ";
	cout << "\nBefore calling functions: " << my_string <<"\n";
	
	pass_by_value(my_string);
	cout << "After calling pass_by_value: " << my_string;
	
	pass_by_reference(my_string);
	cout << "After calling pass_by_reference: " << my_string;
	return 0;
} 