#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> st;
		for (char c : s) {
			if (c == '(' or c == '{' or c == '[') {
				st.push(c);
			}
			else {
				if (st.empty() or (c == ')' && st.top() != '(') or (c == '}' && st.top() != '{') or (c == ']' && c == '[')) {
					return false;
				}
				st.pop();
			}
		}
		return st.empty();
	}


};


int main() {
	Solution sol;
	cout <<  sol.isValid("((){}[](){}[]");




}