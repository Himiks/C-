/*#include<iostream>
using namespace std;

int tower(int kol, int one, int two, int three) {

	if (kol == 1) {
		cout << "Move disk from " << one << " to " << three << endl;
		return;
	}

	tower(kol - 1, one, three, two);
	tower(kol - 1, two, one, three);


	return;
}

int main() {
	tower(3, 1, 2, 33);


}*/


