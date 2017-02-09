/*
CPT-180-24
Programmer: Zachary Murphy
Restaurant Bill 2 Program
Purpose: Calculautes and outputs the total cost for the bill
also seperates the total sales, tax, tip, and total.
*/
#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
//declaring constant value for taxrate
const double TAXRATE = 0.0675;

int main() {
	//variable declarations for input values from user
	double meal, tipRate;

	//getting information from user and assining variables
	cout << "********************************************************\n";
	cout << "\t\t Calculate Your Bill:\n";
	cout << "Please enter your meal charge:\n";
	cin >> meal;
	cout << "Please enter your tip rate in decimal form:\n";
	cin >> tipRate;
	cout << "********************************************************\n\n";
	
	//calculations
	//tax cost
	double tax = meal * TAXRATE;
	//amount of tip
	double tipAmount = meal * tipRate;
	//total of bill
	double totalBill = meal + tax + tipAmount;
	
	//processing for two decimal places
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	//output
	cout << "********************************************************\n";
	cout << "\t\tYour Bill Summary:\n\n";
	cout << "Meal Total: \t\t$" << meal << "\n";
	cout << "Tax Amount (6.75%): \t$" << tax << "\n";
	cout << "Tip Amount: \t\t$" << tipAmount << "\n";
	cout << "Total Bill: \t\t$" << totalBill << "\n";
	cout << "Thank you for choosing Palombo's!\n";
	cout << "********************************************************\n\n";

	//offer exit option
	cout << "Press any key to exit...";

	_getch();
	return 0;
}