/*#include<iostream>
#include<random>
using namespace std;



int main() {

	const int N = 10;
	int a[N];
	int k;
	cin >> k;
	srand(k);
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 51;
		cout << a[i] << " ";

	}

	cout << endl;

	for (int i = 0; i < N - 1; i++) {
	
		int tmp = a[i + 1];
		int j = i;
		while (j >= 0 && a[j] > tmp) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = tmp;
			
	}


	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	cout << endl;


}
*/

