#include <iostream>
using namespace std;
int main()
{
	int en, pn = 0, flag = 0;
	for (int i = 0; i < 10; i++) {
		cin >> en;
		if (en == 0 && pn == 0) flag = 1;
		pn = en;
	}
	if (flag) cout << " Yes ";
	else cout << " NO ";


}

