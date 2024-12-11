#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
	void find(string digits, vector<string> v, vector<string>& res, string s, int k) {
		if (k >= digits.size()) {
			res.push_back(s);
			return;
		}
		int a = digits[k] - '0';

		for (int i = 0; i < v[a].size(); i++) {
			s += v[a][i];
			find(digits, v, res, s, k + 1);
			s.pop_back();
		}


	}

	vector<string> letterCombinations(string digits) {
		vector<string> res;
		if (digits.size() == 0) {
			return res;
		}
		vector<string> v = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

		int k = 0;
		string s = "";
		find(digits, v, res, s, k);
		return res;


	}



};


int main() {
	Solution solution;

	string digits;
	cout << "Enter numbers " << endl;
	cin >> digits;


	vector<string> result = solution.letterCombinations(digits);

	cout << "Posible combinations of letters: ";

	for (const string& combination : result) {
		cout << combination << " ";
	}
	cout << endl;
	return 0;



}