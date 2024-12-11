/*#include<iostream>
#include<vector>
using namespace std;

void find(string digits, vector<string>v, vector<string> &res, string s, int k) {
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
	vector<string> v = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	int k = 0;
	string s = "";
	find(digits, v, res, s, k);
	return res;

}



int main() {
	vector<string> v2;
	v2 = letterCombinations("789");
	for (auto v : v2) {
		cout << v << endl;

	}


}*/


