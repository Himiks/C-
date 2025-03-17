#include <iostream>
using namespace std;
double square(double length) {
	double result = length * length;
	return length * length;
}

double cube(double length) {
	double result = length * length * length;
	return length * length * length;
}
int main() {
	double length = 5.0;
	double area = square(length);
	double volume = cube(length);
    cout << "Area " << area << "cm^2\n";
	cout << "volume " << volume << "cm^3\n";
	return 0;
}
