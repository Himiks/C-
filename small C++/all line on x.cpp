#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input_string = " Hello people on the Earth ";
	string output_string;
	for (char ch : input_string) {
		output_string += 'X';
	}
	cout << output_string << endl;
	return 0;
}

