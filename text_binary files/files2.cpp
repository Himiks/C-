#include<iostream>
#include<fstream>
using namespace std;


void dataPrepar(fstream& fout) {
	if (fout.is_open()) {
		int arr[] = { 1,2,3 };
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			fout.write((char*)&arr[i], 4);
		}
		fout.close();

	}
	else {
		cout << "Nope" << endl;
	}
}

void print(fstream& fout) {
	fout.open("numbers.dat", ios::in | ios::binary);
	if (fout.is_open()) {
		int num = 0;
		fout.read((char*)&num, 4);
		while (fout) {
			cout << num << endl;
			fout.read((char*)&num, 4);
		}
	}
}

int CountSum2Plus(fstream& fout) {
	fout.open("numbers.dat", ios::in | ios::binary);

	if (fout.is_open()) {
		int num1 = 0, num2 = 0;
		fout.seekg(0, ios::end);
		int len = fout.tellg();
		if (len >= 8) {
			fout.seekg(-8, ios::end);
			fout.read((char*)&num1, 4);
			fout.seekg(4, ios::beg);
			fout.read((char*)&num2, 4);
			return num1 + num2;



		}
	}
	else {
		cout << "Nope" << endl;
	}
	return 0;
}




int main() {
	fstream fout("numbers.dat", ios::out | ios::binary);
	dataPrepar(fout);
	//print(fout);
	cout << CountSum2Plus(fout)<< endl;


}




#include<iostream>
#include<fstream>
using namespace std;

void dataPrepare(fstream& fout) {
	if (fout.is_open()) {
		char arr[6][10] = { "Hector", "Dorn", "Catchy", "Jones", "Liz", "Voo"};
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			fout.write(arr[i], 10);
		}
		fout.close();

	}
	else {
		cout << "Nope" << endl;
	}


}

void print(fstream& fout) {
	fout.open("numbers.dat", ios::in | ios::binary);
	char word[10];
	fout.read(word, 10);
	while (fout) {
		cout << word << " ";
		fout.read(word, 10);
	}
	fout.close();
}

void deleteName(fstream& fout) {
	fout.open("numbers.dat", ios::in | ios::binary);
	fstream newFile("words.dat", ios::out | ios::binary);
	char a[10];
	char b[10];
	int pos = 0;
	int n = 0;
	int maxvalue = 0;
	int temp = 0;
	fout.read(a, 10);
	fout.read(b, 10);
	while (fout) {
		temp = strlen(a) + strlen(b);
		if (temp > maxvalue) {
			maxvalue = temp;
			n = pos;
		}
		fout.read(a, 10);
		fout.read(b, 10);
		pos++;
	}
	fout.close();

	fout.open("numbers.dat", ios::in | ios::binary);
	pos = 0;
	fout.read(a, 10);
	fout.read(b, 10);
	while (fout) {
		if (pos != n) {
			newFile.write(a, 10);
			newFile.write(b, 10);
		}

		fout.read(a, 10);
		fout.read(b, 10);
		pos++;
	}
	newFile.close();
	fout.close();
}







int main() {
	fstream fout("numbers.dat", ios::out | ios::binary);
	dataPrepare(fout);
	print(fout);
	deleteName(fout);




}



#include<iostream>
#include <cstring>
using namespace std;


class Vehicle {
protected:
	int WheelCount;
public:
	Vehicle(int n) {
		WheelCount = n;
	}

	virtual ~Vehicle() {
		cout << "Destructor called " << endl;
	}

	virtual void Print() {

		cout << WheelCount << " ";
	}





};


class Car : public Vehicle {
	char *brand;
public:
	Car(int n, const char *b):Vehicle(n) {
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
	}

	~Car() {
		delete[] brand;
		cout << "Destructor called " << endl;
	}

	void Print() {
		Vehicle::Print();
		cout << brand << " ";
	}


	Car(Car& other):Vehicle(other.WheelCount) 
	{
		brand = new char[strlen(other.brand) + 1];
		strcpy_s(brand, strlen(other.brand) + 1, other.brand);

	}

	Car& operator=(const Car& other) {
		if (this != &other) {
			delete[] brand;
			WheelCount = other.WheelCount;
			brand = new char[strlen(other.brand) + 1];
			strcpy_s(brand, strlen(other.brand) + 1, other.brand);
		}
		return *this;

	}



};


int main() {
	Vehicle* v = new Vehicle(6);
	v->Print();
	delete v;
	Vehicle* c = new Car(4, "BMW");
	c->Print();
	Car *c2 = new Car(4, "Toyota");
	c2->Print();
	Car* c3 = new Car(*c2);
	//delete c3;
	//c3->Print();
	Car* c4 = c2;
	c4->Print();



}





#include<iostream>
using namespace std;

template<class T, class W>
class vehicle {
	T WheelCount;
	T brand;
public:
	vehicle(T w, W b);
	~vehicle();
	void print();
};

template<class T, class W>
vehicle<T, W>::vehicle(T w, W b) {
	WheelCount = w;
	brand = b;
}
template<class T, class W>
vehicle<T, W>::~vehicle() {
	cout << "Destructor" << endl;
}

template<class T, class W>
void vehicle<T, W>::print() {
	cout << WheelCount << " " << brand << endl;
}

int main() {
	vehicle<int, string> v(5, "Marcedes");
	v.print();
	

}









