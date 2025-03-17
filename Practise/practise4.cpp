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
void GetMinAndMax(int arr[], int size, int* min, int* max) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > *max) {
			*max = arr[i];
		}

		if (*min > arr[i]) {
			*min = arr[i];
		}
	}





}


int main() {
	int arr[5] = { 1,2,3,4,5 };
	//cout << GetMin(arr, 5) << endl;
	//cout << GetMax(arr, 5) << endl;
	int min = arr[0];
	int max = arr[0];

	GetMinAndMax(arr, 5, &min, &max);
	cout << min << "  " << max << endl;
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
	char s[] = "13ab45db5";
	cout << s << endl;
	trimleading(s);
	cout << s << endl;





}*/





/*#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[0] >= 'a' && s[0]<= 'z') {
			cout << " No " << endl;
			return 0;
		}
		if (s[s.length() - 1] >= 'a' && s[s.length() - 1] <= 'z') {

			cout << " No " << endl;
			return 0;
		}

	}
	cout << " Yes " << endl;
	return 0;







}*/



/*#include <iostream>
using namespace std;
int main() {
	int size;
	cout << " Size " << endl;
	cin >> size;
	int* MyArray = new int[size];
	for (int i = 0; i < size; i++) {
		cout << " array " << i << endl;
		cin >> MyArray[i];
	}
	for (int i = 0; i < size; i++) {
		cout << " array " << i << endl;
		cout << MyArray[i] << " ";
	}

	delete[] MyArray;
	MyArray = NULL;




}*/

/*#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	cout << "Enter rows and cols " << endl;
	cin >> rows >> cols;
	int** table = new int* [rows];
	for (int i = 0; i < rows; i++) {
		table[i] = new int[cols];
	}
	table[1][2] = 88;
	for (int i = 0; i < rows; i++) {
		delete[] table[i];
	}
	delete[] table;
	table = NULL;

}*/




/*#include<iostream>
using namespace std;
void MyFunction() {
	int* ptr = new int[5];
	ptr[2] = 10;
	cout << ptr[2];
	delete [] ptr;




}

int main() {

	MyFunction();



}*/


/*#include<iostream>
using namespace std;
int getNumber() {
	return 5;
	
}
int add(int a, int b) {
	return a + b;
}

int main() {
	//int(*funcPtr)() = getNumber;
	//cout << funcPtr() << endl;
	int (*funcPtr)(int, int) = add;
	cout << funcPtr(3, 4) << endl;
}*/



/*#include<iostream>
using namespace std;
bool b(const string& s) {
	int leftdigit = -1;
	int rightdigit = -1;
	int leftalpha = -1;
	int rightalpha = -1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' and s[i] <= '9') {
			rightdigit = i;
		}
		else if (isalpha(s[i]))
			rightalpha = i;


	}
	for (int i = s.length(); i >= 0; i--) {
		if (s[i] >= '0' and s[i] <= '9') {
			leftdigit = i;
		}
		else if (isalpha(s[i])) {
			leftalpha = i;
		}



	}
	if (leftalpha == -1)
		return 1;
	else if (leftdigit == -1)
		return 0;
	else if (leftalpha<leftdigit or rightalpha>rightdigit)
		return 0;
	else return 1;
}

int main() {
	cout << b("12 apples.") << endl; // 0
	cout << b("12 or 5 and 34.") << endl; // 1
	cout << b("apples") << endl; // 0
	cout << b("12,34") << endl;

}*/




/*#include<iostream>
#include<string>
using namespace std;
string c1(const string&s) {
	string digits = "";
	string other = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' and s[i] <= '9') // remove " " with 0 and you can add --- with numbers
			digits += s[i];
		else other += s[i];
	}
	return digits + other;
}

int main() {
	cout << c1("23-45-yes-67") << endl; // 234567--yes-
	cout << c1("!!abcd--123??") << endl; // 123!!abcd--??



}*/





/*#include<iostream>
#include<string>
using namespace std;
int main() {
	string s = "23-45-yes-67";
	string c = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' and s[i] <= '9') {
			c += s[i];
		}

	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' and s[i] <= '9') {
			
		}
		else {
			c += s[i];
		}
	}
	cout << c << endl;


}*/





/*#include<iostream>
#include<cstring>
using namespace std;
char* c2(char *s) {
	int left = 0;
	int right = strlen(s);
	while (left < right) {
		if (not isalpha(s[left]))
			++left;
		else if (not isdigit(s[right])) {
			--right;
		}
		else {
			char tmp = s[left];
			s[left] = s[right];
			s[right] = tmp;
			++left;
			--right;

		}
	}
	return s;
}

int main() {
	char s[] = "23-45-yes-67";
	cout << c2(s) << endl;
	char t[] = "!!abcd--123??";
	cout << c2(t) << endl;




}*/






/*#include<iostream>
using namespace std;
class mixedteam {
	string title;
	int blues;
	int reds;
public:
	mixedteam(const string&t, int b, int r) {
		title = t;
		blues = b;
		reds = r;
		if (blues < 1 or reds < 1 or blues * 2 < reds or reds * 2 < blues) {
			blues = reds = 1;
		}
		
	}

	void print();
	void change_blues(int bplus) {
		int bnew = blues + bplus;
		if (bnew < 1 or bnew * 2 < reds or reds * 2 < bnew);
		else blues = bnew;
	}
	void change_reds(int rplus) {
		int rnew = reds + rplus;
		if (rnew < 1 or rnew * 2 < blues or blues * 2 < rnew);
		else reds = rnew;

		
	}


};
void mixedteam::print() {
	cout << title << " " << blues << " " << reds << endl;
}
 int main() {
	 mixedteam b("Firts", 5, 3);
	 b.print();
	 b.change_blues(-4);
	 b.print();
	 b.change_blues(-3);
	 b.print();
	 b.change_reds(-2);
	 b.print();
	 b.change_blues(-5);
	 b.print();
	 b.change_reds(4);
	 b.change_reds(3);
	 b.print();
	 mixedteam c("Second", 55, 3);
	 c.print();


}*/


/*#include<iostream>
#include<cstring>
using namespace std;
char* c2(char* s) {
	int len = strlen(s);
	int left = 0;
	for (int i = 0; i < len; ++i) {

		if (isdigit(s[i])) {
			char tmp = s[left];
			s[left] = s[i];
			s[i] = tmp;
			++left;


		}
	}
	return s;


}


int main() {
	char s[] = "23-45-yes-67";
	cout << c2(s) << endl;
	char t[] = "!!abcd--123??";
	cout << c2(t) << endl;
}*/







/*#include<iostream>
using namespace std;
int main() {
	const int Size = 100;
	int count = 0;
	char arr[Size];
	for (int i = 0; i < Size; i++) {
		cin >> arr[i];
		if (arr[i] == '.') {
			break;
		}
		count++;
	}
	bool flag = 1;
	for (int i = 0; i < count; i++) {
		if (arr[i] != arr[count - 1 - i]) {
			flag = 0;
		}
	
	}	
	if (flag)
		cout << " Yes " << endl;
	else cout << " No " << endl;



}*/




#include<iostream>
using namespace std;
int main() {
	const int Size = 20;
	int temp;
	int index2 = 0;
	int arr[Size];
	for (int i = 0; i < Size; i++) {
		cout << " Enter " << i << " number: ";
		cin >> arr[i];
		for (int j = 1; j <= i; j++) {
			if (i > 0 && arr[i - j] < arr[i-index2]) {
				temp = arr[i-index2];
				arr[i-index2] = arr[i - j];
				arr[i - j] = temp;
				index2++;
			}
		}
		cout << "Line: ";
		for (int k = 0; k <= i; k++) {
			cout << arr[k] << " ";

		}
		cout << endl;

		index = 1;
	}
}

