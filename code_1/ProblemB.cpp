/*#include<iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	string s;
	cin >> s;
	int m;
	cin >> m;
	string ways;
	cin >> ways;
	string result = "";

	if (2 <= n < 100000 && 1 <= m <= 100000) {
		if (1 <= x <= n) {
			result += s[x-1];
			for (int i = 0; i < m; i++) {
				if (ways[i] == 'R') {
					x++;
				}
				else if (ways[i] == 'L') {
					x--;
				}
				result += s[x - 1];
			}
		}

		cout << result << endl;
	}


}*/