/*
Hayden Hurst 9/25/17 Period 4
Take in Data
*/
//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Variables
	int Age; //What is your age?
	char Name; //What is the first letter of your last name?
	bool Date; //Today is Friday right?
	double Change; //How much change in 3 quarters?

				   // User Quaries
	cout << "What is your age (in years) (numbers only) : ";
	cin >> Age;
	cout << "What is the first letter of your last name : ";
	cin >> Name;
	cout << "Today is Friday right (T/F only) : ";
	cin >> Date;
	cout << "How much change is in 3 quarters : ";
	cin >> Change;

	// Pause
	pause();
}
