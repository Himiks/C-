/* Given 3 natural numbers m, n and k.Print those numbers between m and n what can be divided with k with no reminder.
//Create program both in C++, and Python. Input from keyboard all given values and print on screen all output.
Program should output error message for incorrect input data.
Program should allow repeated execution without quitting the program.*/
#include <iostream>
using namespace std;

int main()
{
	int m, n, k;
	char option = 'y'; // variable for repeated execution
	while (option == 'y' || option == 'Y') { // while user enter y or Y the program will continue its execution
		cout << "Enter tree numbers m < n and k : " << endl;
		cout << "Enter the first number : ";
		cin >> m;
		cout << "Enter the second number : ";
		cin >> n;
		cout << "Enter the first third : ";
		cin >> k;
		while (m >= n || m == 0 || k == 0 || n <= k || !(m > 0)) { // while user entering incorrect values, the while loop will repeat asking to enter a valid values untill user will enter a corrrect numbers and this loop will ended
			cout << "Incorrect values! Please try again : " << endl;
			if (m >= n)
				cout << "m can't be greater or equals n! " << endl; // if m >= n the program will finish execution because of incorrect input
			if (n <= k) // if n <= k will finish execution because n can't be smaller than k
				cout << "k must be less than n! " << endl;

			if (m == 0 || k == 0)  // if m or k = 0 the program will finish execution because 0 is not natural number
				cout << "m or k can't be 0 " << endl;
			if (!(m > 0))  // if m < 0 then the program will finish execution because numbers before 0 dont natural
				cout << "m must be greater than 0 " << endl;
				cout << "Enter the first number m : ";
				cin >> m;
				cout << "Enter the second number n : ";
				cin >> n;
				cout << " Enter the third number k : ";
				cin >> k;
		}

		for (int i = m; i <= n; i++) { // the for loop check if i less than n and while it less then n the program executed by checking the reminder and if reminder = 0 the i will be displayed
			if (i % k == 0)
				cout << "The number which can be divided with k is " << i << endl;

		}
		cout << "Would you like to continue (y/n) : "; // the program ask if user want to continue the program and bsed on the responce the program will executed
		cin >> option;
		if (option == 'n' || option == 'N') // if answer n or N the program stops execution
			break;
	}

}


