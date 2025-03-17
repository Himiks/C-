/*Create program which allows to create and edit binary file with dates.
Dates are saved in binary file as year (int), month (int), date (int) and status (0 or 1)
where status means 1 - logically deleted, 0 - not deleted.
Your program must have 5 possibilities:
1) Add new date at the end of binary file.
2) Logically delete one more date. Enter form keyboard date and logically delete the record.
3) Print all non-deleted dates on screen
4) Print all dates on screen (including deleted)
5) Purge deleted logically deleted dates (delete them physically).
*/



#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void AddNew(fstream& input, int year, int month, int date, int status = 0) { // function to add the dates to the end
	input.open("dates2.dat", ios::binary | ios::in | ios::out | ios::app); // file to read, write and put pointer to the end
	if (input.is_open()) {

		cout << "Please, enter day: "; // adding and checking the data
		while (cin >> date and date > 31 or date < 1) {
			cout << "Non-existent day. Please try again " << endl;
		}

		cout << "Please, enter a month: ";
		while (cin >> month and month > 12 or month < 1) {
			cout << "Non-existent month. Please try again " << endl;
		}

		cout << "Please, enter a year: ";
		while (cin >> year and year > 10000 or year < 1000) {
			cout << "Non-existant year. Please try again " << endl;
		}

		input.write((char*)&(date), sizeof(date)); // writing to file day, month, year, status
		input.write((char*)&(month), sizeof(month));
		input.write((char*)&(year), sizeof(year));
		input.write((char*)&(status), sizeof(status));
		cout << "The date were successfully saved!\n\n";
		input.close();
	}
	else {
		cout << "The file didn't open " << endl;
	}
	cout << "\n\n";
}

void DeleteDate(fstream& input, int year, int month, int date, int status) { // function to delete the date logically
	input.open("dates2.dat", ios::binary | ios::in | ios::out);
	if (input.is_open()) {
		int dday, dmonth, dyear; // enter date to delete
		cout << "Enter date which you want to delete " << endl;
		cout << "Enter a day: ";
		cin >> dday;
		cout << "Enter a month: ";
		cin >> dmonth;
		cout << "Enter a year: ";
		cin >> dyear;
		input.read((char*)&date, sizeof(date)); // read the data
		input.read((char*)&month, sizeof(month));
		input.read((char*)&year, sizeof(year));
		input.read((char*)&status, sizeof(status));
		while (!input.eof()) {
			if (date == dday and month == dmonth and year == dyear and status == 0) { // if the data is found in the file then delete it
				input.seekg(-4, ios::cur); // put th pointer before the status
				status = 1;
				input.write((char*)&(status), sizeof(status)); // rewrite the status with 1 that means logically deleted
				cout << "The date was logically deleted " << endl;
				cout << "\n\n";
				break;
			}

			input.read((char*)&date, sizeof(date)); // read the next data
			input.read((char*)&month, sizeof(month));
			input.read((char*)&year, sizeof(year));
			input.read((char*)&status, sizeof(status));
		}
		if (input.eof()) {
			cout << "Date not found or already logically deleted" << endl;
		}

		input.close();
	}

	else {
		cout << "The file didn't open " << endl;
	}
	cout << "\n\n";

}


void PrintNonDeleted(fstream& input, int year, int month, int date, int status) { // function to print non-deleted data
	input.open("dates2.dat", ios::binary | ios::in);
	if (input.is_open()) {
		cout << "Non-deleted dates: " << endl;
		input.read((char*)&date, sizeof(date)); // read data
		input.read((char*)&month, sizeof(month));
		input.read((char*)&year, sizeof(year));
		input.read((char*)&status, sizeof(status));
		while (!input.eof()) {
			if (status != 1) { // if the status is not logically deleted then output data
				cout << setw(2) << setfill('0') << date << '-' << setw(2) << setfill('0') << month << '-' << year << (status == 1 ? " - deleted" : " - not deleted") << endl; // setw means fill the single numbers because cin translate 0 to decimal point but not depicts it so l put the 0 in cout to depict 9(like 09)
			}
			input.read((char*)&date, sizeof(date)); // continue to read
			input.read((char*)&month, sizeof(month));
			input.read((char*)&year, sizeof(year));
			input.read((char*)&status, sizeof(status));
		}
		input.close();
	}
	else {
		cout << "The file didn't open " << endl;
	}
	cout << "\n\n";



}
void PrintAll(fstream& input, int year, int month, int date, int status) { // print all the data
	input.open("dates2.dat", ios::binary | ios::in | ios::out);
	if (input.is_open()) {
            cout << "Dates: " << endl;
		input.read((char*)&date, sizeof(date)); // read data
		input.read((char*)&month, sizeof(month));
		input.read((char*)&year, sizeof(year));
		input.read((char*)&status, sizeof(status));
		while (!input.eof()) {
			cout << setw(2) << setfill('0') << date << '-' << setw(2) << setfill('0') << month << '-' << year << (status == 1 ? " - deleted" : " - not deleted") << endl;
			input.read((char*)&date, sizeof(date)); // read the data till the end of the file
			input.read((char*)&month, sizeof(month));
			input.read((char*)&year, sizeof(year));
			input.read((char*)&status, sizeof(status));
		}
		input.close();
	}
	else {
		cout << "The file didn't open " << endl;
	}
	cout << "\n\n";
}

void DeleteDeleted(fstream& input, int year, int month, int date, int status) { // function to delete the logically deleted data physically
	input.open("dates2.dat", ios::binary | ios::in | ios::out);
	ofstream temp;
	temp.open("temp.dat", ios::binary | ios::out);

	if (input.is_open() and temp.is_open()) {
		input.read((char*)&date, sizeof(date));
		input.read((char*)&month, sizeof(month));
		input.read((char*)&year, sizeof(year));
		input.read((char*)&status, sizeof(status));
		while (!input.eof()) {
			if (status != 1) { // save the data in the file if the data is not logically deleted
				temp.write((char*)&date, sizeof(date)); // write the data to the separate file
				temp.write((char*)&month, sizeof(month));
				temp.write((char*)&year, sizeof(year));
				temp.write((char*)&status, sizeof(status));

			}
			input.read((char*)&date, sizeof(date));
			input.read((char*)&month, sizeof(month));
			input.read((char*)&year, sizeof(year));
			input.read((char*)&status, sizeof(status));
		}
		temp.close();
		input.close();
		remove("dates2.dat"); // remove the file with deleted data
		rename("temp.dat", "dates2.dat"); // rename file with not deleted data

	}
	else {
		cout << "The file didn't open " << endl;
	}
	cout << "The logically deleted dates were succesfully deleted physically " << endl;
	cout << "\n\n";
}



int main() {
	fstream fout;
	int choice = 0;
	int year = 0;
	int month = 0;
	int date = 0;
	int status = 0;

	do {
		cout << "\tChoose the option(1-5):\n"
			<< "\t1. Add new date.\n"
			<< "\t2. Delete Date.\n"
			<< "\t3. Print Non-deleted dates.\n"
			<< "\t4. Print All dates(included deleted).\n"
			<< "\t5. Purge deleted logically deleted dates (delete them physically)\n\n\n" << endl;
		cin >> choice;

		switch (choice) { // choice based on options
		case 1:
			AddNew(fout, year, month, date, status);
			break;
		case 2:
			DeleteDate(fout, year, month, date, status);
			break;
		case 3:
			PrintNonDeleted(fout, year, month, date, status);
			break;
		case 4:
			PrintAll(fout, year, month, date, status);
			break;
		case 5:
			DeleteDeleted(fout, year, month, date, status);
			break;
		case 0:
			cout << "Thank you, bye!\n\n" << endl;
			break;
		default:
			cout << "Incorrect choice. Try again\n" << endl;
			break;
		}


	} while (choice != 0);

}
