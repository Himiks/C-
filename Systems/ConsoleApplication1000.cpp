
#include <iostream>
using namespace std;
int main()
{
	int a, b, selection;
	cout << " Enter two numbers " << endl;
	cin >> a >> b;
	cout << " choose the operatio between numbers " << endl <<
		" 1 - addition " << endl << " 2 - substraction " << endl <<
		" 3 - multiplication " << endl << " 4 - division " << endl;
	do {
		cin >> selection;
		switch (selection) {
		case 1:
			cout << a + b << endl;
			break;
		case 2:
			cout << a - b << endl;
			break;
		case 3:
			cout << a * b << endl;
			break;
		case 4:
			cout << a / b << endl;
			break;

		default:
			cout << " Error " << endl;
			break;

		}


	
	}
	while (cin >> a >> b);


}