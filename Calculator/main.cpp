#include<iostream>
#include<iomanip>
#include "calculator.h"
#include "scientific.h"
using namespace std;


int main() {


	Calculator calk;
	Scientific sci;
	

	Calculator* calcPtr = &calk;

	bool sciActive = false;
	
	cout << "Welcome to my Calculator App\n\n"
		<< "This calculator has 2 modes, normal and scientific.\n\n"
		<< "You can change it using the 'change' keyword\n\n"
		<< "This app has 2 other special keywords, result and mem.\n"
		<< "result stores the result of the previouscalculations.\n"
		<< "mem allows you to store and access a number.\n"
		<< "Both can be used instead of numbers during calculations.\n"
		<< "They are both local to the mode you are using.\n";


	calcPtr->welcome();

	cout << setprecision(15);
	
	string input = "";
	while (cin >> input && input != "exit") {

		if (input == "change") {


			if (sciActive) {
				calcPtr = &calk;
				sciActive = false;
				cout << "\nSimple Calculator Activated ";

			}
			else {
				calcPtr = &sci;
				sciActive = true;
				cout << "\nScientific Calculator Activated ";

			}

		}

		calcPtr->parseOperation(input);
		calcPtr->welcome();

	}

	return 0;
}

