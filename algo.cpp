#include<iostream>
#include<thread>
#include<chrono>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
#include<numeric>
#include<string>

using namespace std;


void DoWork(){


	for (int i = 0; i < 10; i++) {
		cout << "ID of the stream: " << this_thread::get_id() << "\tDoWork " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}


}
class MyFunctor {
public:
	int operator()(int a, int b) {
		cout << "I'm functor" << endl;
		return a + b;
	}
	
private:


};
bool GreaterThanZero(int a) {
	return a > 0;
}
bool LessThanZero(int a) {
	return a < 0;
}
class EventFunctor {
public:
	void ShowEvenSum() {
		cout << "Sum: " << evenSum << endl;
	}

	void ShowEvenCount() {
		cout << "Count: " << evenCount << endl;
	}

	void operator()(int value) {
		if (value % 2 == 0) {
			evenSum += value;
			evenCount++;
		}
	}



private:
	int evenSum = 0;
	int evenCount = 0;
};

bool MyPred(int a, int b) {
	return a > b;
}



int main() {
	
	EventFunctor ef;

	int arr[] = { 1,2,55,99,44,3,6 };
	for (auto element : arr) {
		ef(element);
	}

	ef.ShowEvenCount();
	ef.ShowEvenSum();

	vector<int> v = { 1, -2, -5, 9, -3, 8 };

	int result = count_if(v.begin(), v.end(), GreaterThanZero);
	cout << result << endl;



	thread th(DoWork);
	//th.join();
	//th.detach();
	
	auto start = chrono::high_resolution_clock::now();
	for (int i = 0; i < 10; i++) {
		cout <<"ID of the stream: " << this_thread::get_id() << " Main " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	auto end = chrono::high_resolution_clock::now();

	chrono::duration<float> duration = end - start;
	cout << "Duration" << duration.count() << " s" << endl;

	stack<int,list<int>> st;
	st.push(2);
	st.push(3);
	st.emplace(4);




	// sorting
	int arr[] = { 9, 10, 6, 3, 56, 78, 33, 1 };
	vector<int> v = { 9,4, 94, 6, 1, 3, 7 };

	sort(v.begin(), v.end());
	sort(arr, arr + 8, MyPred);
 	sort(v.begin(), v.end(), [](int a, int b) {return a > b; });
	for (auto element : v) {
		cout << element << endl;
	}



 vector<int> v2;
	copy(v.begin(), v.end(), back_inserter(v2));

	copy_if(v.begin(), v.end(), back_inserter(v2), [](int a) {return a > 10; });


	vector<int> v3 = { 10, 1, -55, 11, 13, 58 };
	list<int> lst = { 89, 56, 33, 25, 67, 2, 90 };
	auto result2 = max_element(v.begin(), v.end());
	auto result3 = max_element(lst.begin(), lst.end());
	cout << *result2 << endl;
	cout << *result3 << endl;

	auto result5 = min_element(v.begin(), v.end());
	cout << *result5 << endl;

	auto result6 = minmax_element(v.begin(), v.end());
	cout << *result6.first << " " << *result6.second << endl;

	vector<int> v = { 2,3,4 };
	auto result = accumulate(v.begin(), v.end(), 0, [](int a, int b) {

		if (b % 2 == 0) {
			return a + b;
		}
		else {
			return a;
		}
		}); // return value

	cout << result << endl;


	auto result = accumulate(next(begin(v)), v.end(), to_string(v[0]), [](string a, int b) {

		if (b % 2 == 0) {
			return a + "-" + to_string(b);
		}
		else {
			return a;
		}
		}); // return value




}

#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main() {

	vector<int> arr = { 10, 3, 4, 5,7, 11 };

	vector<int>arr2 = { 10, 3, 4, 5, 7, 11 };

	sort(begin(arr), end(arr));
	sort(begin(arr2), end(arr2));


	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << result << endl;


	auto result = mismatch(arr.begin(), arr.end(), arr2.begin(), arr2.end());
	
	if (result.first == end(arr) && result.second == end(arr2)) {
		cout << "+" << endl;
	}
	else {
		cout << "-" << endl;
	}


}


#include<iostream>
#include<algorithm>
using namespace std;

void Foo(int i) {
	cout << i << endl;
}

int main() {
	int arr[] = { 1, 2, 55, 77, 45 };
	for_each(begin(arr), end(arr), Foo);

	for (auto a : arr) {
		Foo(a);
	}

	for_each(begin(arr), end(arr), [](int &a) {
		cout << a << endl;
		a++;
	}); 


}
