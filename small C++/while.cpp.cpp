#include <iostream>
using namespace std;
int main()
{
	int rows;
	int colums;
	char symbol;
	cout << " How many rows would you like : " << endl;
	cin >> rows;
	cout << " How many colums? :" << endl;
	cin >> colums;
	cout << " Enter a symbol : " << endl;
	cin >> symbol;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= colums; j++) {
			cout << symbol ;
		}
		cout << '\n';
	}

	
   
}

