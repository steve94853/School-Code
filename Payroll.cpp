#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

int main() {
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Welcome to the Payroll Program!\n\n";
		
	double hoursworked;
	std::cout << "How many hours did you work this week? ";
	std::cin >> hoursworked;

	int children;
	while (true) {
		std::cout << "How many children do you have? ";
		std::cin >> children;
		if (children >= 0) break;
	}
	
	double LifeIns = 0.0;
	while (true) {
		std::cout << "Which life insurance plan do you want to select?"
			<< "\n\n   (1) no plan"
			<< "\n   (2) single plan"
			<< "\n   (3) married plan"
			<< "\n   (4) married with children plan\n\n";
		int plan;
		std::cin >> plan;
		if (plan < 1 || plan > 4) {
			std::cout << "\n\nPlease re-enter your plan selection as a number between 1 and 4.\n\n";
			continue;
		}
		if (plan == 4 && children < 1) {
			std::cout << "\n\nSorry! You need at least one child to select that plan.\n\n";
			continue;
		}
		if (plan == 2 && children > 0) {
			std::cout << "\n\nSorry! You can't have children and select the single plan.\n\n";
			continue;
		}
		if (plan == 2) {
			LifeIns = 5;
		}
		if (plan == 3) {
			LifeIns = 10;
		}
		if (plan == 4) {
			LifeIns = 15;
		}
		if (plan == 1) {
			LifeIns = 0;
		}
		break;
	}
	
	double Rate;
	std::cout << "\n\nWhat is your hourly rate of pay? ";
	std::cin >> Rate;
	if (Rate < 0) {
		std::cout << "\n\nPlease re-enter your rate of pay as a positive number.\n\n";
		return 1;
	}
	else {
		std::cout << "\n\nPayroll Stub:\n\n"
			<< "   Hours:  " << hoursworked << "\n";
		std::cout << "   Rate:   " << Rate << " $/hr";
		double gross = 0.0;
		if (hoursworked > 40) {
			double overtime = (hoursworked - 40) * (Rate * 1.5);
			gross = (40 * Rate) + overtime;
		}
		else {
			gross = hoursworked * Rate;
		}
		std::cout << "\n   Gross:   $" << gross;
		double socsec = gross * .06;
		std::cout << "\n\n   SocSec:   " << socsec;
		double FedTax = gross * .14;
		std::cout << "\n   FedTax:   $" << FedTax;
		double StTax = gross * .05;
		std::cout << "\n   StTax:   $" << StTax;
		double UnionDue = 10;
		double Ins = 0.0;
		if (children >= 3) {
			Ins = 35;
		}
		else {
			Ins = 15;
		}
		double taxdeduction = FedTax + StTax + socsec;
		double companydeduction = UnionDue + Ins + LifeIns;
		if (gross < companydeduction) {
			double totalDeduction = taxdeduction;
			double net = gross - totalDeduction;
			std::cout << "\n\n   Net:   $" << net;
			std::cout << "\n\nThe employee still owes:\n";
			std::cout << "\n   Union:   $" << UnionDue;
			std::cout << "\n   Ins:   $" << Ins;
			std::cout << "\n   LifeIns:   $" << LifeIns;
		}
		else {
			double totalDeduction = taxdeduction + companydeduction;
			double net = gross - totalDeduction;
			std::cout << "\n   Union:   $" << UnionDue;
			std::cout << "\n   Ins:   $" << Ins;
			std::cout << "\n   LifeIns:   $" << LifeIns;
			std::cout << "\n\n   Net:   $" << net;
		}
		std::cout << "\n\nThank you for using the Payroll Program!";
		return 0;
	}
}
