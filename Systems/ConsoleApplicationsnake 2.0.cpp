#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int rangeBegin;
	int rangeEnd;
	cout << " Enter the begging of the range" << endl;
	cin >> rangeBegin;
	cout << " Enter the end of the range " << endl;
	cin >> rangeEnd;
	do {
		
		if (rangeBegin % 2 !=0) {
			sum += rangeBegin;
			
		}
		rangeBegin++;
	} while (rangeBegin < rangeEnd);
	cout << " The sum of odd number beetween range = " << sum << endl;
}