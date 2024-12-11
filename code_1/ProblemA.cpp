/*#include<iostream>
#include<stack>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int tempa = a;
	int tempb = b;
	int sizea = 0,  sizeb = 0;

	stack<int> results;

	int num1 = 0, num2 = 0;
	int result = 0;

	while (tempa != 0) {
		tempa /= 10;
		sizea++;
		
	}
	while (tempb != 0) {
		tempb /= 10;
		sizeb++;

	}
	if (sizea == sizeb) {
		while (sizea != 0) {
			num1 = a % 10;
			a /= 10;
			num2 = b % 10;
			b /= 10;
			result = abs(num1 - num2);
			results.push(result);
			sizea--;
		}

		result = 0;
		if (!results.empty() && results.top() == 0) {
			results.pop();
		}
		while (!results.empty()) {
			result *= 10;
			result += results.top();
			results.pop();

		}

		cout << result << endl;

	}




	

	
}*/