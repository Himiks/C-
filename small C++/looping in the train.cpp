/*#include <iostream>
using namespace std;
int main()
{
	int num1, num2, gcd;
	cout << "Enter the first number " << endl;
	cin >> num1;
	cout << "Enter the second numvber " << endl;
	cin >> num2;
	for (int i = 1; i <= num2 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
		}
	}
	cout << "The Greatest Divisor is: " << gcd << endl;
	return 0;
}*/


/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double sum = 0, a;
	int n;
	cout << "Input the value for nth term:" << endl;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		a = 1 / pow(i, i);
		cout << "1/" << i << "^" << i << " = " << a << endl;
		sum += a;
	}

	cout << "The sum of the above series is: " << sum << endl;

}*/


/*#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int num1;
	int sum = 0;
	cout << "Enter a number " << endl;
	cin >> num1;
	for (int i = 1; i <= num1; i++) {
		cout << i << '*' << i << "=" << i * i << endl;
		sum += i*i;
		
	}
	cout << "The sum above all numbers: " << sum << endl;
	return 0;

}*/

/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num1;
	int sum = 0, tsum;
	cout << "Enter the number " << endl;
	cin >> num1;
	for (int i = 1; i <= num1; i++) {
		tsum = 0;
		for (int j = 1; j <= i; j++) {
			sum += j;  
			tsum += j; 
			cout << j; 
			if (j < i) { 
				cout << "+"; 
			}
		
		}
		cout << " = " << tsum << endl;
	}
	cout << "The sum of the above series is : " << sum << endl;
}*/



/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, sum, term, fct, y, j, m;
	int i, n;
	y = 2;
	cout << " Input the value of X: ";
	cin >> x;
	cout << "Input the value for nth term: ";
	cin >> n;
	sum = 1;
	term = 1;
	cout << " term 1 value is : " << term << endl;
	for (i = 1; i < n; i++) {
		fct = 1;
		for (j = 1; j <= y; j++) {
			fct = fct * j;
		}
		term = term * (-1);
		m = pow(x, y) / fct;
		m = m * term;
		cout << " Term " << i + 1 << " value is " << m << endl; 
		sum = sum + m;
		y += 2;
	}

	cout << "The sum of the above series is: " << sum<< endl;

}*/

/*#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

int main()
{
	int posnum, ctr = 0, sum = 0, max = 0;
	int min = INT_MAX;
	int terval = -1;
	cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
	cout << "----------------------------------------------------------------------------\n";
	cout << " Input positive integer or " << terval << " to terminate: ";
	while (cin >> posnum && posnum != terval)
	{
		if (posnum > 0)
		{
			++ctr;
			sum += posnum;
			if (max < posnum)
				max = posnum;
			if (min > posnum)
				min = posnum;
		}
		else
		{
			cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
		}
		cout << " Input positive integer or " << terval << " to terminate: ";
	}
	cout << "\n Your input is for termination. Here is the result below: " << endl;
	cout << " Number of positive integers is: " << ctr << endl;
	if (ctr > 0)
	{
		cout << " The maximum value is: " << max << endl;
		cout << " The minimum value is: " << min << endl;
		cout << fixed << setprecision(2);
		cout << " The average is " << (double)sum / ctr << endl;
	}
}*/


/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int ult;
	cout << "\n\n List non-prime numbers from 1 to an upperbound:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input the upperlimit: ";
	cin >> ult;
	cout << " The non-prime numbers are: " << endl;
	for (int num = 2; num <= ult; ++num)
	{
		int mfactor = (int)sqrt(num);
		for (int fact = 2; fact <= mfactor; ++fact)
		{
			if (num % fact == 0)
			{
				cout << num << " ";
				break;
			}
		}
	}
	cout << endl;
	return 0;
}*/


/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= a; j++) {
			cout << '#';
		}
		cout << endl;
	}
	return 0;

}*/


/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cout << i * i * i << endl;
	}

}*/


/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j < a; j++) {
			cout << i << '*' << j << '=' << i * j << endl;
		}
		cout << endl;
	}


}*/



/*#include <iostream>
using namespace std;
int main()
{
	int num, r, sum = 0, t, num1, num2;
	
	cout << "Input a number " ;
	cin >> num;
	for (t = num; num != 0; num = num / 10) {
		sum = sum * 10 + r;

	}
	cout << "The number in reverse order is : " << sum << endl;
}*/


/*#include <iostream>
using namespace std;

int main() {
	int num, num1, num2;

	cout << "Input a number: ";
	cin >> num;

	// Разделяем число на две части
	int numLength = 0;
	int tempNum = num;
	while (tempNum > 0) {
		numLength++;
		tempNum /= 10;
	}

	int divider = 1;
	for (int i = 1; i < numLength; i++) {
		divider *= 10;
	}

	num1 = num / divider;
	num2 = num % divider;

	// Выводим оба числа
	cout << "First number: " << num1 << endl;
	cout << "Second number: " << num2 << endl;

	// Выводим обратный порядок чисел
	int reversedNum1 = 0;
	int reversedNum2 = 0;
	while (num1 > 0) {
		int digit = num1 % 10;
		reversedNum1 = reversedNum1 * 10 + digit;
		num1 /= 10;
	}
	while (num2 > 0) {
		int digit = num2 % 10;
		reversedNum2 = reversedNum2 * 10 + digit;
		num2 /= 10;
	}

	cout << "Reversed first number: " << reversedNum1 << endl;
	cout << "Reversed second number: " << reversedNum2 << endl;

	return 0;
}*/




/*#include <iostream>
#include<string>
using namespace std;

int main() {
	char str1[50];
	int i, l = 0;
	cout << "Input a string " << endl;
	cin >> str1;
	for (i = 0; str1[i] != '\0'; i++) {
		l++;
	}
	cout << "Total letters " << l << endl;

}*/


/*#include <iostream>
#include<string>
using namespace std;

int main() {
	int a, k = 1;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {

			cout << k++ << " ";
			
		}
		cout << endl;
	}

}*/



/*#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, j, spc, rows, k, t = 1;
	cout << "Input numbers of rows: ";
	cin >> rows;
	spc = rows + 3;
	for (i = 1; i <= rows; i++) {
		for (k = spc; k >= 1; k--) {
			cout << " ";
		}
		for (j = 1; j <= i; j++) 
			cout << i << " ";
		cout << endl;
			spc--;
		
	}





}*/



/*#include <iostream>
using namespace std;

int main()
{
	int i, j, n, p, q;
	cout << "Input number of rows :" << endl;
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			p = 1; q = 0;
		}
		else {
			p = 0; q = 1;
		}
		for (j = 1; j <= i; j++)\
			if (j % 2 == 0)
				cout << p;
			else
				cout << q;
		cout << endl;
	}

}*/

/*#include <iostream>
using namespace std;

int main()
{
	int i, j, r;
	cout << "Input number of rows :" << endl;
	cin >> r;
	for (i = 0; i <= r; i++) {
		for (j = 1; j <= r - i; j++)
			cout << " ";
		for (j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}
	for (i = r - 1; i >= 1; i--) {
		for (j = 1; j <= r - i; j++)
			cout << " ";
		for (j = 1; j <= 2 * i - 1; j++)
			cout << '*';
		cout << endl;
	}

}*/


/* #include <iostream>
using namespace std;

int main()
{
	int row, c = 1, blk, i, j;
	cout << "Input number of rows " << endl;
	cin >> row;
	for (i = 0; i < row; i++) {
		for (blk = 1; blk <= row - i; blk++)
			cout << " ";
		for (j = 0; j <= i; j++) {
			if (j == 0 || i == 0)
				c = 1;
			else 
				c = c * (i - j + 1) / j;
			cout <<c<< " ";
		}
		cout << endl;
	}
}*/


/*#include <iostream>
using namespace std;

int main()
 {
	int i, j, row, blk, c;
	cin >> row;
	for (i = 0; i < row; i++) {
		for (blk =0; blk <= row - i; blk++)
			cout << " ";
		for (j = 0; j <= i; j++) {
			if (j == 0 || i == 0)
				c = 1;
			else c = c * (i - j + 1) / j;
			
			cout <<c<< " ";
		}
		cout << endl;
	}
	
	

	
}*/

/*#include <iostream>
using namespace std;

int main()
{
	int i, j, row;
	cout << "Input a number: " << endl;
	cin >> row;
	for (i = 0; i <= row; i++) {
		for (j = 1; j <= row - i; j++)
			cout << " ";
		for (j = 1; j <= i; ++j)
			cout << j;
		for (j = i-1; j >= 1; j--)
			cout << j;
		cout << endl;
	}

}*/


/*#include <iostream>
using namespace std;

int main()
{
	int i, j, row;
	cout << "Input a number of row :" << endl;
	cin >> row;
	for (i = 0; i <= row; i++) {
		for (j = 1; j <= row - i; j++)
			cout << " ";
			for (j = 1; j <= i; j++)
				cout << j;
		for (j = i-1; j >= 1; j--)
			cout << j;
		cout << endl;
	}
	


}*/


/*#include <iostream>
using namespace std;

int main()
{
	int i, j;
	char alph = 'A';
	int n, blk;
	int ctr = 1;
	cout << "Input the number of letters " << endl;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (blk = 1; blk <= n - i; blk++)
			cout << "  ";
		for (j = 0; j <= (ctr / 2); j++) {
			cout << alph++ << " ";

		}
		alph = alph - 2;
		for (j = 0; j < (ctr / 2); j++) {
			cout << alph-- << " ";
		}
		ctr = ctr + 2;
		alph = 'A';
		cout << endl;
	}

}*/



/*#include <iostream>
using namespace std;

int main()
{
	int i, j, spc, n;
	cout << "Input a number of rows " << endl;
	cin >> n;
	for (i = 1; i <= n; i++) {
		spc = n - i;
		while (spc-- > 0)
			cout << " ";
		for (j = i; j < 2 * i - 1; j++)
			cout << j;
		for (j = 2 * i - 1; j > i - 1; j--)
			cout << j;
		cout << endl;
	}


}*/


/*#include <iostream>
using namespace std;

int main()
{
	int num, i, j;
	cin >> num;
	for (i = 1; i <= num; ) {
		cout << i;
		for (j = i + 1; j <= num;) {
			cout << j;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;

	}
}*/


/*#include <iostream>
using namespace std;

int main()
{
	int num, i, j;
	cin >> num;
	for (i = 1; i <= num;) {
		cout << i;

		for (j = i + 1; j <= num;) {
			cout << j;
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}
}*/

/*#include<iostream>
using namespace std;
int main() {
	const int size = 10;
	int arr[size]={55,45,78,98,32,45,23,21,39,77};
	for (int i = 0; i < size; i++) {
		arr[i] = i;
		cout << arr[i] << endl;
	}
}*/



/*#include <iostream>
#include<string>
using namespace std;
int main()
{
	string combinedString;
	string line;
	while (getline(cin, line)) {
		if (line.empty()) {
			break;
		}
		combinedString += line + " ";
	}
	cout << combinedString;

}*/


/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - i - 1; k++)
			cout << " ";
		for (int j = 0; j <= i; ++j)
			cout << '*';
		cout << endl;

	}

}*/


/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input_string = " Hello people on the Earth ";
	string output_string;
	for (char ch : input_string) {
		output_string += 'X';
	}
	cout << output_string << endl;
	return 0;
}*/


/*#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int rangeBegin;
	int rangeEnd;
	int count = 0;
	cout << " Enter the begging of the range" << endl;
	cin >> rangeBegin;
	cout << " Enter the end of the range " << endl;
	cin >> rangeEnd;
	do {

		if (rangeBegin % 2 != 0) {
			sum += rangeBegin;
			count++;

		}
		rangeBegin++;
	} while (rangeBegin < rangeEnd);
	cout << " The sum of odd number beetween range = " << sum <<" " <<count<< endl;
}*/


/*#include <iostream>
using namespace std;
int main()
{
	int en, pn = 1, flag = 0;
	for (int i = 0; i < 10; i++) {
		cin >> en;
		if (en == 0 && pn == 0) flag = 1;
		pn = en;
	}
	if (flag) cout << " Yes ";
	else cout << " NO ";


}*/


/*#include <iostream>
using namespace std;
double square(double length) {
	double result = length * length;
	return length * length; 
}
double cube(double length) {
	double result = length * length * length;
	return length * length * length;
}
int main() {
	double length = 5.0;
	double area = square(length);
	double volume = cube(length);
	cout << "Area " << area << "cm^2\n";
	cout << "volume " << volume << "cm^3\n";
	return 0;
}*/


/*#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int num = (rand() % 6) + 1;
	cout << num;

}*/


/*#include<iostream>
#include<string>
using namespace std;
int main() {
	string s("Hello World!!!! ");
	//s.size();
	//decltype(s.size())
	int punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " " << s;

}*/



/*#include <iostream>
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
			cout << symbol;
		}
		cout << '\n';
	}



}*/


/*#include <iostream>
#include<string>
using namespace std;

int main()
{
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15" << endl;
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	cout << "Your hex number is: " << result << endl;
}*/



/*#include <iostream>
using namespace std;
int main()
{
	int en, pn = 1, flag = 0;
	for (int i = 0; i < 10; i++) {
		cin >> en;
		if (en == 0 && pn == 0) flag = 1;
		pn = en;
	}
	if (flag) cout << " Yes ";
	else cout << " NO ";


}*/




/*#include<iostream>
using namespace std;
int main()
{
	int n; // input a number and check how many prime numbers beside it
	cout << "Enter a number " << endl;
	cin >> n;
	for (int j = 2; j <= n; j++) {
		int flag = 1;
		for (int i = 2; i < j; i++)
			if (j % i == 0) flag = 0;
		if (flag) //flag != 0
			cout << j << endl;
	}

}*/
/*#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int const SIZE = 10;
	int arr[SIZE];
	srand(time(NULL));
	bool alreadyThere;
	for (int i = 0; i <= SIZE;) {
		alreadyThere = false;
		int newRandomValue = rand() % 10 + 1;
		for (int j = 0; j <= i; j++) {
			if (arr[j] == newRandomValue) {
				alreadyThere = true;
			}
		}
		if (alreadyThere==false ) {
			arr[i] = newRandomValue;
			i++;
		}
	}
	for (int i = 0; i <= SIZE; i++) {
		cout << arr[i] << endl;
	}

}*/


/*#include <iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if ('a' >= c && c <= 'z') // askee code  Проверяется, является ли символ, введенный пользователем, маленькой буквой английского алфавита (от a до z).
		cout << int(c) - int('a') + 1;
	cout << char(int(c) - int('a') + int('A'));
	// if ('0' <= c && c <= '9')
	 //    int(c) - int('0');


}*/

/*#include <iostream>
using namespace std;

int main() {
	int userInput;
	bool flag = true;

	cout << "Enter a number: ";
	cin >> userInput;

	cout << "Prime numbers before " << userInput << " are:" << endl;

	for (int i = 2; i < userInput; i++) {
		flag = true; // Сбрасываем флаг перед проверкой каждого числа
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				flag = false; // Если находим делитель, сбрасываем флаг
				break;
			}
		}
		if (flag) {
			cout << i << " ";
		}
	}

	cout << endl;

	return 0;
}*/


/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	char c;
	cout << "Enter a symbol " << endl;
	do {
		cin >> c;
		if ('a' <= c && c <= 'z')
			cout << char(int(c) - int('a') + int('A'));
		else cout << c << endl;
	} while (c != '.');
}*/


/*#include<iostream>
#include<string>
using namespace std;
int main()
{
     char c; int f1 = 0;
	cin >> c;
	while (c != '.') {
		if (!f1 && c == 'a')
			f1 = 1;
		else if (f1 && c == 'a') {
			cout << 'A'; f1 = 0;
		}
		else if (f1) {
			cout << 'a';
			f1 = 0;
			cout << c;
		}
		else cout << c;
		cin >> c;
	}
	if (f1)
		cout << 'a';

}*/




/*#include <iostream>
using namespace std;
int main()
{
	int i = 1, u = 1, sum = 0;
	while (i <= 10) {
		while (u <= 10) {
			if (u < i) {
				if (i % u == 0)
					sum = sum + u;
			}
				u++;

		}
			if (sum == i) {
				cout << i << " " << "\n";
			}
			i++;
			u = 1;
			sum = 0;


	}

}*/


/*#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			if (abs(a - i) <= 3 && abs(b - j) <= 3)
				cout << '1';
			else cout << '0';
		cout << endl;
	}
}*/

/*#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			int rowDiff = abs(a - i);
			int colDiff = abs(b - j);
			if ((rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2)) {
				cout << '1';
			}
			else {
				cout << '0';
			}
		}
		cout << endl;
	}

	return 0;
}*/




/*#include<iostream>
using namespace std;

int main() {
	int a;
	int neg=0, pos=0, zero=0;
	 int f0=0;
	cout << "Enter a number " << endl;
	while (f0<2) {
		cin >> a;
		if (a == 0) {
			f0++;
			zero++;
		}
		else {
			f0 = 0;
			if (a > 0) {
				pos++;
			}
			else if (a < 0) {
				neg++;
			}
			
		}
		
		
	}
	cout << " Positive" << " " << pos << " negative " << " " << neg << " zero " << " " << zero << endl;
}*/



#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Prompt the user to enter an amount
	double amount;
	cout << "Enter an amount in EUR (with 2 decimal places): ";
	cin >> amount;

	// Calculate the number of each nominal required
	int count;

	// 500 EUR
	count = amount / 500;
	cout << count << " - 500" << endl;
	amount -= count * 500;

	// 100 EUR
	count = amount / 100;
	cout << count << " - 100" << endl;
	amount -= count * 100;

	// 50 EUR
	count = amount / 50;
	cout << count << " - 50" << endl;
	amount -= count * 50;

	// 20 EUR
	count = amount / 20;
	cout << count << " - 20" << endl;
	amount -= count * 20;

	// 10 EUR
	count = amount / 10;
	cout << count << " - 10" << endl;
	amount -= count * 10;

	// 5 EUR
	count = amount / 5;
	cout << count << " - 5" << endl;
	amount -= count * 5;

	// 2 EUR
	count = amount / 2;
	cout << count << " - 2" << endl;
	amount -= count * 2;

	// 1 EUR
	count = amount / 1;
	cout << count << " - 1" << endl;
	amount -= count * 1;

	// 0.5 EUR
	count = amount / 0.5;
	cout << count << " - 0.5" << endl;
	amount -= count * 0.5;

	// 0.1 EUR
	count = amount / 0.1;
	cout << count << " - 0.1" << endl;
	amount -= count * 0.1;

	// 0.05 EUR
	count = amount / 0.05;
	cout << count << " - 0.05" << endl;
	amount -= count * 0.05;

	// 0.02 EUR
	count = amount / 0.02;
	cout << count << " - 0.02" << endl;
	amount -= count * 0.02;

	// 0.01 EUR
	count = amount / 0.01;
	cout << count << " - 0.01" << endl;

	return 0;
}



/*#include <iostream>

int main() {
	int n;

	// Input a natural number n
	std::cout << "Enter a natural number n: ";
	std::cin >> n;

	// Loop through all possible values of a, b, and c
	for (int a = 1; a < n; ++a) {
		for (int b = a; b < n; ++b) {
			for (int c = b; c < n; ++c) {
				// Check if a, b, and c form a Pythagorean triplet
				if (a * a + b * b == c * c) {
					std::cout << "Pythagorean triplet: (" << a << ", " << b << ", " << c << ")" << std::endl;
				}
			}
		}
	}

	return 0;
}*/




/*#include <iostream>
using namespace std;
int main() {
	int num1, num2, i=1;
	int sum1=0, sum2=0;
	while (i < 10) {
		cin >> num1 >> num2;
		if (num1 < 21 && num2>21) {
			sum1++;
			cout << "The winner of "<<i<<" set is 1 player " << "The result " << sum1<< ":" << sum2 << endl;
		}
		if (num1 > 21 && num2 > 21) {
			if (num1 < num2)
				sum1++;
			cout << "The winner of" << i << "set is 1 player " << "The result " << sum1 << ":" << sum2 << endl;
			if (num1 > num2)
				sum2++;
			cout << "The winner of" << i << "set is 2 player " << "The result " << sum1 << ":" << sum2 << endl;
		}
		if (num1 < 21 && num2 < 21) {
			if (num1 > num2)
				sum1++;
			cout << "The winner of" << i<< "set is 1 player " << "The result " << sum1 << ":" << sum2 << endl;
			if (num1 < num2)
				sum2++;
			cout << "The winner of" << i <<"set is 2 player " << "The result " << sum1 << ":" << sum2 << endl;
		}
		i++;
	}

}*/

/* #include <iostream>
#include<string>
using namespace std;

int main() {
	int num;
	int prev = -1;
	bool isAscending = true;
	bool first = true;
	string sequence = "";

	cout << "Enter a sequence of integers (end with 0):" << endl;

	while (true) {
		cin >> num;

		if (num == 0) {
			if (!first) {
				break;
			}
		}
		else {
			if (!first) {
				sequence += " "; // Добавляем пробел перед числами, если не первое число
			}
			else {
				first = false;
			}

			sequence += to_string(num); // Добавляем число к последовательности
		}

		if (num <= prev) {
			isAscending = false;
		}

		prev = num;
	}

	if (isAscending) {
		cout << "Yes" << endl;
		cout << "Sequence without 0: " << sequence << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
	}/*
	*/



/*#include <iostream>
#include<string>
using namespace std;

int main() {
	int lines = 0;
	int symbInLines = 0;
	char symbol = 0;

	cout << "Введите символ: ";
	cin >> symbol;
	cout << "Количество строк: ";
	cin >> lines;
	cout << "Количество символов в строке: ";
	cin >> symbInLines;
	cout << endl;
	for (int i = 1; i <= lines; i++) {
		if (i == 1 || i == lines) {
			for (int j = 1; j <= symbInLines; j++) {
				cout << symbol;
			}
		}

		else {
			cout << symbol;
			for (int j = 1; j <= symbInLines - 2; j++) {
				cout << " ";
			}
			cout << symbol;
		}
		cout << endl;
	}
	cout << endl;
	return 0;


} */ //33333


// Enter from kyb 3 integer. Print on screen sum [a*b]+[a*c]+[b*c]


/*#include <iostream>
using namespace std;
int  sgn(int x) {
	if (x > 0) return 1;
	if (x < 0) return -1;
	return 0;

}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << sgn(a * b) + sgn(a * c) + sgn(b * c) + sgn(a * b * c);

}*/



/*#include <iostream>
using namespace std;

int sq(double a, double b, double c, double& x1, double&x2) {


}*/


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
