
// calculator

/*#include<iostream>
#include<stdexcept>
using namespace std;
int Add(int a, int b) {

	return a + b;
}
int Substruct(int a, int b) {
	return a - b;
}

int Multiply(int a, int b) {
	return a * b;
}

int Divide(int a, int b) {
	return a / b;
}

int Modulo(int a, int b) {
	return a % b;
}


int main() {
	int option = 0;
	cout << "\t\t\t\tWelcome to Calculator:\n\n\n"
		<< " \t\t\t\tOption:\n"
		<< " \t\t\t\t1.Add\n"
		<< " \t\t\t\t2.Substruct\n"
		<< " \t\t\t\t3.Multiply\n"
		<< " \t\t\t\t4.Divide\n"
		<< " \t\t\t\t5.Modulo\n\n\n";
	int num1=0, num2 = 0;
	char choice = 'y';
	while (choice == 'y') {
		cout << "\tType the option(1-5): ";
		cin >> option;
		cout << "\tEnter the first number: ";
		cin >> num1;
		cout << "\tEnter the second number: ";
		cin >> num2;

		

		switch (option) {
		case 1:
			cout << "\tAnswer is " << Add(num1, num2) << endl;
			break;
		case 2:
			cout <<"\tAnswer is " << Substruct(num1, num2) << endl;
			break;
		case 3:
			cout << "\tAnswer is " << Multiply(num1, num2) << endl;
			break;
		case 4:
			while (num2 == 0) {
				cout << "The second number must be non-zero: ";
					cin >> num2;
			}
			cout << "\tAnswer is " << Divide(num1, num2) << endl;
			break;
		case 5:
			cout << "\tAnswer is " << Modulo(num1, num2) << endl;
			break;

		default:
			cout << "\tThere is no such option " << endl;
			break;
		}

		cout << "\n\tWould you like to continue: (y/n)" << endl;
		cin >> choice;
	}

	cout << "Bye..." << endl;





}*/





// tic-tac-toe



#include<iostream>
#include<vector>
#include<chrono>
#include<thread>
using namespace std;
#define RESET   "\033[0m"
#define BLUE    "\033[34m"      
#define ORANGE     "\033[38;2;255;165;0m"
const char TIE = 'T';
const char X = 'X';
const char O = 'O';
const char NO_ONE = 'N';
const char EMPTY = ' ';
void instructions();  // insructions of the game 
void Board(const vector<char>& board); // display board
char AskYeNo(string question); // ask if human wants to go firts
bool isLegal(const vector<char>&board, int move); // if the cell is not occupy
int HumanMove(vector<char>&board, char turn); // move of human
int ComputerMove(vector<char>&board, char turn);  // move of compurer
char opponent(char turn); // switch between players
char winner(vector<char>&board); // show who is winner
void blinkSymbol(char turn , int num1, int num2);
void announce(char result);
int main() {
	cout << "\t\t\tWelcome to the game tic-tac-toe!!!\n\n\n";
	instructions();
	char result = NO_ONE;
	vector<char> board(9, ' ');
	string question = "Would you like to go first(y/n)?";
	char turn = AskYeNo(question);

	while (result == 'N') {
		

		if (turn == X) {
			int move = HumanMove(board, turn);
			board[move] = turn;
			blinkSymbol(turn, 50, 10);
			
		}
		else {
			int move = ComputerMove(board, turn);
			board[move] = turn;
			//blinkSymbol(turn, 50, 10);
			


		}
		system("cls");
		result = winner(board);
		Board(board);
		turn = opponent(turn);
	}
	announce(result);
//	if (result == TIE) {
	//	cout << "I want match revanch!!! " << endl;
	//}
	
}



void blinkSymbol(char turn, int duration_ms, int num_blinks) {
	for (int i = 0; i < num_blinks; ++i) {
		cout << turn << flush;
		this_thread::sleep_for(chrono::milliseconds(duration_ms));
		cout << ' ' << flush;
		this_thread::sleep_for(chrono::milliseconds(duration_ms));
	}

	cout << turn << flush;
}


void announce(char result) {
	if (result == X) {
		cout << "Congartulation: X won!!!! " << endl;
	}
	else if (result == O) {
		cout << "Congratulation: O won!!!! " << endl;
	}
	else {
		cout << "Oooh it's a tie " << endl;
	}


}


int ComputerMove(vector<char>&board,char turn) {
	// optimal move
	// move to win
	// move to overcome opponent


	for (int i = 0; i < board.size(); ++i) {
		if (isLegal(board, i)) {
			board[i] = turn;

			if (winner(board) == turn) {
				board[i] = EMPTY;
				return i;
			}
			board[i] = EMPTY;
		}

	}


	int move;
	char human = opponent(turn);
	for (int i = 0; i < board.size(); i++) {
		if (isLegal(board, i)) {
			board[i] = human;

			if (winner(board) == human) {
				board[i] = EMPTY;
				return i;
			}
			board[i] = EMPTY;
		}
	}
	

	int Best_Ways[] = { 4, 3, 5, 0, 8, 6, 2, 1, 7, };
	for (int i = 0; i < board.size(); i++) {
		if (isLegal(board, Best_Ways[i])) {
			 return Best_Ways[i];
		}
	}

}



char opponent(char turn) {
	if (turn == X) {
		return O;
	}
	else {
		return X;
	}

}

void printSymbol(char symbol) {
	if (symbol == 'X') {
		cout << ORANGE << symbol << RESET;
	}
	else {
		cout << BLUE << symbol << RESET;
	}
}


void Board(const vector<char>&board) {
	cout << "\n\t";
	printSymbol(board[0]);
	cout << " | ";
	printSymbol(board[1]);
	cout << " | ";
	printSymbol(board[2]);
	cout << "\n\t" << "---------";
	cout << "\n\t";
	printSymbol(board[3]);
	cout << " | ";
	printSymbol(board[4]);
	cout << " | ";
	printSymbol(board[5]);
	cout << "\n\t" << "---------";
	cout << "\n\t";
	printSymbol(board[6]);
	cout << " | "; 
	printSymbol(board[7]);
	cout << " | ";
	printSymbol(board[8]);
	cout << "\n\n";

}

char winner(vector<char>&board) {
	int WinnerMoves[8][3] = { {0,1,2}, {3,4,5}, {6,7,8 }, {0,3,6},{1,4,7},{2,5,8}, {0,4,8},{2,4,6} };
	for (int i = 0; i < 8; i++) {
		if (!board.empty() && board[WinnerMoves[i][0]] != EMPTY && board[WinnerMoves[i][0]] == board[WinnerMoves[i][1]] && board[WinnerMoves[i][1]] == board[WinnerMoves[i][2]]) {
			return board[WinnerMoves[i][0]];
		}
	
	}
	for (int i = 0; i < board.size(); i++) {
		if (board[i] == EMPTY) {
			return NO_ONE;
		}
	}
	return TIE;

}

char AskYeNo(string question) {
	char option = ' ';
	cout << question << " ";
	cin >> option;
	if (option == 'y') {
		return X;
	}
	else {
		return O;
	}



}



bool isLegal(const vector<char>& board, int move) {
	if (board[move] == EMPTY) {
		return true;

	}
	return false;


}

int HumanMove(vector<char>&board, char turn) {
	int move;
	cout << "Please write the number (0-8) to move: ";
	cin >> move;
	bool ok = isLegal(board, move);
	while (ok!=true) {
		cout <<"The cell has already occupied. " << " Please write the number (0-8) to move: ";
		cin >> move;
		ok = isLegal(board, move);
	}
	return move;


}


void instructions(){

	cout << "\tThe main concept of the game is to win\n "
		<< "\tYour opponent.\n\n "


		<< "\tRules: You have to occupy three cells\n "
		<< "\tthat go in sequence, faster than your\n "
		<< "\topponent will occupy it.\n "
		<< "\tWinning positions are:\n "
		<< "\t(0,1,2), (3,4,5), (6,7,8), (0,3,6), (1,4,7), (2,5,8), (0,4,8), (2,4,6)\n\n";


	cout << "\t| 0 | 1 | 2 |\n "
		 << "\t-------------\n "
		 << "\t| 3 | 4 | 5 |\n "
		 << "\t-------------\n "
		 << "\t| 6 | 7 | 8 |\n ";
		  
}




/*#include<iostream>
#include<ctime>

using namespace std;
int main() {
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int guess = 0;
	int counter = 0;
	cout << "I have chosen a number between 1 and 100 " << endl;
	cout << "Can you guess what it is? " << endl;
	while (guess != secretNumber) {
		cout << "Enter your guess: ";
		cin >> guess;
		counter++;
		if (guess > secretNumber) {
			cout << "Too high! Try again " << endl;
		}
		else if (guess < secretNumber) {
			cout << "Too low! Try again " << endl;

		}
		else if(guess==secretNumber) {
			cout << "Congratulation! You guess the number: " << secretNumber << ". You guessed it using " << counter << " attemps " << endl;
		}
		else {
			cout << "Type a number: " << endl;
		}




	}
	return 0;



}*/


// to do list
/*#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void showTasks(const vector<string>& tasks) {
	cout << "\n\n";
	cout << "To-do List: " << endl;
	cout << "\n";
	for (int i = 0; i < tasks.size(); i++) {
		cout << i + 1 << ". " << tasks[i] << endl;
	}
	cout << "\n\n\n";


}

int main() {
	vector<string> tasks;
	string task;
	char choice;
	ifstream inputFile("task1.txt");
	if (inputFile.is_open()) {
		while (getline(inputFile, task)) {
			tasks.push_back(task);
		}
	}
	inputFile.close();

	do {
		cout << "A - Add a task " << endl;
		cout << "V - View tasks " << endl;
		cout << "Q - Quit " << endl;
		cout << "Enter a choice: ";
		cin >> choice;
		switch (choice) {
		    case 'A':
			case 'a':
				cout << "Enter a task: ";
				cin.ignore();
				getline(cin, task);
				tasks.push_back(task);
				break;
			case 'V':
			case'v':
				showTasks(tasks);
				break;

		}

	} while (choice != 'Q' and choice != 'q');

	ofstream outputFile("task1.txt");
	for (const auto& t : tasks) {
		outputFile << t << endl;
	}
	outputFile.close();
	return 0;



}*/




/*#include<iostream>
using namespace std;
double CelciusToFahrenheit(double celsius) {
	return (celsius * 9.0 / 5.0) + 32.0;
}

double FahrenheitToCelsius(double fahrenheit) {
	return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double CelsiusToKelvin(double celsius) {
	return celsius + 273.15;
}
double KelvinToCelsius(double kelvin) {
	return kelvin - 273.15;
}



int main() {
	int choice;
	double temperature, convertedTemperature;
	cout << "Temperature Converter " << endl;
	cout << "1. Celsious to Fahrenheit " << endl;
	std::cout << "2. Fahrenheit to Celsius " << std::endl;
	std::cout << "3. Celsius to Kelvin " << std::endl;
	std::cout << "4. Kelvin to Celsius " << std::endl;
	char option = 'y';
	do {
		std::cout << "Enter your choice (1-4): ";
		cin >> choice;
		cout << "Enter the temperature ";
		cin >> temperature;

		switch (choice) {
		case 1:
			convertedTemperature = CelciusToFahrenheit(temperature);
			break;
		case 2:
			convertedTemperature = FahrenheitToCelsius(temperature);
			break;
		case 3:
			convertedTemperature = CelsiusToKelvin(temperature);
			break;
		case 4:
			convertedTemperature = KelvinToCelsius(temperature);
			break;

		default:
			cout << "Invalid choice " << endl;
			cout << "Try again " << endl;
			return 1;

		}

		cout << "Converted Temperature: " << convertedTemperature <<"\n\n" << endl;
		cout << "Would you like to continue(y/n):? ";
		cin >> option;

	} while (option == 'y' or option == 'Y');
}*/


 // contact book app
/*#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Contact {
	string name;
	string phone;
	string email;

};

void addContact(vector<Contact>& contacts) {
	Contact newContact;
	cout << "Enter name ";
	cin >> newContact.name;
	cout << "Enter phone: ";
	cin >> newContact.phone;
	cout << "Enter email ";
	cin >> newContact.email;
	contacts.push_back(newContact);

}

void displaycontacts(const vector<Contact>& contacts) {
	for (const auto& contact : contacts) {
		cout << "Name: " << contact.name << ", Phone: " << contact.phone << ", Email: " << contact.email << endl;
	}
}


void searchContact(const vector<Contact>& contacts) {
	string searchTerm;
	cout << "Enter name to serach: ";
	cin >> searchTerm;

	bool found = false;

	for (const auto& contact : contacts) {
		if (contact.name == searchTerm) {
			cout << "Name " << contact.name << ", Phone: "
				<< contact.phone << ", Email: " << contact.email << endl;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Contact not found " << endl;
	}
}

void deleteContact(vector<Contact>& contacts) {

	string nameToDelete;
	cout << "Enter name of contact to delete: ";
	cin >> nameToDelete;

	auto it = remove_if(contacts.begin(), contacts.end(), [&](const Contact& contact) {
				
		return contact.name == nameToDelete;
	});
	if (it != contacts.end()) {

		contacts.erase(it);
		cout << "Contact " << nameToDelete << " was successful deleted " << endl;
	}
	else {

		cout << "Contact " << nameToDelete << " not found " << endl;
	}


}

//bool isNameEqual(const Contact& contact, const std::string& nameToDelete) {
	//return contact.name == nameToDelete;
//}



int main() {
	vector<Contact> contacts;
	int choice;

	do {
		cout << "\n1.Add Contact " << endl;
		cout << "2.Display Contacts " << endl;
		cout << "3.Seach Contact " << endl;
		cout << "4.Delete Contact " << endl;
		cout << "5.Exit " << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			addContact(contacts);
			break;
		case 2:
			displaycontacts(contacts);
			break;
		case 3:
			searchContact(contacts);
			break;
		case 4:
			deleteContact(contacts);
			break;
		case 5:
			break;
		default:
			cout << "Invalid choice. " << endl;

		}

	} while (choice != 5);



	return 0;
}*/



/*#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void encryptFile(fstream& inputFile, fstream& outputFile, int key) {

	char ch;
	while (inputFile.get(ch)) {
		outputFile.put(ch + key);
	}
	inputFile.close();
	outputFile.close();


}

void decryptFile(fstream& inputFile, fstream& outputFile, int key) {
	

	char ch;
	while (outputFile.get(ch)) {
	inputFile.put(ch - key);
	}

	inputFile.close();
	outputFile.close();
}


int main() {
	string inputFilePath, outputFilePath;
	int choice, key;

	cout << "1. Encrypt File\n";
	cout << "2. Decrypt File\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "Enter key(integer): ";
	cin >> key;
	fstream inputFile("encrypt.input.txt", ios::binary | ios::in | ios::out);  
	fstream outputFile("encrypt.output.txt", ios::binary | ios::in | ios::out);  

	if(inputFile.is_open()) {
		cout << "Open" << endl;
	}
	if (outputFile.is_open()) {
		cout << "Open" << endl;
	}

	

	if (choice == 1) {
		encryptFile(inputFile, outputFile, key);

	}
	else if (choice == 2) {
		decryptFile(inputFile, outputFile, key);
	}
	else {
		cout << "Invalid choice " << endl;
	}

	return 0;



}*/





/*#include<iostream>
#include<winsock2.h>
#include<WS2tcpip.h>
#include<string>

int main() {
	int server_fd, new_socket;
	sockaddr_in address; 
	int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = {0};
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSE_UNICASTPORT, reinterpret_cast<const char*>(&opt), sizeof(opt)) == SOCKET_ERROR)
	{
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}






}
*/



/*#include<iostream>
using namespace std;
int main() {
	int quant;
	int choice;
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	int Srooms, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schilen = 0;
	int Total_rooms = 0, Totoal_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
	cout << "\n\tQuantity of items we have";
	cout << "\n\tRooms availiable: ";
	cin >> Qrooms;
	cout << "\n\tQuantiti of pasta ";




}*/





