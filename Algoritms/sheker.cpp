/*#include<iostream>
using namespace std;

int main() {


	const int N = 10;
	int a[N];
	srand(time(0));
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 51;
		cout << a[i] << " ";

	}
	cout << endl;

	int low = 0;
	int up = N - 1;
	int last, tmp;
	while (low < up) {
		last = -1;
		for (int i = low; i < up; i++) {
			if (a[i] > a[i + 1]) {
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				last = i;
			}
		}
		up = last;
		if (last == -1) break;
		last = N;

		for (int i = up - 1; i >= low; i--) {
			if (a[i] > a[i + 1]) {
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				last = i;
			}
		}
		low = last + 1;
	}



	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";

	}
	cout << endl;


}*/