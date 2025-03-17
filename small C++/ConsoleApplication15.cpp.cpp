#include<iostream>
using namespace std;
int main()
{
	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;
	cout << " Enter capacity symbols in line" << endl;
	cin >> symbolCount;

	cout << " Enter a symbol" << endl;
	cin >> symbol;


	cout << " choose the type of line " << endl << "1 - vertical line " << endl << " 2 - horizontal line " << endl;
	cin >> lineType;
	if (lineType != 1 && lineType != 2)
	{
		cout << " incorrect line " << endl;
		return 0;
	}


	while (index < symbolCount)
	{
		if(lineType == 1)
		{
			cout << symbol << endl;
		}
		if (lineType == 2)
		{
			cout << symbol;
		}
		
		++index; 
	}
	cout << endl << endl;
	return 0;
}