/*#include<iostream>
using namespace std;
int main() {

	int a = 5;
	int* pa = &a;
	int& aref = *pa;
	int* ppa = &aref;
	cout << a << endl;
	*pa = 12;
	cout << a << endl;
	 


}*/



/*#include<iostream>
using namespace std;
void Foo(int a) {
	a = 1;


}
void Foo2(int &a) {

	a = 2;

}
void Foo3(int *a) {

	*a = 3;

}

int main() {

	int value = 5; 
	cout << " value " << value << endl;
	Foo(value);
	cout << " Value " << value << endl << endl;
	Foo2(value);
	cout << " Value 2 " << value << endl << endl;
	Foo3(&value);
	cout << " Value 3 " << endl << endl;


}*/




/*#include<iostream>
using namespace std;
void Foo(int &a, int &b, int&c) {
	a = 10;
	b *= 2;
	c -= 100;

	
}

int main() {
	int a = 0;
	int b = 4;
	int c = 34;
	cout << a << " " << b << " " << c << endl;
	Foo(a, b, c);
	cout << a << " " << b << " " << c;



}*/

#include<iostream>
using namespace std;
template<typename T>
void Foo(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
	
}
int main() {
	int a = 6;
	int b = 5;
	cout << a << b << endl;
	Foo(a, b);
	cout << a << b << endl;
}

