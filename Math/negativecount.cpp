#include<iostream>
using namespace std;
int main()
{
	int a;
	int sum = 0;
	int flag = 1;
	cout << "Enter a number " << endl;
	while (cin >> a && a != 'n') {
		if (a < 0) {
			flag = 1;
			sum++;
		}
		else if (a > 0) {
			break;
		}
	}
	cout << " Flag1 " << " Yep " << endl;
	cout << sum << endl;

}