/*#include<iostream>
using namespace std;

int binarySearch(int a[], int num, int low, int up) {

	if (low > up) {
		return -1;
	}

	int mid = (low + up) / 2;
	if (a[mid] == num) {
		return mid;
	}

	if (a[mid] > num) {
		return binarySearch(a, num, low, mid - 1);
	}
	else {
		return binarySearch(a, num, mid + 1, up);
	}
	
}


int main() {
	const int N = 10;
	int a[] = { -3, 0, 2, 3, 5, 7, 8, 10, 11, 15 };
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	int num;
	cin >> num;
	int index = binarySearch(a, num, 0, N - 1);

	if (index == -1) {
		cout << "Not found" << endl;
	}
	else {
		cout << index << endl;
	}
}

*/