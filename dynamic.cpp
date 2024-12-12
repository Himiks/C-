#include<iostream>
#include<list>
using namespace std;
int main() {
	typedef list<int> mylist;
	mylist aa;
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	aa.push_front(1);
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

	auto it = aa.begin();
	it = aa.erase(it);
	++it;
	it++;
	it = aa.erase(it);
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;
	aa.insert(it, 99);
	for (auto i : aa) {
		cout << i << " ";
	}

}



#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> myvector;
void print(const myvector& aa) {
	for (const auto& i : aa) {
		cout << i << "";
	}
	cout << endl;
}

int main() {
	myvector aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	print(aa);
	auto it = aa.begin();
	it = aa.erase(it);
	it = aa.erase(it + 2);
	print(aa);
	aa.insert(it + 2, 99);
	print(aa);
	cout << aa.at(2) << endl;
	aa.at(2) = 100;
	print(aa);




}



#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* prev;
	elem* next;
	elem(int n) {
		num = n;
		next = NULL;
		prev = NULL;
	}


};

void print(elem* first);
void rem(elem*& first);
elem* push_back(elem*& first, elem*& last, int n);
elem* push_front(elem*& first, elem*& last, int n);
elem* insert(elem*& first, elem* curr, int n);
elem* erase(elem*& first, elem*& last, elem* curr);


int main() {

	elem* first = NULL, * last;
	push_back(first, last, 8);
	push_back(first, last, 4);
	push_back(first, last, 6);
	push_back(first, last, 5);
	push_front(first, last, 1);
	print(first);
	erase(first, last, first);
	elem* curr = first->next->next;
	curr = erase(first, last, curr);
	print(first);
	insert(first, curr, 99);
	print(first);
	rem(first);

}


void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next;
	}
	cout << endl;


}

void rem(elem*& first) {
	while (first) {
		elem* p = first->next;
		delete first;
		first = p;
	}
}

elem* push_back(elem*& first, elem*& last, int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		p->prev = last;
		last = p;
	}
	return p;
}

elem* push_front(elem*& first, elem*& last, int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		first->prev = p;
		p->next = first;
		first = p;
	}
	return p;
}


elem* insert(elem*& first, elem* curr, int n) {
	elem* p = new elem(n);
	if (first == curr) {
		first->prev = p;
		p->next = first;
		first = p;
	}
	else {
		elem* before = curr->prev;
		p->prev = before;
		p->next = curr;
		curr->prev = p;
	}
	return p;
}



elem* erase(elem*& first, elem*& last, elem* curr) {
	if (first == curr) {
		first = first->next;
	}
	if (last == curr) {
		last = last->next;
	}
	elem* before = curr->prev;
	elem* after = curr->next;
	if (before) {
		before->next = after;
	}
	if (after) {
		after->prev = before;
	}
	delete curr;
	return after;




}



#include<iostream>
using namespace std;

struct elem {
	int num;
	elem* prev;
	elem* next;
	elem(int n) {
		num = n;
		next = NULL;
		prev = NULL;
	}
};

class mylist {
	elem* first, * last;
public:
	void print() const;
	mylist();
	~mylist();
	elem* push_back(int n);
	elem* push_front(int n);
	elem* insert(elem* curr, int n);
	elem* erase(elem* curr);
	elem* begin() const;
	elem* next(elem*& p)const;


};



mylist::mylist() {
	first = NULL;
}

elem* mylist::push_back(int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		p->prev = last;
		last = p;
	}
	return p;
}


elem* mylist::push_front(int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		first->prev = p;
		p->next = first;
		first = p;
	}
	return p;
}

elem* mylist::erase(elem* curr) {
	if (first == curr) {
		first = first->next;
	}
	if (last == curr) {
		last = last->next;
	}
	elem* before = curr->prev;
	elem* after = curr->next;
	if (before) {
		before->next = after;
	}
	if (after) {
		after->prev = before;
	}
	delete curr;
	return after;

}

void mylist::print() const {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next;
	}
	cout << endl;
}

mylist::~mylist() {
	while (first) {
		elem* p = first->next;
		delete first;
		first = p;
	}
}

elem* mylist::begin() const {
	return first;
}
elem* mylist::next(elem*& p) const {
	p = p->next;
	return p;
}

elem* mylist::insert(elem* curr, int n) {
	elem* p = new elem(n);
	if (first == curr) {
		first->prev = p;
		p->next = first;
		first = p;
	}
	else {
		elem* before = curr->prev;
		before->next = p;
		p->prev = before;
		p->next = curr;
		curr->prev = p;


	}
	return p;
}



int main() {
	mylist aa;
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	aa.push_front(1);
	aa.print();
	elem* p = aa.begin();
	p = aa.erase(p);
	aa.next(p);
	aa.next(p);
	p = aa.erase(p);
	aa.print();
	aa.insert(p, 99);
	aa.print();
	
}




#include<iostream>
using namespace std;

void print(int* arr, int len);
void push_back(int*& arr, int& len, int val);
void insert(int*& arr, int& len, int k, int val);
void erase(int*& arr, int& len, int k);
int& at(int* arr, int k);




int main() {

	int* aa;
	int len = 0;
	push_back(aa, len, 1);
	push_back(aa, len, 8);
	push_back(aa, len, 4);
	push_back(aa, len, 6);
	push_back(aa, len, 5);
	print(aa, len);
	erase(aa, len, 0);
	erase(aa, len, 2);
	print(aa, len);
	insert(aa, len, 2, 99);
	print(aa, len);
	cout << at(aa, 2) << endl;
	at(aa, 2) = 100;
	print(aa, len);
	delete[] aa;
	


}


void print(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void push_back(int*& arr, int& len, int val) {
	if (len == 0) {
		arr = new int[1];
		arr[0] = val;
	}
	else {
		int* tmp = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			tmp[i] = arr[i];
		}
		tmp[len] = val;
		delete arr;
		arr = tmp;
	}
	++len;
}


void insert(int*& arr, int& len, int k, int val) {
	if (len == 0) {
		arr = new int[1];
		arr[0] = val;
	}
	else {
		int* tmp = new int[len + 1];
		for (int i = 0; i < k; ++i) {
			tmp[i] = arr[i];
		}
		tmp[k] = val;
		for (int i = k + 1; i <= len; ++i) {
			tmp[i] = arr[i - 1];
		}
		delete arr;
		arr = tmp;
	}
	++len;
}

void erase(int*& arr, int& len, int k) {
	if (len == 1) {
		delete[] arr;
	}
	else {
		int* tmp = new int[len - 1];
		for (int i = 0; i < k; ++i) {
			tmp[i] = arr[i];
		}
		for (int i = k + 1; i < len; i++) {
			tmp[i - 1] = arr[i];
		}
		delete arr;
		arr = tmp;
	}
	--len;
}

int& at(int* arr, int k) {
	return arr[k];
}




#include<iostream>
using namespace std;
class myvector {
	int* arr;
	int len;
public:
	myvector();
	~myvector();
	void push_back(int val);
	void print() const;
	void erase(int k);
	void insert(int k, int val);
	int& at(int k);


};

int main() {
	myvector aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	aa.print();
	aa.erase(0);
	aa.erase(2);
	aa.print();
	aa.insert(2, 99);
	aa.print();
	cout << aa.at(2) << endl;
	aa.at(2) = 100;
	aa.print();

}



myvector::myvector() {
	len = 0;
}

myvector::~myvector() {
	if (len > 0)
		delete[] arr;
}

void myvector::push_back(int val) {
	if (len == 0) {
		arr = new int[1];
		arr[0] = val;
	}
	else {
		int* tmp = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			tmp[i] = arr[i];
		}
		tmp[len] = val;
		delete arr;
		arr = tmp;

	}
	++len;
}

void myvector::print() const {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void myvector::erase(int k) {
	if (len == 1) {
		delete[] arr;
	}
	else {
		int* tmp = new int[len - 1];
		for (int i = 0; i < k; ++i) {
			tmp[i] = arr[i];
		}
		for (int i = k + 1; i < len; ++i) {
			tmp[i - 1] = arr[i];
		}
		delete arr;
		arr = tmp;
	}
	--len;
}


void myvector::insert(int k, int val) {
	if (len == 0) {
		arr = new int[1];
		arr[0] = val;
	}
	else {
		int* tmp = new int[len + 1];
		for (int i = 0; i < k; ++i) {
			tmp[i] = arr[i];
		}
		tmp[k] = val;
		for (int i = k + 1; i <= len; ++i) {
			tmp[i] = arr[i - 1];
		}
		delete arr;
		arr = tmp;
	}
	++len;
}

int& myvector::at(int k) {
	return arr[k];
}






///////////////Templets /////
#include<iostream>
using namespace std;

class myvector {
	int* arr;
	int len;
public:
	myvector() {
		len = 0;
	}

	void push_back(int n) {
		if (len == 0) {
			arr = new int[1];
			arr[0] = n;
		}
		else {
			int* tmp = new int[len + 1];
			for (int i = 0; i < len; ++i) {
				tmp[i] = arr[i];
			}
			tmp[len] = n;
			delete arr;
			arr = tmp;

		}
		len++;
	}

	int& at(int i) {
		return arr[i];
	}
	int size(){
		return len;
	}
	~myvector() {
		if (len > 0) {
			delete[] arr;
		}
	}


};


int main() {
	myvector aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	for (int i = 0; i < aa.size(); ++i) {
		cout << aa.at(i) << " ";
	}
	cout << endl;
	cout << aa.size() << endl;




}



#include<iostream>
using namespace std;
class myvector {
	int* arr;
	int len;
public:
	myvector();
	void push_back(int n);
	int& at(int i);
	int size();
	~myvector();

};

int main() {
	myvector aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	for (int i = 0; i < aa.size(); ++i)
		cout << aa.at(i) << " ";
	cout << endl;
	cout << aa.size() << endl;

}
myvector::myvector() {
	len = 0;
}

void myvector::push_back(int n) {
	if (len == 0) {
		arr = new int[1];
		arr[0] = n;
	}
	else {
		int* tmp = new int[len + 1];
		for (int i = 0; i < len; i++) {
			tmp[i] = arr[i];
		}
		tmp[len] = n;
		delete arr;
		arr = tmp;



	}
	++len;
}

int& myvector::at(int i) {
	return arr[i];
}

int myvector::size() {
	return len;
}

myvector::~myvector() {
	if (len > 0) {
		delete[] arr;
	}
}




#include<iostream>
using namespace std;
template<class X>
X add(X a, X b) {
	return a + b;
}




int main() {
	cout << add(5, 7) << endl;
	cout << add(5.5, 7.7) << endl;
	string s = "Hello", t = "World";
	cout << add(s, t) << endl;

}




#include<iostream>
using namespace std;
template<class T>
class myvector {
	T* arr;
	int len;
public:
	myvector() {
		len = 0;
	}
	void push_back(T n) {
		if (len == 0) {
			arr = new T[1];
			arr[0] = n;
		}
		else {

			T* tmp = new T[len + 1];
			for (int i = 0; i < len; i++) {
				tmp[i] = arr[i];
			}
			tmp[len] = n;
			delete arr;
			arr = tmp;

		}
		++len;
	}
	T& at(int i) {
		return arr[i];
	}
	int size() {
		return len;
	}
	~myvector() {
		if (len > 0) {
			delete[] arr;
		}

	}

};


int main() {
	myvector<int> aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);
	for (int i = 0; i < aa.size(); i++) {
		cout << aa.at(i) << " ";
	}
	cout << endl;
	cout << aa.size() << endl;





}



#include<iostream>
using namespace std;
template<class X>
class myvector {
	X* arr;
	int len;
public:
	myvector();
	void push_back(X n);
	X& at(int i);
	int size();
	~myvector();

};


int main() {
	myvector<int>aa;
	aa.push_back(1);
	aa.push_back(8);
	aa.push_back(4);
	aa.push_back(6);
	aa.push_back(5);

	for (int i = 0; i < aa.size(); i++) {
		cout << aa.at(i) << " ";

	}
	cout << endl;
	cout << aa.size() << endl;
}

template<class X>
myvector<X>::myvector() {
	len = 0;
}

template<class X>
void myvector<X>::push_back(X n) {
	if (len == 0) {
		arr = new X[1];
		arr[0] = n;
	}
	else {
		X* tmp = new X[len + 1];
		for (int i = 0; i < len; i++) {
			tmp[i] = arr[i];
		}
		tmp[len] = n;
		delete arr;
		arr = tmp;
	}
	++len;
}

template <class X>
X& myvector<X>::at(int i) {
	return arr[i];
}
template<class X>
int myvector<X>::size() {
	return len;
}
template<class X>
myvector<X>::~myvector() {
	if (len > 0) {
		delete[] arr;
	}
}



#include<iostream>
using namespace std;
template<class X, class Y>
struct mypair {
	X first;
	Y second;
	mypair(X f, Y s) {
		first = f;
		second = s;
	}
	void print(ostream& out) {
		out << first << "  " << second << endl;
	}
};

int main() {
	mypair<string, int> p("John", 20);
	p.print(cout);

}




#include<iostream>
using namespace std;
template<class X = int, class Y = int>
struct mypair {
	X first;
	Y second;
	mypair(X f, Y s) {
		first = f;
		second = s;
	}
	void print(ostream& out) {
		out << first << " " << second << endl;
	}


};

int main() {
	mypair<> p(5, 7);
	p.print(cout);

}



#include<iostream>
using namespace std;
class myvector {
	int* aa;
	int len;
public:
	myvector() {
		len = 0;
	}
	int size() {
		return len;
	}
	~myvector() {
		if (len > 0) {
			delete[] aa;
		}
	}
	void push_back(int m);
	int& at(int i) {
		return aa[i];
	}


};


void myvector::push_back(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else {
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;
	}
	aa[len] = m;
	++len;
}

void print(myvector& v) {
	for (int i = 0; i < v.size(); ++i) {
		cout << v.at(i) << " ";
	}
	cout << endl;
}





int main() {
	myvector v;
	v.push_back(1);
	v.push_back(8);
	v.push_back(4);
	v.push_back(6);
	v.push_back(5);
	print(v);




}



#include<iostream>
using namespace std;
class myvector {
	int* aa;
	int len;
public:
	myvector() {
		len = 0;
	}
	int size() {
		return len;

	}
	~myvector() {
		if (len > 0) {
			delete[] aa;
		}
	}
	void operator+=(int m);
	int& operator[](int i) {
		return aa[i];
	}

};

void myvector::operator+=(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else {
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;
	}
	aa[len] = m;
	++len;
}

void print(myvector& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}


int main() {
	myvector v;
	v += 1;
	v += 8;
	v += 4;
	v += 6;
	v += 5;
	print(v);




}



#include<iostream>
using namespace std;

class myvector {
	int* aa;
	int len;
public:
	myvector() {
		len = 0;
	}
	myvector(myvector& v) {
		len = v.len;
		if (len > 0) {
			aa = new int[len];
			for (int i = 0; i < len; i++) {
				aa[i] = v[i];
			}
		}


	}
	int size() {
		return len;
	}
		
	~myvector(){
		if (len > 0) {
			delete aa;
		}
	}
	void operator+=(int m);
	int& operator[](int i) {
		return aa[i];
	}

};

void myvector::operator+=(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else {
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;
	}
	aa[len] = m;
	++len;
}

void print(myvector& v) {
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}


int main() {
	myvector v;
	v += 1;
	v += 8;
	v += 4;
	v += 6;
	v += 5;
	myvector vv(v);
	vv[0] = 11;
	print(v);
	print(vv);





}



#include<iostream>
using namespace std;

class myvector {

	int* aa;
	int len;
public:
	myvector() {
		len = 0;
	}
	myvector(myvector& v) {
		len = v.len;
		if (len > 0) {
			aa = new int[len];
			for (int i = 0; i < len; ++i) {
				aa[i] = v[i];
			}
		}
	}
	void operator=(myvector& v) {
		if (len > 0) {
			delete aa;
		}
		len = v.len;
		if (len > 0) {
			aa = new int[len];
			for (int i = 0; i < len; ++i) {
				aa[i] = v[i];
			}
		}
	}

	int size() {
		return len;
	}
	~myvector() {
		if (len > 0) {
			delete aa;
		}
	}

	void operator+=(int m);
	int& operator[](int i) {
		return aa[i];
	}


};

void myvector::operator+=(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else
	{
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;
	}
	aa[len] = m;
	++len;
}

void print(myvector& v) {
	
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}




int main() {
	myvector v;
	v += 1;
	v += 8;
	v += 4;
	v += 6;
	v += 5;
	myvector vv(v);
	vv[0] = 11;
	print(v);
	print(vv);
	myvector vvv;
	vvv = vv;
	vvv[4] = 55;
	print(vv);
	print(vvv);



}



#include<iostream>
using namespace std;
int main() {
	string s = "ello";
	cout << s << endl;
	string t = 'H' + s;
	cout << t << endl;
	t += '!';
	(t += '!') += '!';
	cout << t << endl;
	{

		string s = "ello";
		operator<<(operator<<(cout,s),'\n');
		string t = operator+('H', s);
		operator<<(operator<<(cout, t), '\n');
		t.operator+=('!');
		t.operator+=('!').operator+=('!');
		operator<<(operator<<(cout, t), '\n');





	}




}




#include<iostream>
using namespace std;

class myvector {
	int* aa;
	int len;

public:
	myvector() {
		len = 0;
	}
	myvector(myvector& v) {
		len = v.len;
		if (len > 0) {
			aa = new int[len];
			for (int i = 0; i < len; i++) {
				aa[i] = v[i];
			}
		}

	}

	void operator=(myvector& v) {
		if (len > 0) {
			delete aa;
		}
		len = v.len;
		if (len > 0) {
			aa = new int[len];
			for (int i = 0; i < len; i++) {
				aa[i] = v[i];
			}
		}
	}

	int size() const {
		return len;
	}

	~myvector() {
		if (len > 0) {
			delete aa;
		}
	}
	void operator+= (int m);
	int& operator[](int i) {
		return aa[i];
	}

	friend ostream& operator<<(ostream& out, const myvector& v);
	friend void operator+=(int m, myvector& v);


};


void myvector::operator+=(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else {
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;

	}
	aa[len] = m;
	++len;
}


void operator+=(int m, myvector& v) {
	if (v.len == 0) {
		v.aa = new int[1];
	}
	else {
		int *tmp = v.aa;
		v.aa = new int[v.len + 1];
		for (int i = 0; i < v.len; i++) {
			v.aa[i + 1] = tmp[i];
		}
		delete tmp;


	}
	v.aa[0] = m;
	++v.len;


}

void print(myvector& v) {
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << endl;
}

ostream& operator<<(ostream& out, const myvector& v) {
	for (int i = 0; i < v.size(); ++i) {
		out << v.aa[i] << " ";
	}
	return out;
}


int main() {
	myvector v;
	v +=1;
	v += 8;
	v += 4;
	v += 6;
	v += 5;
	cout << v << endl;
	99 += v;
	cout << v << endl;




}


#include<iostream>
using namespace std;

class myvector {
	struct iterator {
		myvector* vect;
		int pos;
		iterator(myvector* v, int p) {
			vect = v; 
			pos = p;
		}
		int operator*() {
			return vect->aa[pos];
		}
		bool operator!=(const iterator& it) {
			return pos != it.pos;
		}
		iterator operator++() {
			if (pos < vect->len) {
				++pos;
		
			}
			return *this;
		}




	};
	int* aa;
	int len;
public:
	myvector() {
		len = 0;
	}
	int size() const {
		return len;
	}
	~myvector() {
		if (len > 0) {
			delete aa;
		}
	}
	void operator+=(int m);
	int& operator[](int i) {
		return aa[i];
	}

	iterator begin() {
		return iterator(this, 0);
	}

	iterator end() {
		return iterator(this, len);
	}

	friend ostream& operator<<(ostream& out, const myvector& v);

};

void myvector::operator+=(int m) {
	if (len == 0) {
		aa = new int[1];
	}
	else {
		int* tmp = aa;
		aa = new int[len + 1];
		for (int i = 0; i < len; ++i) {
			aa[i] = tmp[i];
		}
		delete tmp;
	}
	aa[len] = m;
	++len;
}

ostream& operator<<(ostream& out, const myvector& v) {
	for (int i = 0; i < v.size(); i++) {
		out << v.aa[i] << " ";
	}
	return out;
}




int main() {
	myvector v;
	v += 1;
	v += 8;
	v += 4;

	cout << v << endl;
	for (auto a : v) {
		cout << a << endl;
	}



}



