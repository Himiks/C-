/*#include<iostream>
using namespace std;

int main() {
	const int N = 10;
	int a[N];
	srand(time(0));
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 21;
		cout << a[i] << "\t";
	}
	cout << endl;
	int k = N - 1;
	int last = -1;
	while (k > 0) {
		last = -1;
		for (int i = 0; i < k; i++) {
			if (a[i] > a[i + 1]) {
				int tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				last = i;
			}
		}
		k = last;
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;

}*/

