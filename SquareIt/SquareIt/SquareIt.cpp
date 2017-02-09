/*
Programmer: Zachary Murphy
CPT-180-27
Purpose: Calculates the square of any number.
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numberToSquare, square;
	cout << "************************************************************************\n";
	cout << "\t\t\t Square It Calculator \n\n";
	cout << "Please enter any number to be squared: \n";
	cin >>numberToSquare;
	square = numberToSquare * numberToSquare;
	cout << "The square of " << numberToSquare << " is " << square << " .\n\n";
	cout << "************************************************************************\n";
	cout << "Press any key to exit.";

	_getch();

	return 0;


}