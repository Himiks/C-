#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int CountExtraAdjacentSpaces(fstream& file) {
	int cnt = 0;
	string line;
	while (getline(file, line)) {
		for (int i = 1; i < line.length(); i++) {
			if (line[i] == '*' and line[i - 1] == '*') {
				cnt++;
			}
		}
	}
	file.close();
	return cnt;
}



int main() {
	fstream fin("words.txt");
	cout << CountExtraAdjacentSpaces(fin);

}



/*#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void removeExtraAdjacentSpaces(fstream& file) {
	ofstream fout ("new.txt");
	string line;
	while (getline(file, line)) {
		string line2;
		line2+= line[0];
		for (int i = 1; i < line.length(); i++) {
			if (line[i] == '*' and line[i - 1]== '*') {

			}
			else {
				line2 += line[i];
			}
		}
		fout << line2 << endl;
	}
	file.close();
	fout.close();

}

int main() {
	fstream fin("words.txt");
	removeExtraAdjacentSpaces(fin);
}*/



/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;

	elem(int data) :
		num(data), next(NULL)
	{}
};


void print(elem* first) {
	elem* current = first;
	while (current) {
		cout << current->num << " ";
		current = current->next;
	}
	cout << endl;

}

void rem(elem*& first) {
	elem* current = first;
	while (first != NULL) {
		current = current->next;
		delete first;
		first = current;

	}
}


void Add(elem*& first, elem*& last, int data) {
	elem* newNode = new elem(data);

	if (first == NULL) {
		first = last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;

	}

}

void incDecOdd(elem* first) {
	elem* current = first;
	while (current != NULL) {
		if (current->num % 2 != 0) {
			if (current->num < 0) {
				current->num++;
			}
			else {
				current->num--;
			}
		}
		current = current->next;
	}

}

void deleteFirstEvenBeforeOdd(elem*&first) {

	while (first->num % 2 == 0 and first->next->num % 2 != 0) {
		elem* p = first->next;
		delete first;
		first = p;
	}



	elem* current = first; 
	elem* current2 = current->next;
	elem* current3 = current2->next;
	while (current3 != NULL) {
		if (current2->num % 2 == 0 and current3->num % 2 != 0) {   
			current->next = current3;
			delete current2;

		}
		else {
			current = current2;
			current2 = current3;
			current3 = current3->next;
		}


	}


}




int firstDuplicateDistance2(elem*& first) {
	int pos = 0; 
	elem* current = first;
	elem* current2 = current->next->next;
	while (current2 != NULL) {
		if (current->num == current2->num) {
			return pos;
		}
		pos++;
		current = current->next;
		current2 = current2->next;
		



	}
	return -1;

}

*/
/*void deleteAllBiggerThanTheBiggestEven(elem*& first) {
	elem* current = first;
	int even = -1;
	while (current != NULL) {
		if (current->num % 2 == 0) {
			if (current->num > even) {
				even = current->num;
			}
		}
		current = current->next;
		
	}

	current = first;
	while (current->num > even) {
		elem* temp = first;
		first = first->next;
		delete temp;
	}

	current = first;
	elem* current2 = current->next;
	while (current2 != NULL) {
		if (current2->num > even) {
			current->next = current2->next;
			delete current2;
			current2 = current->next;
		}
		else {
			current = current2;
			current2 = current2->next;
		}



	}





}


int main() {
	{
		int aa[] = { 13,7,5,11,4,8,9,6,25 };
		elem* first = NULL, * last;
		for (int i = 0; i < 9; i++) {
			Add(first, last, aa[i]);
		}
		print(first);
		deleteAllBiggerThanTheBiggestEven(first); // 7,5,4,8,6
		print(first);
		rem(first);
	}
	{
		int aa[] = { 1,3,5 };
		elem* first = NULL, * last;
		for (int i = 0; i < 3; i++) {
			Add(first, last, aa[i]);
		}
		print(first);
		deleteAllBiggerThanTheBiggestEven(first); // 1,3,5
		print(first);
		rem(first);
	}
	{
		int aa[] = { 4,6,2 };
		elem* first = NULL, * last;
		for (int i = 0; i < 3; i++) {
			Add(first, last, aa[i]);
		}
		print(first);
		deleteAllBiggerThanTheBiggestEven(first); // 4,6,2
		print(first);
		rem(first);
	}

}*/




/*#include<iostream>
#include<list>
using namespace std;

void incDecOdd(list<int>&myList) {
	for (auto it = myList.begin(); it != myList.end(); it++) {
		if (*it % 2 != 0) {
			if (*it < 0) {
				*it+=1;
			}
			else {
				*it-=1;
			}
		}

	}

}


void deleteFirstEvenBeforeOdd(list<int> &myList) {
	auto it = myList.begin();
	auto it2 = myList.begin();
	it2++;
	while (it2 != myList.end()) {
		if (*it % 2 == 0 and *it2 % 2 != 0) {
			it = myList.erase(it);
			it2++;
			return;
		}
		else {
			it++;
			it2++;
		}

	}


}


int main() {
	list<int> list = { 2,4,8,6,5 };
	for (auto a : list) {
		cout << a << " ";
	}
	cout << endl;

	deleteFirstEvenBeforeOdd(list);

	for (const auto& a : list) {
		cout << a << " ";
	}
	cout << endl;
}
*/




/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void printLastLineWithDigits(fstream& fin) {
	string line;
	string s1;
	while(getline(fin, line)) {
		for (int i = 0; i < line.length(); i++) {
			if (isdigit(line[i])) {
				s1 = line;
			}
		}
	}
	fin.close();
	cout << s1 << endl;

}

int main() {
	fstream fin("words.txt");
	printLastLineWithDigits(fin);

}*/



/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void printDigitsAfterNonDigitLine(fstream& fin) {
	string line;
	string s2;
	string s3;
	bool withoutDigit = false;
	while (getline(fin, line)) {
		s3 = "";
			for (int i = 0; i < line.length(); i++) {
				if (isdigit(line[i])) {
					withoutDigit = true;
				}
			}
		if (withoutDigit == false) {
			s2 = line;
		}
		if (withoutDigit == true and s2 != " ") {
			s3 = line;
			s2 = " ";
			withoutDigit = false;

		}


	}
	if (s3 != "") {
		cout << s3 << endl;
	}



}


int main() {
	fstream fin("words.txt");
	printDigitsAfterNonDigitLine(fin);


}*/



/*#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	char filename[] = "words.txt";
	fstream fin(filename, ios::in);
	string s, sprint;
	bool lineok = false;
	while (getline(fin, s)) {
		if (lineok) {
			for (auto c : s) {
				if (c >= '0' and c <= '9')
					sprint += c;
			}
		}
		int cnt = 0;
		for (auto c : s) {
			if (c >= '0' and c <= '9') ++cnt;
		}
		lineok = (cnt == 0);
		if (lineok) sprint = "";
	}
	fin.close();
	if (sprint == "") cout << "no digits to print" << endl;
	else cout << sprint << endl;
}*/



/*#include<iostream>
#include<list>
using namespace std;
int firstDuplicateDistance2(list<int>& myList) {
	auto it = myList.begin();
	auto it2 = myList.begin();
	int cnt = 0;
	advance(it2, 2);
	while (it2 != myList.end()) {
		if (*it == *it2) {
			return cnt;
		}
		cnt++;
		it++;
		it2++;
	}

}

	void deleteAllBiggerThanTheBiggestEven(list<int>& myList) {
		auto it = myList.begin();
		int even = 0;
		while (it != myList.end()) {
			if (*it % 2 == 0 and *it > even) {
				even = *it;
			}
			it++;
		}
		if (even != 0) {
			it = myList.begin();
			while (it != myList.end()) {
				if (*it > even) {
					it = myList.erase(it);
				}
				else {
					it++;
				}

			}
		}




	}

int main() {
	{
		list<int> aa = { 13,7,5,11,4,8,9,6, 25 };
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
		deleteAllBiggerThanTheBiggestEven(aa); // 7,5,4,8,6
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
	}
	{
		list<int> aa = { 1,3,5 };
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
		deleteAllBiggerThanTheBiggestEven(aa); // 1,3,5
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
	}
	{
		list<int> aa = { 4,6,2 };
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
		deleteAllBiggerThanTheBiggestEven(aa); // 4,6,2
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
	}



}*/










