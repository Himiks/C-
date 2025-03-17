#include<iostream>
#include<fstream>
using namespace std;
struct Music {
	int time;
	char action;
	string personCode;
	string cdName;


};
int main() {
	ifstream fin("exchange.in");
	ofstream fout("excha.out");
	Music person;
	Music person2;
	int pos = 0;
	fout << "Hello";
	while (fin >> person.time >> person.action >> person.personCode >> person.cdName) {
		pos = fin.tellg();
		while (fin >> person2.time >> person2.action >> person2.personCode>>person2.cdName )
		{
			
			if (person.action == 'A') {
				if (person2.action == 'B' and person2.cdName == person.cdName) {
					fout << person2.time << " " << person.personCode << " " << person2.personCode << endl;
					break;

				}
			}
			else if (person.action == 'B') {
				if (person2.action == 'A' and person2.cdName == person.cdName) {
					fout << person2.time << " " << person.personCode << " " << person2.personCode << endl;
					break;

				}
			}

		}
		//fout.close();
		//fout.open("exchange.in");

		fin.seekg(pos);

	}
	fout.close();
	fin.close();


}






