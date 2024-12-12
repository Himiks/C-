#include<iostream>
using namespace std;
class person {
	string name;
	int birthyear;
public:
	person(const string& n, int b) {
		name = n;
		birthyear = b;
		cout << "Constructor person " << endl;
	}
	void print() {
		cout << name << " " << birthyear << endl;
	}




};

class student :public person {
	int studyyear;
public:
	student(const string& n, int b, int s) :person(n, b) {
		studyyear = s;
		cout << "Constructor student" << endl;

	}

	void print() {
		person::print();
		cout << studyyear << endl;
	}



};

class teacher :public person {
	string position;
public:
	teacher(const string& n, int b, const string& p) :person(n, b) {
		position = p;
		cout << "Constructor teacher" << endl;
	}
	void print() {
		person::print();
		cout << position << endl;
	}


};

int main() {
	person p("Peter", 1995);
	p.print();
	student s("Ann", 2000, 1);
	s.print();
	teacher t("John", 1971, "professor");
	t.print();

}



#include<iostream>
using namespace std;
class person {
	string name;
	int birthyear;
public:
	person(const string& n, int b) {
		name = n;
		birthyear = b;
		cout << "Constructor person" << endl;
	}
	virtual void print() {
		cout << name << " " << birthyear << endl;
	}
	virtual ~person() {
		cout << "Destructor person " << endl;
	}
};

class student :public person {
	int studyyear;


public:
	student(const string& n, int b, int s) :person(n, b) {
		studyyear = s;
		cout << "Constructor student" << endl;
	}

	void print() {
		person::print();
		cout << studyyear << endl;
	}

	~student() {
		cout << "Destructor student " << endl;
	}



};

class teacher :public person {
	string position;
public:
	teacher(const string& n, int b, const string& p) :person(n, b) {
		position = p;
		cout << "Constructor teacher" << endl;
	}

	void print() {
		person::print();
		cout << position << endl;
	}

	~teacher() {
		cout << "Destructor teacher" << endl;
	}


};






int main() {
	person* p = new person("Peter", 1995);
	p->print();
	delete p;
	person* s = new student("Ann", 2000, 1);
	s->print();
	delete s;
	person* t = new teacher("John", 1971, "professor");
	t->print();
	delete t;


}



#include<iostream>
using namespace std;
class person {
protected:
	string name;
	int birthyear;
public:
	person(const string& n, int b) {
		name = n;
		birthyear = b;
		cout << "Constructor person" << endl;
	}

	person() {
		cout << "Constructor person()" << endl;
	}
	void print() {
		cout << name << " " << birthyear << endl;
	}
	~person() {
		cout << "Destructor person " << endl;
	}


};

class student :  public person {
protected:
	int studyyear;
public:
	student(const string& n, int b, int s) :person(n, b) {
		studyyear = s;
		cout << "Constructor student " << endl;
	}
	virtual void print() {
		person::print();
		cout << studyyear << endl;
	}
	virtual ~student() {
		cout << "Destructor student " << endl;
	}


};

class teacher : virtual public person {
protected:
	string position;
public:
	teacher(const string& n, int b, const string& p) :person(n, b) {
		position = p;
		cout << "Constructor teacher" << endl;
	}

	virtual void print() {
		person::print();
		cout << position << endl;

	}
	virtual ~teacher() {
		cout << "Destructor teacher " << endl;
	}


};


class stperson :public student, public teacher {
public:
	stperson(const string& n, int b, int s, const string &p):
		student(n, b, s),
		teacher(n, b, p){ 
		cout << "Constructor STP" << endl;
	}

	void print() {
		student::print();
		

	}

	~stperson() {
		cout << "Destructor STP" << endl;
	}

	
};
int main() {

	student* p = new stperson("Liz", 1995, 1, "professor");
	p->print();
	delete p;

}


#include<iostream>
using namespace std;


class person {
	string name;
	int birthyear;
public:
	person(const string& n, int b) {
		name = n;
		birthyear = b;
		cout << "Constructor person " << endl;
	}
	virtual void print() {
		cout << name << " " << birthyear << endl;
	}
	virtual ~person() {
		cout << "Destructor person" << endl;
	}


};

class student : public person {
	int studyyear;
public:
	student(const string& n, int b, int s) :person(n, b) {
		studyyear = s;
		cout << "Constructor student" << endl;
	}
	void print() {
		person::print();
		cout << studyyear << endl;

	}

	~student() {
		cout << "Destructor student " << endl;
	}

};


class teacher : public person {
	string position;
public:
	teacher(const string& n, int b, const string& p) :person(n, b) {
		position = p;
		cout << "Constructor teacher" << endl;
	}

	void print() {
		person::print();
		cout << position << endl;

	}

	~teacher() {
		cout << "Destructor teacher " << endl;
	}
};

int main() {
	person* pp[3];
	pp[0] = new person("Peter", 1995);
	pp[1] = new student("Ann", 2000, 1);
	pp[2] = new teacher("John", 1971, "professor");
	for (int i = 0; i < 3; ++i) {
		pp[i]->print();
		delete pp[i];
	}

}


#include<iostream>
using namespace std;
class person {
	string name;
	int birthyear;
public:
	person(const string& n, int b) {
		name = n;
		birthyear = b;
	}
	void print() {
		cout << name << " " << birthyear << endl;
	}


};

int main() {
	void** pp = new void* [3];
	pp[0] = new person("Peter", 2000);
	pp[1] = new int;
	*((int*)pp[1]) = 777;
	pp[2] = new string("Hello");
	((person*)pp[0])->print();
	delete(person*)pp[0];
	cout << *((int*)pp[1]) << endl;
	delete(int*)pp[1];



}




#include<iostream>
#include<vector>
using namespace std;

class myvector {
	vector<int> aa;
public:
	int size()const {
		return aa.size();
	}
	void push_back(int m);
	 int& operator[](int i) {
		return aa[i];
	}
	 
	 //or 
//const int& operator[](int i) const {
	//return aa[i];
//}
	 
	 int at(int i) const {
		 return aa[i];
	 }
	 
};

void myvector::push_back(int m) {
	aa.push_back(m);
}
void print(const myvector& v) {
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
#include<map>
#include<fstream>
#include<string>
using namespace std;

void Output(ofstream& fout, map<string, int>& Words) {
	fout.open("newWords.txt");
	if (fout.is_open()) {
		for (auto& w : Words) {
			fout << w.first << " " << w.second << endl;
		}
	}
	else {
		cout << "File didn't opened " << endl;
	}
	fout.close();

}

void addToWordMap(const string& word, map<string, int>& Words) {
	if (word.size() >= 2) {
		Words[word]++;
	}
}

void Count(ifstream& fin, ofstream& fout, map<string, int> &Words) {
	string s;
	string temp;
	if (fin.is_open() and fout.is_open()) {
		while (getline(fin, s)) {
			for (auto w : s) {
				if (isalpha(w)) {
					temp += w;
				}
				else {
					addToWordMap(temp, Words);
					temp = "";
				}
			}
			addToWordMap(temp, Words);
			temp = "";

		}
	}
	else {
		cout << "Files didn't opened " << endl;
	}

	fout.close();
	fin.close();
	
}

int main() {
	ifstream fin("words.txt");
	ofstream fout("newWords.txt");
	map<string, int> Words;
	Count(fin, fout, Words);
	Output( fout, Words);


}






