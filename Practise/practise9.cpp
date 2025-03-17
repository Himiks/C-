/*#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int lines = 0;
	int symbInLines = 0;
	char symbol = 0;

	cout << "Symbol: ";
	cin >> symbol;
	cout << "Lines: ";
	cin >> lines;
	cout << "amount of symbols: ";
	cin >> symbInLines;
	cout << endl;

	for (int i = 1; i <= lines; i++)
	{
		if (i == 1 || i == lines) // 1-я и последняя строка
		{
			for (int j = 1; j <= symbInLines; j++)
			{
				cout << symbol; // сплошная из символов
			}
		}
		else // все строки между первой и заключительной
		{
			cout << symbol; // показать один символ
			for (int j = 1; j <= symbInLines - 2; j++)
			{
				cout << ' '; // пробелы в строке (symbInLines - 2) раз
			}
			cout << symbol; // показать ещё один символ
		}
		cout << endl; // новая строка
	}
	cout << endl;
	return 0;
}*/





/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int lines;
	cout << "Enter the number of lines for the prime number triangle: ";
	cin >> lines;

	int num = 1;
	for (int i = 1; i <= lines; i++) {
		for (int j = 1; j <= i; j++) {
			bool isPrime = false;
			while (true) {
				if (num <= 1) {
					num++;
					continue;
				}
				isPrime = true;
				for (int k = 2; k <= sqrt(num); k++) {
					if (num % k == 0) {
						isPrime = false;
						break;
					}
				}
				if (isPrime) {
					break;
				}
				num++;
			}
			cout << num << " ";
			num++;
		}
		cout << endl;
	}

	return 0;
}*/




/*#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <=a; i++) {
		for (int j = 0; j <= a - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << '*';

		}
		cout << endl;
	
	}



}*/



/*#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = a; i >= 1; i--) {
		for (int j = 1; j <= a - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <=i; k++) {
			cout << '*';
		}
		cout << endl;

	}

}*/



/*#include <iostream>
using namespace std;

int main()
{
	int i, j, spc, n;
	cout << "\n\n Display the pattern like pyramid using digits:\n";
	cout << "---------------------------------------------------\n";
	cout << " Input the number of rows: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
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
	int n, i, j, ctr, r;
	cout << "\n\n Find frequency of each digit in a given integer:\n";
	cout << "-----------------------------------------------------\n";
	cout << " Input any number: ";
	cin >> n;
	for (i = 0; i < 10; i++)
	{
		cout << "The frequency of " << i << " = ";
		ctr = 0;
		for (j = n; j > 0; j = j / 10)
		{
			r = j % 10;
			if (r == i)
			{
				ctr++;
			}
		}
		cout << ctr << endl;
	}
}*/


/*#include <iostream>
using namespace std;
int main()
{
	int n, i, j, k, m = 0;
	cout << "\n\n Print patern........:\n";
	cout << "-----------------------------------\n";
	cout << " Input number or rows: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		if (i == 1) {
			for (j = 1; j <= i; j++) {
				cout << m << "  ";
			}
			for (k = 1; k <= n - i; k++) {
				cout << k << "  ";
			}
		}
		else {
			for (k = i - 1; k >= 1; k--) {
				cout << k << "  ";
			}
			cout << m << "  ";
			for (j = 1; j <= n - i; j++) {
				cout << j << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;
}*/





/*#include <iostream>
using namespace std;

int main()
{
	int i, n1, n2, j, hcf = 1, lcm;
	cout << "\n\n LCM of two numbers:\n";
	cout << "------------------------\n";
	cout << " Input 1st number for LCM: ";
	cin >> n1;
	cout << " Input 2nd number for LCM: ";
    cin >> n2;
	j = (n1 < n2) ? n1 : n2;
	for (i = 1; i <= j; i++) {

		if (n1 % i == 0 && n2 % i == 0) {
			hcf = i;
		}
	}
	/* mltiplication of HCF and LCM = the multiplication of these two numbers.
	lcm = (n1 * n2) / hcf;
	cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}*/



/*#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			int rowDiff = abs(a - i);
			int colDiff = abs(b - j);
			if ((rowDiff == 2 && colDiff == 1) || (rowDiff == 1 && colDiff == 2)) {
				cout << "1";

			}
			else {
				cout << "0";
			}
		}
		cout << endl;
	}




}*/



/*#include <iostream>
using namespace std;

int main() {
	char ch;
	bool capitalize = true;

	cout << "Enter a string symbol by symbol. Use '.' to end the input: " << endl;

	while (cin.get(ch)) {
		if (ch == '.') {
			break;
		}

		if (ch == ' ' || ch == '\t' || ch == '\n') {
			capitalize = true;
		}
		else if (capitalize) {
			if ('a' <= ch && ch <= 'z') {
				ch -= 'a' - 'A';
			}
			capitalize = false;
		}
		else {
			if ('A' <= ch && ch <= 'Z') {
				ch += 'a' - 'A';
			}
		}

		cout.put(ch);
	}

	cout << endl;

	return 0;
}*/


/*#include <iostream>
#include <cmath> // Для использования sqrt
using namespace std;

int main() {
	int n, t, k;	
	cin >> n;
	cout << n << " =";

	if (n <= 1) {
		cout << " " << n << endl;
		return 0;
	}

	t = sqrt(n);
	k = 2;

	while (k <= t) {
		if (n % k == 0) {
			n /= k;
			cout << " " << k;
			while (n % k == 0) {
				n /= k;
				cout << " " << k;
			}
			t = sqrt(n);
		}
		k++;
	}

	if (n > 1) {
		cout << " " << n << endl;
	}

	return 0;
}*/






/*#include <iostream>
#include <cmath> // Для использования sqrt
using namespace std;

int main() {
	int P;
	cin >> P;
	int close = (P / 5) * 5;
	for (int i = close - 10; i <= close+10; i += 5) {
		if (i >= 0) {
			cout << i << " ";
		}
	}


}*/

/*#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	int a;
	a = 5;
	int m[10];
	for (int i = 0; i < 10; i++) {
		cin >> m[i];
	}
	
	for (int j = 0; j < 10; j++) {
		if (m[j] < 0) {
			cout << m[j] << " ";
		}
	}
	for (int j = 0; j < 10; j++) {
		if (m[j] > 0) {
			cout << m[j] << " ";
		}
	}
	for (int j = 0; j < 10; j++) {
		if (m[j] == 0) {
			cout << m[j] << " ";
		}
	}


}*/// Enter 10 number print the same entered numbers . first negative, second positive , entered 0



// enter a number, print how count many times each digits appears

/*#include <iostream>
using namespace std;
int main()
{
	int n, i, j, ctr, r;
	cout << "\n\n Find frequency of each digit in a given integer:\n";
	cout << "-----------------------------------------------------\n";
	cout << " Input any number: ";
	cin >> n;
	for (i = 0; i < 10; i++)
	{
		cout << "The frequency of " << i << " = ";
		ctr = 0;
		for (j = n; j > 0; j = j / 10)
		{
			r = j % 10;
			if (r == i)
			{
				ctr++;
			}
		}
		cout << ctr << endl;
	}
}*/


/*#include <iostream>
using namespace std;
int main()
{

	int m[10], n;
	for (int i = 0; i < 10; i++) {
		m[i] = 0;
	}
	cin >> n;
	while (n != 0) {
		m[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << i << '-' << m[i] << endl;
	}
	


}*/


/*#include <iostream>
using namespace std;
int main()
{
	int a;
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (i + j == 5)
				cout << '(' << " " << i << ',' << j << " " << ')' << endl;
		}
	}

	
}*/



