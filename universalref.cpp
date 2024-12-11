#include<iostream>
#include<string>
#include<set>
#include<chrono>
#include<utility>
#include<ctime>
#include<iomanip>

using namespace std;

multiset<string> names;

void log(chrono::system_clock::time_point now, const string& message) {
	time_t now_time = chrono::system_clock::to_time_t(now);
	tm local_time;
	localtime_s(&local_time, &now_time);
	cout << "[" << put_time(&local_time, "%F %T") << "]" << '\n';
}

template<typename T> 
void logAndAdd(T&& name) {
	auto now = chrono::system_clock::now();
	log(now, "logAndAdd");
	names.emplace(forward<T>(name));
}


int main() {

	string petName("Darla");
	logAndAdd(petName);
	logAndAdd(std::string("Persephone"));
	logAndAdd("Patty Dog");

	cout << "Names in multiset:\n";
	for (const auto& name : names) {
		cout << name << '\n';
	}


}