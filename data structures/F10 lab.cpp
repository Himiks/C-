#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	ifstream str("palindrome.txt");
	ofstream out("out.txt");
	string line;

	if (str.is_open() && out.is_open()) {
		while (getline(str, line)) {
			bool symLine = true;
			bool symbol = false; // the variable for checking whether the user enetred number
			if (!line.empty() && line.size() <= 40)
				for (int i = 0, j = 1; i < line.size(); i++, j++) {

					if (isalpha(line[i])) {
						if (!isalpha(line[line.size() - j])) {
							j++;
						}

						symbol = true;
						if (line[i] != line[line.size() - j]) {
							symLine = false;
						}


					}

				}

			if (symbol and symLine and !line.empty() and line.size() <= 40) {
				out << line << endl;
			}
		}
		if (str.good() == false and str.eof() == false) {
			cout << "There in the file was error while reading the line " << endl;
			return 1;
		}
		str.close();
		out.close();
	}
	else {
		cout << "The file didn't open " << endl;
		return 1;
	}


	return 0;
}
