#include <iostream>
using namespace std;

int main() {
	double temp;
	char unit;
	cout << " *********** Temperature conversion ***********" << endl;
	cout << "F = Fahrenheit \n";
	cout << "C = Celsius  " << endl;
	cout << "what unit would you like to convert? : ";
	cin >> unit;
	if (unit == 'F' || unit == 'f') {
		cout << " Enter the temperature in Celsius ";
		cin >> temp;
		temp = (1.8 * temp) + 32.0;
		cout << " temperature is " << temp << "F\n";
	}
	else if (unit == 'C' || unit == 'c') {

		cout << "Enter the temperature in Fahrenheit " << "F\n";
		cin >> temp;
		temp = (temp - 32) / 1.8;
		cout << "temperature is " << temp << "C\n";
	}
	else {
		cout << " Enter a number ";
	}

}
