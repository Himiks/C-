/*#include<iostream>
#include<string>
#include<unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
	int Longest(string s, int k) {
		unordered_map<char, int> charCount;
		int maxSubstr = 0;
		int leftPointer = 0;
		int n = s.size();
		for (int rightPointer = 0; rightPointer < n; rightPointer++) {
			charCount[s[rightPointer]]++;
			while (charCount.size() > k) {
				charCount[s[leftPointer]]--;
				if (charCount[s[leftPointer]] == 0) {
					charCount.erase(s[leftPointer]);
				}
				++leftPointer;
			}
			maxSubstr = max(maxSubstr, rightPointer - leftPointer + 1);

		}
		return maxSubstr;
	}
};


int main() {
	string s = "aabcabb";
	Solution ss;
	ss.Longest(s, 2);

}*/
