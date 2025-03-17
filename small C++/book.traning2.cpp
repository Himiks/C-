#include <iostream>
using namespace std;
int Square(double pi, int radius) {
	int square_Of_Circle = pi * radius * radius;
	int perimetr_Of_Circle = 2 * pi * radius;
	cout << "Square of circle = " << square_Of_Circle << endl;
	cout << "Perimetr of circle " << perimetr_Of_Circle << endl;
	return 0;
	
}

int main() {
	double pi = 3.142322;
	int radius;
	cin >> radius;
	Square(pi, radius);
	
	
}