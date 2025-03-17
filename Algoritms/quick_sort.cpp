/*#include<iostream>
#include<random>
using namespace std;


void quickSort(int a[], int left, int right) {

	if (left > right) return;
	int p = a[(left + right) / 2];
	int i = left;
	int j = right;
	
	cout << endl;

	while (i <= j) {
		while (a[i] < p) {
			i++;
		}
		while (a[j] > p) {
			j--;
		}

		if (i <= j) {
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
	}
	quickSort(a, left, j);
	quickSort(a, i, right);

}


int main() {
	srand(time(0));
	const int N = 10;
	int a[N];
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 16;
		cout << a[i] << " ";
	}
	cout << endl;
	quickSort(a, 0, N - 1);
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

	return 0;
}*/

