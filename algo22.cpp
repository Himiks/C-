/*#include<iostream>
#include<vector>
#include<map>

using namespace std;

template <class T, class U>
decltype(auto) access(T& container, U index) { 
	return container[index];
}


int main() {
	vector<int> vec = { 10, 20, 30, 40 };

	decltype(auto) val1 = access(vec, 2);
	cout << val1 << endl;

	val1 = 100;
	cout << vec[2] << endl;


}*/




/*#include<iostream>
#include<memory>
#include<functional>
#include<vector>
using namespace std;

class Widget {
public:
	Widget() {

	}

	int value;
	Widget(int v):value(v)
	{}


	bool operator<(const Widget& other) const {
		return value < other.value;
	}

	
};

vector<bool> features(Widget w) {
	return { false, true, true, false, true, true };

}

int main() {
	unique_ptr<Widget> p1 = make_unique<Widget>(10);
	unique_ptr<Widget> p2 = make_unique<Widget>(20);

	function<bool(const unique_ptr<Widget>&, const unique_ptr<Widget>&)> dereFUPLess;

	dereFUPLess = [](const unique_ptr<Widget>& a, const unique_ptr<Widget>& b) {
		return *a < *b;
		};
	if (dereFUPLess(p1, p2)) {
		cout << "p1 < p2" << endl;
	}
	else {
		cout << "p1 >= p2" << endl;
	}

	Widget w;
	bool highPriority = features(w)[5];
}*/



#include<iostream>
#include<vector>
#include<algorithm>

template<typename C, typename V>

void findAndInsert(C& container, const V& targetVal, const V& insertVal) {
	using std::cbegin;
	using std::cend;


	auto it = std::find(cbegin(container), cend(container), targetVal);
	container.insert(it, insertVal);
}


int main() {
	std::vector<int> numbers = { 1, 2, 3, 4, 5 };

	findAndInsert(numbers, 3, 99);

	for (int num : numbers) {
		std::cout << num << " ";
	}

	return 0;


}