#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	
	int rangeBegin, rangeEnd;

	cout << "Enter the beggining of range"<< endl;

	cin >> rangeBegin;

	cout << "Enter the end of range"<< endl;

	cin >> rangeEnd;
	do
	{
		if(rangeBegin%2 !=0)
		{
			sum += rangeBegin;
		 }
		++rangeBegin;
	} while (rangeBegin < rangeEnd);
	cout << "The sum of all integer uneven numbers" << sum << endl;
}

