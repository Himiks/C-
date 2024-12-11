#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class Contact {
private:
	string phoneNo, name, address, desc;
	string search;
	fstream file;
public:
	void AddContact();
	void ShowAll();
	void SearchContact();
};


int main() {

	Contact contact;
	char choice;
	cout << "1. Add Contact: " << endl;
	cout << "2. Show all contacts: " << endl;
	cout << "3. Search for a contact" << endl;
	cout << "4. exit" << endl;
	cout << "Enter your choice: ";
	
	do {
		
		cin >> choice;
		system("cls");
		switch (choice) {
		case '1':
			contact.AddContact();
			break;
		case '2':
			contact.ShowAll();
			break;
		case '3':
			contact.SearchContact();
			break;
		case '4':
			cout << "Bye!" << endl;
			break;

		default:
			cout << "Incorrect input....!" << endl;
			break;
		}

	} while (choice != '4');



}

void Contact::AddContact() {
	cout << "Enter a phone number: ";
	cin.ignore();
	getline(cin, phoneNo);
	cout << "Enter a name: ";
	getline(cin, name);
	cout << "Enter a address: ";
	getline(cin, address);
	cout << "Enter a description: ";
	getline(cin, desc);
	
	file.open("data.csv", ios::out | ios::app);
	file << phoneNo << "," << name << "," << address << "," << desc << "\n";
	file.close();
}

void Contact::ShowAll() {
	file.open("data.csv", ios::in);
	getline(file, phoneNo, ',');
	getline(file, name, ',');
	getline(file, address, ',');
	getline(file, desc, '\n');
	while (!file.eof()) {
		cout << "Phone number: " << phoneNo << endl;
		cout << "Name : " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Description: " << desc << endl;

		getline(file, phoneNo, ',');
		getline(file, name, ',');
		getline(file, address, ',');
		getline(file, desc, '\n');
	}

	file.close();

}


void Contact::SearchContact() {

	cout << "Enter your phone number: ";
	cin.ignore();
	getline(cin, search);

	file.open("data.csv", ios::in);
	getline(file, phoneNo, ',');
	getline(file, name, ',');
	getline(file, address, ',');
	getline(file, desc, '\n');
	while (!file.eof()) {
		if (search == phoneNo) {
			cout << "Phone number: " << phoneNo << endl;
			cout << "Name : " << name << endl;
			cout << "Address: " << address << endl;
			cout << "Description: " << desc << endl;
		}

		getline(file, phoneNo, ',');
		getline(file, name, ',');
		getline(file, address, ',');
		getline(file, desc, '\n');
	}

	file.close();
}