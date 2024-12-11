/*#include<iostream>
using namespace std;

string checkEmotion(int n, string emotion) {

	if (emotion.size() == 1) {
		return "BORED";
	}
	int h = 0;
	int s = 0;

	for (int i = 0; i < n-1; i++) {
		if (emotion[i] == ':') {
			if (emotion[i + 1] == ')') {
				h++;
			}
			else if (emotion[i + 1] == '(') {
				s++;
			}
		}
		else if (emotion[i] == ')') {
			if (emotion[i + 1] == ':') {
				s++;
			}
		}
		else if (emotion[i] == '(') {
			if (emotion[i + 1]==':') {
				h++;
			}
		}
	}


	if (h > s) {
		return "HAPPY";
	}
	else if (s > h) {
		return "SAD";
	}
}


int main() {
	int n;
	cin >> n;
	string emotion;
	cin >> emotion;
	cout << checkEmotion(n, emotion) << endl;


}*/


