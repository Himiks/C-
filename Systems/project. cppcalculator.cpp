#include <iostream>
using namespace std;
int main()
{
	char op;
	double num1;
	double num2;
	double result;
	cout << " ********** CALCULATOR *************** " << endl;

	cout << " Enter ether ( +, - , / , * ) " << endl;
	cin >> op;
	cout << " Enter two numbers to be colculated " << endl;
	cin >> num1 >> num2;
	switch (op) {
	case  '+' :
		cout << num1 + num2 << endl;
		break;
	case   '-' :
		cout << num1 - num2 << endl;
		break;
	case '/':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	}
	
 
}

