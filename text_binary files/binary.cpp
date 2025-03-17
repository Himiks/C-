#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream fb("binout.txt", ios::out | ios::binary);
	int a = 10, b = 15;
	int cc[4] = { 3,5,7,9 };
	char aa[] = "Hello, World!!!";
	fb.write(aa, 16);
	fb.write((char*)cc, 16);
	fb.write(reinterpret_cast<char*>(&b), 4);
	fb.write((char*)&a, 4);
	fb.close();
	fstream  fb("binout.txt", ios::in | ios::binary);
	int a, b;
	int cc[4];
	char aa[14];
	fb.read(aa, 14);
	for (auto& a:aa) {
		cout << a << " ";
	}
	cout << endl;
	fb.read((char*)cc, 16);
	for (auto& c : cc) {
		cout << c << " ";
	}
	cout << endl;
	fb.read(reinterpret_cast<char*>(&b), 4);
	cout << b << endl;
	fb.read((char*)&a, 4);
	fb.close();


}



/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char n[15];
	char a;
	fstream f("student.txt", ios::in | ios::binary);
	f.read(n, 15);
	f.read(&a, 1);
	while (not f.eof()) {
		cout << n << " " << (int)a << endl;
		f.read(n, 15);
		f.read(&a, 1);
	}
	f.close();
}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream fout;
	unsigned short x = 8675;
	fout.open("file.dat", ios::out | ios::binary);
	if (fout.is_open()) {
		fout.write(reinterpret_cast<char*>(&x), sizeof(unsigned short));
		fout.close();
	}
	else {
		cout << "Error" << endl;
	}

	fout.open("file.dat", ios::in | ios::binary);
	if (fout) {
		unsigned short y;
		fout.read(reinterpret_cast<char*>(&y), sizeof(unsigned short));
		fout.close();
		cout << y << endl;
	}
	else {
		cout << "Error" << endl;
	}



}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream fout;
	char c = 'A';
	fout.open("file.dat", ios::out | ios::binary);
	if (fout.is_open()) {
		fout.write(&c, sizeof(unsigned short));
		fout.close();
	}
	else {
		cout << "Error" << endl;
	}

	fout.open("file.dat", ios::in | ios::binary);
	if (fout) {
		char y;
		fout.read(&y, sizeof(unsigned short));
		fout.close();
		cout << y << endl;
	}
	else {
		cout << "Error" << endl;
	}



}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream fout;
	fout.open("file.dat", ios::out | ios::binary);
	if (fout.is_open()) {
		int a[] = { 8,6,7,5,3,0,9 };
		fout.write(reinterpret_cast<char*>(a), sizeof(a));
		fout.close();
	}
	else {
		cout << "Error" << endl;
	}

	int b[7];
	fout.open("file.dat", ios::in | ios::binary);
	if (fout) {
		fout.read(reinterpret_cast<char*>(b), sizeof(b));
		fout.close();
		for (auto i : b) {
			cout << i << " ";
		}
	}
	else {
		cout << "Error" << endl;
	}



}*/


/*#include<iostream>
#include<fstream>
using namespace std;

class abc {
	int roll;
	char name[20];
public:
	void getdata(int, char[]);
	void update(int, int, char[]);
	void testcase1();
	void testcase2();
	void putdata();

};

void abc :: putdata() {
	cout << "roll no: ";
	cout << roll;
	cout << "\nname ";
	cout << name;
}


void abc::getdata(int a, char str[]) {
	roll = a;
	strcpy_s(name, str);
}


void abc::update(int rno, int r, char str[]) {
	int pos, flag = 0;
	fstream fs;
	fs.open("file.dat", ios::in | ios::out | ios::binary);

	while (!fs.eof()) {
		pos = fs.tellg();
		fs.read((char*)this, sizeof(abc));
		if (fs.is_open()) {
			if (rno == roll) {
				flag = 1;
				getdata(r, str);
				fs.seekp(pos);
				fs.write((char*)this, sizeof(abc));
				putdata();
				break;
			}


		}
		else {
			cout << "Error" << endl;
		}



	}
	fs.close();

	if (flag == 1) {
		cout << "\nnrecord successfully modified\n";
	}
	else {
		cout << "\nnrecord not found\n";
	}


}


void abc::testcase1() {
	int rno, r;
	char name[20];
	rno = 123;
	r = 11;

	strcpy_s(name, "Geek");
	update(rno, r, name);



}


void abc::testcase2() {
	int rno, r;
	char name[20];
	rno = 4;
	r = 14;

	strcpy_s(name, "Geek2");
	update(rno, r, name);



}

int main() {

	ofstream fout("file.dat", ios::out | ios::binary);
	if (fout) {
		int roll = 123;
		string name = "John";
		fout.write(reinterpret_cast<char*>(&roll), sizeof(roll));
		fout.write(name.c_str(), name.size() + 1);
		fout.close();
	}
	else {
		cout << "Error" << endl;
	}



	abc s;
	s.testcase1();
	s.testcase2();
	return 0;




}
*/


/*#include<iostream>
#include<fstream>
using namespace std;

int main() {
	int a = 10, b = 15;
	int cc[] = { 3,5,7,9 };
	char aa[] = "Hello, World!!!";

	// Запись данных в файл
	fstream fb("file.dat", ios::out | ios::binary);
	fb.write(aa, sizeof(aa));
	fb.write((char*)cc, sizeof(cc)); // Используем sizeof(cc) для правильного размера
	fb.write(reinterpret_cast<char*>(&b), sizeof(b));
	fb.write((char*)&a, sizeof(a));
	fb.close();

	// Чтение данных из файла
	fb.open("file.dat", ios::in | ios::binary);
	fb.read(aa, sizeof(aa));
	for (auto i : aa) {
		cout << i << " ";
	}
	cout << endl;

	fb.read((char*)cc, sizeof(cc)); // Используем sizeof(cc) для правильного размера
	for (int i = 0; i < sizeof(cc) / sizeof(int); i++) {
		cout << cc[i] << " ";
	}
	cout << endl;

	fb.read(reinterpret_cast<char*>(&b), sizeof(b));
	cout << b << endl;

	fb.read((char*)&a, sizeof(a));
	cout << a << endl;

	fb.close();

	return 0;
}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	int cc[4] = { 3,5,7,9 };
	fstream fb("file.dat", ios::out | ios::binary);
	for (int i = 0; i < 4; i++) {
		fb.write((char*)&cc[i], 1);
	}
	fb.close();



}*/


/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char nn[3][15] = { "Ann", "Peter", "Liz" };
	int aa[3] = { 19,20,21 };
	fstream fb("file.dat", ios::out | ios::binary);
	for (int i = 0; i < 3; i++) {
		fb.write(nn[i], 15);
		fb.write((char*)&aa[i], 1);
	}
	fb.close();


	char n[15];
	char a;
	fb.open("file.dat", ios::in | ios::binary);
	fb.read(n, 15);
	fb.read(&a, 1);
	while (not fb.eof()) {
		cout << n << " " << (int)a << endl;
		fb.read(n, 15);
		fb.read(&a, 1);

	}
	fb.close();


}*/


/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char n[15];
	int a = 0;
	fstream f("file.dat", ios::in | ios::binary);
	f.seekg(-1, ios::end);
	int filesize = f.tellg();
	cout << filesize << endl;
	f.read(n, 5);
	cout << n << endl;
	f.seekg(filesize - 16);
	f.read(n, 15);
	f.read((char*)&a, 1);
	cout << n << " " << a << endl;
	f.close();

}*/




/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char n[15];
	int a = 0;
	fstream f("file.dat", ios::in | ios::binary);
	f.seekg(-16, ios::end);
	f.read(n, 15);
	f.read((char*)&a, 1);
	cout << n << " " << a << endl;
	while (f.tellg() > 16) {
		f.seekg(-32, ios::cur);
		f.read(n, 15);
		f.read((char*)&a, 1);
		cout << n << " " << a << endl;
	}
	f.close();


}
*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char n[15];
	char a;
	fstream f("file.dat", ios::in | ios::out | ios::binary);
	f.read(n, 15);
	f.read(&a, 1);
	int filesize = f.tellg();
	cout <<filesize<< endl;
	bool notempty = false;
	while (!f.eof()) {
		notempty = true;
		f.seekp(-1, ios::cur);  // Why???
		++a;
		f.write(&a, 1);
		f.seekp(-1, ios::cur);
		f.read(&a, 1);
		f.read(n, 15);
		f.read(&a, 1);
		cout << n << " " << (int)a << endl;
	

	}
	f.close();
}*/



/*#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char n[15];
	char a;
	fstream f("file.dat", ios::in | ios::out | ios::binary);
	f.read(n, 15);
	f.read(&a, 1);
	bool notempty = false;
	while (!f.eof()) {
		notempty = true;
		string nn = n; nn += '!';
		f.seekg(-16, ios::cur);
		f.write(nn.c_str(), 15);
		f.seekg(1, ios::cur);
		f.read(n, 15);
		f.read(&a, 1);

	}


}*/

