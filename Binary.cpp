/*#include<iostream>
#include<algorithm>
using namespace std;


const int mod = 1e9 + 7;


int power(int x, long long n) {
	int ans = 1 % mod;
	while (n > 0) {
		if (n & 1) {
			ans = 1LL * ans * x % mod;
		}
		x = 1LL * x * x % mod;
		n >>= 1;
	}
	return ans;
}


int32_t main() {
	cout << power(2, 1000000000) << endl;
	return 0;
	



}*/