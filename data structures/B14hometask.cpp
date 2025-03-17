#include<iostream>
using namespace std;


int Prod(int num1, int num2, int num3, int prod) {
	
	for (int i = 1; i <= num1 - 2; i++) {
		num3 *= i; //24
	}
	num2 *= (num1 - 1);
	prod = num1 * num2 * num3;
	cout << "First number : " << num1 << " Second number: " << " " << num2 << " Third number " << " " << num3 << endl;
	return prod;
}


int main()
{
	int num1;
	int prod = 1;
	int num3 =1;
	int num2 =1 ;
	cin >> num1;
	cout << Prod(num1, num2, num3, prod );
	return 0;
}

//n! = (1 * 2 * 3 * 4 * ... >= n-2) * n-1 * n
//24*5*6 = 24 * 5 * 6
