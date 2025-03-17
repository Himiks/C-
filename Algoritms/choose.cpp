/*#include<iostream>
#include<random>
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


	for (int i = 0; i < N-1; i++) {
		int min = i;

		for (int j = i + 1; j < N; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}

		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;


		for (int i = 0; i < N; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	



	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}*/

