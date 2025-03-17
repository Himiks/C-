#include<iostream>
using namespace std;


int Prod(int n) {
	int num1 = 1;
	int num2 = 1;
	int prod = 1;
	for (int i = 1; i <= n - 2; i++) {
		num1 *= i; //24
	}
	num2 *= (n - 1);
	prod = n * num1 * num2;
	cout << "First number : " << " " << n << " Second number: " << " " << num2 << " Third number " << " " << num1 << endl;
    return prod;
}


int main()
{
	int n;
	cin >> n;
	cout << Prod(n);
    return 0;
}

//n! = (1 * 2 * 3 * 4 * ... >= n-2) * n-1 * n
//24*5*6 = 24 * 5 * 6
