/*#include<iostream>
#include<random>
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
	bool exchange = true;
	int k = N - 1;
	while (k > 0 && exchange) {
		exchange = false;
		for (int i = 0; i < k; i++) {
			if (a[i] > a[i + 1]) {
				int tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				exchange = true;
			}
		}
		k--;
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}*/


