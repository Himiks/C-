#include<iostream>
using namespace std;

int dv(int a, int b, int& err) {
	if (b == 0) {
		err = 1;
		return 0;
	}
	return a / b;
}
int formula(int a, int b, int& err) {
	err = 0;
	return dv(10, a + dv(5, b, err), err);
}

int main() {
	int err;
	int res = formula(1, 5, err);
	if (err) {
		cout << "Error " << endl;
	}
	else {
		cout << res << endl;
	}

	
}



#include<iostream>
using namespace std;

int dv(int a, int b) {
	if (b == 0) {
		throw "Error";
	}
	return a / b;
}
int formula(int a, int b) {
	return dv(10, (a + dv(5, b)));
}

int main() {
	int a = 1, b = 0;
	try {
		cout << formula(a, b) << endl;
	}
	catch(const char *e){
		cout << e << endl;
	}
	catch (int e) {
		cout << "Error: " << e << endl;
	}
	catch (...) {
		cout << "Undefined error " << endl;
	}


}



#include<iostream>
#include<vector>
#include<exception>
using namespace std;
int main() {
	vector<int> vv = { 55,66,77 };

	try {
		cout << vv[1] << endl;
		//cout << vv[3] << endl;
		cout << vv.at(3) << endl;
	}
	catch (const exception& e) {
		cout << e.what() << endl;
	}
	catch (...) {
		cout << "Undefined error " << endl;

	}



}




#include<iostream>
#include<list>
using namespace std;
int dv(int a, int b) {
	if (b == 0) {
		throw - 99;
	}
	return a / b;
}
int formula(int a, int b) {
	return dv(10, a + dv(5, b));
}

int main() {
	list<pair<int, int>> inp = { {1,5}, {0,1}, {1,0},{5,-1}, {1,2} };
	for (auto ab : inp) {
		int a = ab.first;
		int b = ab.second;

		try {
			cout << formula(a, b) << endl;
		}
		catch (int e) {
			cerr << "Error #" << endl;
		}


	}
}


