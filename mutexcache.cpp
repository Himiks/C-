#include<iostream>
#include<mutex>

using namespace std;

class Widget {
public:
	int magicValue() const {
		lock_guard<mutex> guard(m);
			if (cacheValid) {
				return cachedValue;
			}
			else {
				auto val1 = expensiveComputation1();
				auto val2 = expensiveComputation2();
				cachedValue = val1 + val2;
				cacheValid = true;

				return cachedValue;
			}



	}


private:
	int expensiveComputation1() const { return 42; }
	int expensiveComputation2() const { return 58; }

	mutable mutex m;
	mutable int cachedValue{ 0 };
	mutable bool cacheValid{ false };
};



int main() {

}