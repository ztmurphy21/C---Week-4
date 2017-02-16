/*
CPT-180-24
Volume of a Cylindrical Fuel Tank
Programmer: Zachary Murphy
Purpose: Takes input from user to calculate volume of fuel tank
*/

#include<iostream>
#include<conio.h>
#include <math.h>
#include <iomanip>
#include <locale>

using namespace std;
//declaring PI as constant
const double PI = 3.14159;

int main() {
	//variable declarations
	double height, diameter, radius, volume;
	cout << "******************************************************************\n";
	cout << "\t\tFuel Cylinder Volume Calculator\n\n";

	//get input variables from the user
	cout << "Please enter the height of the cylinder: \t\t";
	cin >> height;
	cout << "Please enter the diameter of the cylinder: \t\t";
	cin >> diameter;

	//calculate radius from diamater
	radius = diameter / 2;

	//caluclate volume Volume = π r^ 2 h
	volume = PI * pow(radius, 2) * height;

	//used for two decimal places
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	//output the result for the user
	cout << "The volume of the fuel tank is: \t\t\t" << volume << "\n";
	cout << "******************************************************************\n\n";

	//let the user exit by pressing any key
	cout << "Press any key to exit.";
	_getch();

	return 0;

}