/*#include<iostream>
#include<string>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	string result = "";

	if (A.size() == B.size()) {
		for (int i = 0; i < A.size(); i++) {
			int num1 = A[i] - '0';
			int num2 = B[i] - '0';
			int diff = abs(num1 - num2);
			result += to_string(diff);
		}
		int final_result = stoi(result);
		cout << final_result << endl;
	}






}*/