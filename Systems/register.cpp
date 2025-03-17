#include<iostream>
#include<fstream>
#include<string>
using namespace std;



class temp {
	string searchName, searchPass, searchEmail;
	string userName, Email, password;
	fstream file;
public:
	void login();
	void signUp();
	void forgot();


}obj;


int main() {
	char choice;


	do {
		
		cout << "\n1- Login";
		cout << "\n2- Sign-Up";
		cout << "\n3- Forgot Password";
		cout << "\n4- Exit";
		cout << "\nEnter Your Choose: ";
		cin >> choice;
		system("cls");
		switch (choice) {
		case '1':
			obj.login();
			break;
		case '2':
			obj.signUp();
			break;
		case '3':
			obj.forgot();
			break;
		case '4':
			cout << "Bye!";
			return 0;
			break;
		default:
			cout << "Invalid Selection....!";

		}
	} while (choice != '4');

}



void temp::signUp() {
	cout << "Enter Your User Name: ";
	cin.ignore();
	getline(cin, userName);
	cout << "Enter Your Email: ";
	getline(cin, Email);
	cout << "Enter Your Password: ";
	getline(cin, password);

	file.open("loginData.txt", ios::out | ios::app);
	file << userName << "*" << Email << "*" << password << endl;
	file.close();

}



void temp::login() {
	cout << "-----------LOGIN----------" << endl;
	cout << "Enter Your User Name: ";
	cin.ignore();
	getline(cin, searchName);
	cout << "Enter Your Password: " ;
	getline(cin, searchPass);

	file.open("loginData.txt", ios::in);
	getline(file, userName,'*');
	getline(file, Email,'*');
	getline(file, password,'\n');
	while (!file.eof()) {
		if (userName == searchName) {
			if (password == searchPass) {
				cout << "\nAccount Login Succesfull...";
				cout << "\nUsername: " << userName << endl;
				cout << "\nEmail: " << Email << endl;
			}
			else {
				cout << "Password is Incorre...!";
			}
		}
		getline(file, userName, '*');
		getline(file, Email, '*');
		getline(file, password, '\n');
	}

	file.close();


}


void temp::forgot() {

	cout << "Enter Your User Name: ";
	cin.ignore();
	getline(cin, searchName);
	cout << "Enter Your Email: ";
	getline(cin, searchEmail);

	file.open("loginData.txt", ios::in);
	getline(file, userName, '*');
	getline(file, Email, '*');
	getline(file, password, '\n');

	while (!file.eof()) {
		if (userName == searchName) {
			if (Email == searchEmail) {
				cout << "\nAccount Found...!" << endl;
				cout << "Your Password : " << password << endl;
			}
			else {
				cout << "Not found...\n";
			}
		}
		else {
			cout << "\nNot found...!\n";
		}
		getline(file, userName, '*');
		getline(file, Email, '*');
		getline(file, password, '\n');
	}
	file.close();

}