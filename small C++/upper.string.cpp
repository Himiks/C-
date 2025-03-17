#include<iostream>
#include<string>
using namespace std;
int main() {
	string s("Hello World!!!! ");
	//s.size();
	//decltype(s.size())
	int punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt<< " " << s;

}
