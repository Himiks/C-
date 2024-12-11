#include<iostream>
#include<fstream>
using namespace std;


class Store {
	string itemID, ItemName;
	int itemQuantity, itemPrice;
	fstream file, file1;
	int totalAmount, quantity, itemRate;
	string search;
	char _choice;
public:
	void addProduct(void);
	void viewProduct(void);
	void buyProduct(void);


}obj;

int main() {
	char choice;


	do {
		cout << "press 1 --> Start Shoping";
		cout << "press 0 --> Exit";

		cin >> choice;
		switch (choice) {

		case 'A':
			obj.addProduct();
			break;
		case 1:
			obj.viewProduct();
			obj.buyProduct();
			break;
		case 0:
			break;

		default:
			cout << "Invalid input....!" << endl;

		}
	} while (choice != '0');


	return 0;

}

void Store::addProduct() {
	cout << "Enter Product ID: ";
	cin.ignore();
	cin >> itemID;
	cout << "Enter Product Name: ";
	cin >> ItemName;
	cout << "Enter Product Quantity: ";
	cin >> itemQuantity;
	cout << "Enter Product Price: ";
	cin >> itemPrice;

	file.open("data.txt", ios::out | ios::app);

	file << itemID << "\t" << ItemName << "\t" << itemQuantity << "\t"  << itemPrice << endl;
	file.close();

}


void Store::viewProduct() {
	file.open("data.txt", ios::in);
	file >> itemID >> ItemName >> itemQuantity >> itemPrice;
	while (!file.eof()) {
		
		cout << "------------------------------" << endl;
		cout << "Product Id\t\t Product Name\t\t Quantity\t\t Product Price" << endl;
		cout << itemID << "\t\t\t" << ItemName << "\t\t\t" << itemQuantity << "\t\t\t" << itemPrice << endl;
		cout << "------------------------------" << endl;
		file >> itemID >> ItemName >> itemQuantity >> itemPrice;
	}
	file.close();

}



void Store::buyProduct() {
	_choice = 'y';

	while (_choice == 'y') {

		file.open("data.txt", ios::in);
		file1.open("temp.txt", ios::out | ios::app);

		cout << "Enter Product Id: ";
		cin >> search;
		cout << "Enter Quantity: ";
		cin >> quantity;
		file >> itemID >> ItemName >> itemQuantity >> itemPrice;
		while (!file.eof()) {
			if (itemID == search) {
				itemQuantity -= quantity;
				file1 << itemID << "\t" << ItemName << "\t" << itemQuantity << "\t" << itemPrice << endl;

				itemRate = quantity * itemPrice;
				totalAmount += itemRate;
				cout << "----------Payment Bill----------" << endl;
				cout << "Total purchase amount: " << totalAmount << endl;
				cout << "---------------------------------" << endl;
			}
			else {
				file1 << itemID << "\t" << ItemName << "\t" << itemQuantity << "\t" << itemPrice << endl;
			}
			file >> itemID >> ItemName >> itemQuantity >> itemPrice;
		}
		file.close();
		file1.close();
		remove("data.txt");
		rename("temp.txt", "data.txt");

		cout << "\n Continue Shopping?(y/n): ";
		cin >> _choice;
	}


}