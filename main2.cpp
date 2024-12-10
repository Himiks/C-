#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class Book {
	string id, name, author, search;
	fstream file;
public:
	void addBook();
	void showAll();
	void extractBook();

};


int main() {
	Book book;
	char choice;
	do {
		cout << "-------------------------" << endl;
		cout << "1. Show all books: " << endl;
		cout << "2. Extract book: " << endl;
		cout << "3. Add book(ADMIN) " << endl;
		cout << "4. Exit " << endl;
		cout << "-------------------------" << endl;
		cout << "Choose the option: ";
		cin >> choice;
		system("cls");
		switch (choice) {
		case '1':
			book.showAll();
			break;
		case '2':
			book.extractBook();
			break;
		case'3':
			book.addBook();
			break;
		case '4':
			break;
		default:
			cout << "Incorrect input.....!";




		}


	} while (choice != '4');


}



void Book::addBook() {
	cout << "\nEnter Book ID: ";
	cin.ignore();
	getline(cin, id);
	cout << "Enetr Book Name: ";
	getline(cin, name);
	cout << "Enter Book's Author name: ";
	getline(cin, author);

	file.open("BookData.txt", ios::out | ios::app);
	file << id << "*" << name << "*" << author << endl;
	file.close();

}


void Book::showAll() {
	file.open("BookData.txt", ios::in);
	getline(file, id, '*');
	getline(file, name, '*');
	getline(file, author, '\n');
	cout << "\n\n";
	cout << "\t\t Book id \t\t\t Book Name \t\t\t Author's Name" << endl;
	while (!file.eof()) {
		cout << "\t\t " << id << "\t\t" << name << "\t\t" << author << endl;
		getline(file, id, '*');
		getline(file, name, '*');
		getline(file, author, '\n');
	}
	file.close();

}


void Book::extractBook() {
	showAll();
	cout << "Enter Book Id you would like to find: ";
	cin.ignore();
	getline(cin, search);
	file.open("BookData.txt", ios::in);
	getline(file, id, '*');
	getline(file, name, '*');
	getline(file, author, '\n');
	cout << "\n\n";
	while (!file.eof()) {
		if (search == id) {
			cout << "\t\t " << id << "\t\t" << name << "\t\t" << author << endl;
			cout << "Book Extracted Successfully..!";
		}
		getline(file, id, '*');
		getline(file, name, '*');
		getline(file, author, '\n');

	}
	file.close();
}
