#include <iostream>
using namespace std;
int main()
{
	char selection = 'm';
	while (selection != 'x') {
		cout << "Enter two numbers :" << endl;
		int num1, num2 = 0;
		cin >> num1 >> num2;
		cout << num1 * num2 << endl;
		cout << num1 + num2 << endl;
		cout << "x for exit " << endl;
		cin >> selection;
		
	}
	cout << "Bye!!! " << endl;
	return 0;

}

#include <iostream>
using namespace std;
int main()
{
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = { 0 };
	cout << "Filling " << ARRAY_LENGTH << " with numbers " << endl;
	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "Element " << counter << " : ";
		cin >> myNums[counter];
		}
	cout << " Massive = " << endl;
	for (int counter = 0; counter < ARRAY_LENGTH; ++counter) 
		cout << "Element " << counter << " = " << myNums[counter] << endl;
		return 0;
	
}

#include <iostream>
using namespace std;
int main()
{
	int someNums[] = { 1, 101, -1, 40, 2040 };
	cout << "Massive = " << endl;
	for (int aNum : someNums) // Цикл for для диапазона
		cout << aNum << endl;
}

include <iostream>
using namespace std;
int main()
{
	const int NUM_ROWS = 3;
	const int NUM_COLS = 4;
	int myNums[NUM_ROWS][NUM_COLS] = { { 34, -1, 879, 22},
									   { 24, 365, -101, -1},
									   {-20, 40, 90, 97} };
	for (int row = 0; row < NUM_ROWS; ++row) {
		for (int column = 0; column < NUM_COLS; ++column) {
			cout << myNums[row][column] << endl;
		}
	}
}


// Fibonacci

#include <iostream>
using namespace std;
int main()
{
	const int numsToCalculate = 5;
	cout << "Calculate by 5 numbers " << endl;
	int num1 = 0, num2 = 1;
	char wantMore = '\0';
	cout << num1 << " " << num2 << " ";
	do
	{
		for (int counter = 0; counter < numsToCalculate; ++counter) {

			cout << num1 + num2 << " ";
			int num2Temp = num2;
			num2 = num1 + num2;
			num1 = num2Temp;

		}
		cout << endl << "Continue (y/n) ";
		cin >> wantMore;
	} while (wantMore == 'y');
	cout << "Bye " << endl;
	return 0;
	
}