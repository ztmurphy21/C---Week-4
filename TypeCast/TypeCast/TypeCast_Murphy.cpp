/*
CPT-180-24
Type Casting Assignment
Programmer: Zachary Murphy
2-15-2017
Purpose: Takes three character inputs from user and converts to integer
*/
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	//declarations
	char letter1, letter2, letter3;

	cout << "********************************************************\n";
	cout << "\t\t ASCII Converter\n";

	//get input from user
	cout << "Please enter any three characters seperated by a space: \n";
	cin >> letter1 >> letter2 >> letter3;

	//output
	cout << "Character \t\t" << "Ascii Value\n";

	//converting to ascii by type casting
	cout << letter1 << " \t\t\t" << static_cast<int>(letter1) << "\n";
	cout << letter2 << " \t\t\t" << static_cast<int>(letter2) << "\n";
	cout << letter3 << " \t\t\t" << static_cast<int>(letter3) << "\n";
	cout << "********************************************************\n\n";

	//letting user exit by pressing any key
	cout << "Press any key to exit.";
	_getch();

	return 0;
}