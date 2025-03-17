/*Given natural number N.Remove from the number the
1st and the 3rd digits from the right.
Example 1. N = 12345, answer: 124.
Example 2. N = 123, answer : 2.
Example 3. N = 56, answer : 5.
Example 4. N = 9, answer : 0.

*/


/*#include <iostream>
using namespace std;



int main() {
	int n;
	cin >> n;
	int ret = n / 1000 * 10 + n / 10 % 10;



}*/
/*#include<iostream>
using namespace std;
int main() {
	int n;
	int count = 0;
	double nn = 0;
	cin >> n;
	while (n > 99) {
		n /= 10;
	}
	while (n != 0) {
		nn += n % 10;
		n /=10;
		count++;
	}
	cout << nn / count << endl;
}*/




/**#include <iostream>
using namespace std;
int main() {
	int p;
	cin >> p;
	int pp = p - p % 5;
	if (pp < p - 2)
		pp -= 5;
	else
		pp -=10;
	int ppp = pp + 20;
	for (int i = pp; i <= ppp; i += 5) 
		cout << i << "  ";
	cout << endl;

}*/
	

/*#include <iostream>
using namespace std;
int main() {

	const int Row = 3;
	const int Col = 3;
	int a=0, b=0, c=0;
	int arr[Row][Col];
	for (int i = 0; i < Row; i++) {
		for (int j = 0; j < Col; j++) {
			cin >> arr[i][j];
		}
		
	}
	for (int i = 0; i < Row; i++) {
		a += arr[i][0];
	}
	for (int i = 0; i < Row; i++) {
		b += arr[i][1];
	}
	for (int i = 0; i < Row; i++) {
		c += arr[i][2];
	}
	if (a > b || a > c) {
		cout << " Answer " << 0 << endl;
	}
	if (b > a || b > c) {
		cout << " Answer " << 1 << endl;
	}

	else cout << "Answer " << 2 << endl;

}*/


/*#include<iostream>
using namespace std;
int main() {
	const int Size = 8;
	char line[Size];
	int count = 0;
	for (int i = 0; i < Size; i++) {
		cin >> line[i];
	}
	for (int i = 0; i < Size; i++) {
		if (line[i] >= '0' && line[i] <= '9') {
			count++;
			if (count == 3) {
				cout << " Yep " << endl;
				return 0;
			}
		}
		if (line[i] >= 'a' && line[i] <= 'z') {
			count = 0;
		}
	}
	cout << " Nope " << endl;
	return 0;


}*/




/*#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int count = 0;
	for (char ch : s) {
		for (int i = 0; i < 1; i++) {
			if (ch >= '0' && ch <= '9') {
				count++;
			}
		
		if (ch >= 'a' && ch <= 'z') {
			count = 0;
		}
		if (count == 3) {
			cout << " Yep " << endl;
			return 0;
		}
		}
	}
	cout << " Nope " << endl;
	return 0;




}*/






/*#include<iostream>
using namespace std;
int main() {
	const int Size = 8;
	char line[Size];
	int count = 0;
	for (int i = 0; i < Size; i++) {
		cin >> line[i];
	}
	for (int i = 0; i < Size; i++) {
		if (line[i] >= '0' && line[i] <= '9') {
			count++;
		}
		if (line[i] >= 'a' && line[i] <= 'z') {
			count = 0;
		}
		if (count == 3) {
			cout << " Yep " << endl;
			return 0;
		}
	}
	cout << " Nope " << endl;
	return 0;

}*/




/*#include <iostream>
using namespace std;
int main() {
	const int Size = 8;
	char arr[Size];
	bool isNumber = true;
	for (int i = 0; i < Size; i++) {
		cin >> arr[i];
	}

	
		for (int i = 0; i < Size; i++) {
			if (arr[i] >= 'a' && arr[i] <= 'z') {
				isNumber = false;
				cout << arr[i] << " ";
			}
			if (isNumber == false && arr[i] >= '0' && arr[i] <= '9') {
				cout << arr[i] << " ";
			}
			
		}
	





}*/



/*#include <iostream>
using namespace std;

void returnArray(char arr[], const int Size, int &index) {
	bool isNumber = true;
	char term;
	for (int i = 0; i < Size; i++) {
		cin >> arr[i];
	}

		for (int i = 0; i < Size; i++) {
			if (isNumber == true && arr[i] >= '0' && arr[i] <= '9') {
				index++;

			}

			if (arr[i] >= 'a' && arr[i] <= 'z') {
				isNumber = false;
				term = arr[i];
				arr[i-index] = term;
			}
			if (isNumber == false && arr[i] >= '0' && arr[i] <= '9') {
				term = arr[i];
				arr[i-index] = term;
			}

		}
	

}

int main() {
    const int Size = 8;
	int index = 0;
	char arr[8];
	returnArray(arr, Size, index);
	for (int i = 0; i < Size - index; i++) {
		cout << arr[i];
	}




}*/



/*#include<iostream>
using namespace std;
int GetMin(int arr[], int size) {

	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;



}


int GetMax(int arr[], int size) {

	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;



}
void GetMinAndMax


int main() {
	int arr[5] = { 1,2,3,4,5 };
	cout << GetMin(arr, 5) << endl;
	cout << GetMax(arr, 5) << endl;
}*/



/*#include<iostream>
using namespace std;
bool dig3(const string& s) {
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
	if (s[i] >= '0' and s[i] <= '9') {
			++cnt;
		
	if (cnt == 3) 
		return true;
	}
	else {
			cnt = 0;
		}
	}
	return false;
}





int main() {
	cout << dig3("a1234cb") << endl;
	cout << dig3("a12x34cb") << endl;




}*/




/*#include<iostream>
using namespace std;
void trimleading(string& s) {
	string t;
	bool found = false;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c >= '0' and c <= '9') {
			if (found) {
				t += c;
			}
		}
		else {
			t += c;
			found = true;
		}
	}
	s = t;

}

int main() {

	string s = "13a45bc6";
	cout << s << endl;
	trimleading(s);
	cout << s << endl;




}*/



/*#include <iostream>
using namespace std;
class codecalculater {
	int size;
	int state;
	int step;
public:
	codecalculater(int _size, int _state, unsigned _step) {
		size = _size;
		state = _state;
		step = _step;
	}

	int current_code() {
		return state;
	}
	void tick() {
		state = (state + step) % size;
	}
	void back() {
		state = (state - state) % size;
	}
};
int main() {
	codecalculater c(5, 3, 2);
	cout << c.current_code() << endl;
	c.tick();
	c.tick();
	cout << c.current_code() << endl;
	c.tick();
	cout << c.current_code() << endl;
	c.back();
	c.back();
	c.back();
	cout << c.current_code() << endl;
}*/




/*#include<iostream>
using namespace std;
class codecalculator {
	int size;
	int curr;
	int step;
public:
	codecalculator(int size, int curr, int step) {
		this->size = size;
		this->curr = curr;
		this->step = step;
	}
	int current_code() {
		return curr;
	}
	void tick() {
		curr = (curr + step) % size;


	}
	void back();
};
void codecalculator::back() {
	curr = (curr - step + size) % size;
}





int main() {

	codecalculator c(5, 3, 2);
	cout << c.current_code() << endl;
	c.tick();
	c.tick();
	cout << c.current_code() << endl;
	c.tick();
	cout << c.current_code() << endl;
	c.back();
	cout << c.current_code() << endl;




}*/




/*#include<iostream>
using namespace std;
void trimleading(char s[]) {
	int found = 0;
	while (s[found] >= '0' and s[found] <= '9')
		found++;
	if (s[found] == 0)
		s[0] = 0;
	else {
		int i = 0;
		while (s[found] != 0) {
			s[i] = s[found];
			i++;
			found++;
		}
		s[i] = 0;


	}



}


int main() {
	char s[] = "0";
	cout << s << endl;
	trimleading(s);
	cout << s << endl;





}*/








#include <iostream>
#include<string>
using namespace std;
int main() {
	bool isNumber = false;
	string s;
	char c;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		c = s[i];
		if (s[0] == c >= 'a' && c <= 'z') {
			cout << " No " << endl;
			return 0;
		}
		if (s[s.length() - 1] == c >= 'a' && c <= 'z') {

			cout << " No " << endl;
			return 0;
		}
		if (c >= '0' && c <= '9') {
			isNumber = true;

		}
		if (isNumber && c >= 'a' && c <= 'z') {

		}

	}
	cout << " Yes " << endl;
	return 0;







}