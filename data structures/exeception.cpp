#include<iostream>
#include<stdexcept>
using namespace std;
int main() {
	try {
		int num1, num2;
		cin >> num1;
		cin >> num2;
		if (num2 == 0) {
 			throw runtime_error("Division by zero is not allowed!");
		}

		double result = static_cast<double>(num1) / num2;
		cout << "Result of division " << result << endl;
	}
	catch(const runtime_error& e){
		cerr << "Error: " << e.what() << endl;

	}

}




#include <iostream>
#include <string>

using namespace std;

string::size_type find_char(const string& s, char c, string::size_type& occurs) {
	auto ret = s.size(); // position of the first occurrence, if any
	occurs = 0; // set the occurrence count parameter
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // remember the first occurrence of c
			++occurs; // increment the occurrence count
		}
	}
	return ret;
}

int main() {
	string s = "hello world";
	char c = 'o';
	string::size_type occurs;
	string::size_type position = find_char(s, c, occurs);

	if (position != s.size()) {
		cout << "Character '" << c << "' found at position " << position << ". Occurs " << occurs << " times." << endl;
	}
	else {
		cout << "Character '" << c << "' not found in the string." << endl;
	}

	return 0;
}




#include<iostream>
using namespace std;
void print(void* ptr, char type) {
	switch (type) {
	case 'i':
		cout << *((int*)ptr) << endl;
		break;
	case 'c':
		cout << *((char*)ptr) << endl;
		break;
	}
}



int main() {
	int number = 5;
	char letter = 'a';
	print(&number, 'i');
	print(&letter, 'i');


}



#include<iostream>
using namespace std;
int getMin(int arr[], int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];

		}
	}
	return min;


}
int getMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];

		}
	}
	return max;


}
void getMinAndMax(int arr[], int size, int* min, int* max) {
	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) {
			*max = arr[i];

		}
	}
	for (int i = 0; i < size; i++) {
		if (*min > arr[i]) {
			*min = arr[i];

		}
	}
}

int main() {
	int arr[5] = { 5,4,-2,29,6 };
	int min = arr[0];
	int max = arr[0];
	//cout << getMin(arr, 5);
	//cout << getMax(arr, 5);
	getMinAndMax(arr, 5, &min, &max);
	cout << min<< " " << max;
}



// function pointers
#include<iostream>
using namespace std;
int getNumber() {

	return 5;
}
int add(int a, int b) {
	return a + b;
}

int main() {

	int(*funcPtr)() = getNumber;
	cout << funcPtr() << endl;
	int(*funcPtr2)(int, int ) = add;
	cout << funcPtr2(3, 4) << endl;
	
	

}





// custom sorting


#include<iostream>
#include<vector>
using namespace std;
bool ascendingCompare(int a, int b) {
	return a < b;
}

bool descendingCompare(int a, int b) {
	return a > b;

}


void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)){

	for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
		int bestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) {
			if (compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbersVector[startIndex], numbersVector[bestIndex]);

	}

}

void printNumbers(vector<int>& numberVector) {
	for (int i = 0; i < numberVector.size(); ++i) {
		cout << numberVector[i] << " ";
	}
	cout << endl;

}

int main() {

	vector<int> myNumbers = { 2, 5, 1, 3, 6, 4 }; // 1, 2, 3, 5, 6, 4;
	bool(*funcPtr)(int, int) = ascendingCompare;
	customSort(myNumbers, funcPtr);
	printNumbers(myNumbers);


}




#include<iostream>
#include<memory>
using namespace std;
class MyClass {
public:
	MyClass() {
		cout << "Conctructer invoked" << endl;
	}
	~MyClass() {
		cout << "Destructor invoked " << endl;
	}

};



int main() {
	//unique_ptr<int> unPtr1 = make_unique<int>(25);
	//cout << *unPtr1 << endl;
	//unique_ptr<int>unPtr2 = move(unPtr1);
	//cout << *unPtr2 << endl;
	//{
	//	unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
	//}
	//shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
	//cout << "Shared count: " << shPtr1.use_count() << endl;
	//shared_ptr<MyClass>ShPtr2 = shPtr1;
	//cout << "Shared count: " << shPtr1.use_count() << endl;
	weak_ptr<int>wePtr1;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(25);
		wePtr1 = shPtr1;
	}

}



