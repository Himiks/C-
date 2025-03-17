#include<iostream>
#include<fstream>
using namespace std;
struct Music {
	int time;
	char action;
	string personCode;
	string cdName;


};
// make a linked list

int main() {
	ifstream fin("exchange.in");
	ofstream fout("exchange.out");
	Music person;
	int index = 0;
	Music person2;
	int time = 0;
	int pos = 0;
	while (fin >> person.time >> person.action >> person.personCode >> person.cdName) {
	
		if (person.action == 'A') {
			ifstream fin2("exchange.in");
			fin2.seekg(0, ios::beg);

			while (fin2 >> person2.time >> person2.action >> person2.personCode >> person2.cdName)
			{
				if ((person.action == 'A' and person2.action == 'B') and (person.cdName == person2.cdName) and (person.time > time or person2.time > time)) {
	
					if (person2.time > person.time) {
						fout << person2.time << " " << person.personCode << " " << person2.personCode << endl;
						index++;
						time = person2.time;
						break;
					}

					else if (person.time > person2.time) {
							fout << person.time << " " << person.personCode << " " << person2.personCode << endl;
							index++;
							time = person.time;
							break;

					}

				}

			}
			fin2.close();
		}
	}
	 


	if (index == 0) {
		fout << "0" << endl;
	}
	fout.close();
	fin.close();


}
