/*Create program both in C++, and Python by making use of described or other functions.
Requirements are the same as for the previous task, see published detailed requirements.
B14.Given natural number n.Find 3 numbers x, y, z where n!= x * y * z if it is possible.
Create and use function to calculate factorial of number.
*/

#include<iostream>
using namespace std;
int Factorial(int n) {  // created function that calculates factorial of number 
	unsigned long int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;

}
int main() {
    int n;
	char option = 'y';
	while (option == 'y' || option == 'Y') { // if user want to repeat the program and type y it will be repeating until user enter n
		int y = 1;
		int z = 1;
		unsigned long int x = 1;
		cout << "Enter a number " << endl;
		cin >> n;
		if (n <= 2) { // if user input less than or eqaul than 2 than the error will apper and program will ask for repeated input
			while (n <= 2) {
				cout << "Incorrect value, number cant be less then 3. Please tre again:" << endl;
				cin >> n;
			}
		}
		unsigned long int fact = Factorial(n);
		cout << "The factorial of " << n << "!" << " = " << fact << endl;
		x = Factorial(n - 2); // the first number
		y = n - 1; // the second number
		z = n; // the third number
		cout << n << '!' << " = " << x << " * " << y << " * " << z << endl; //  calculation of the three numbers that n!
		cout << "Would you like to continue (y/n)? " << endl;
		cin >> option;
	}
}





