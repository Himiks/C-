/*#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(int(time(0)));
	int randomNumber = rand();
	int die = randomNumber % 6 + 1;
	cout << " You rolled: " << die << endl;




}*/





/*#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand((time(NULL)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0;
	int guess;
	cout << "\t Welcome to guess my number\n\n "<< endl;
	do {
		cout << " Enter a guess : ";
		cin >> guess;
		tries++;
		if (guess > secretNumber) {
			cout << " Too high!!! " << endl;
		}
		else if (guess < secretNumber) {
			cout << " Too low!!! " << endl;
		}
		else {
			cout << " Thats's it!!! You got it in!! " << tries << " guesses " << endl;
		}


	} while (guess != secretNumber);


}*/




/*#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int lowerLimit, upperLimit;
	cout << "Welcome to the game 'Guess the number!'\n";
	cout << "Choose the interval for number: ";
	cin >> lowerLimit >> upperLimit;
	int secretNumber, guess, attempts = 0;
	cout << "The player choose the secret number in the certain range\n";
	cout << " When you will be ready, just type it ";
	cin >> secretNumber;
	system("cls");
	cout << "Computer starts guessing the number\n\n";
	do {
		int randomNumber = rand();
		guess = lowerLimit + randomNumber % (upperLimit - lowerLimit + 1);
		cout << "The computer supposes your number is " << guess << endl;
		attempts++;
		if (guess < secretNumber) {
			cout << " Too low!!!\n\n";
			lowerLimit = guess + 1;
		}
		else if (guess > secretNumber) {
			cout << "Too high!!!\n\n";
			upperLimit = guess - 1;
		}
		else {
			cout << " The computer guessed your number (" << secretNumber << ") with " << attempts << " guess!!!\n";
		}

	} while (guess != secretNumber);
	return 0;

}*/



/*#include<iostream>
#include<string>
using namespace std;
int main() {
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	cout << " Your items\n:";
	for (int i = 0; i < numItems; i++) {
		cout << inventory[i] << " " << endl;
	}
	cout << "\nYou trade your sword for a battle axe";
	inventory[0] = "battle axe";
	cout << "\nYour items are\n";
	for (int i = 0; i < numItems; i++) {
		cout << inventory[i] << " " << endl;
	}
	cout << "\nThe item name " << inventory[0] << " has: ";
	cout << inventory[0].size() << " letters in it\n";
	cout << "\n You find a healing potion ";
	if (numItems < MAX_ITEMS) {
		inventory[numItems++] = "healing potion";

	}
	else {
		cout << "You have too many items and can't carry another ";
	}


	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++) {
		cout << inventory[i] << " " << endl;

	}
	return 0;
}*/



/*#include<iostream>
using namespace std;
int main() {
	const int Rows = 3;
	const int Columns = 3;
	char board[Rows][Columns] = { {'0', 'X', '0'}, {' ', 'X', 'X'}, {'X', '0', '0'} };
	cout << "Here's the tic-tac-toe board:\n" << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Columns; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' moves to the empty location\n\n";
	board[1][0] = 'X';
	cout << "Now the tic-tac-toe board is:\n" << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Columns; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' wins!! ";
	return 0;

}*/




/*#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
	enum field {WORD, HINT, NUM_FIELD};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELD] = { {"wall", "Do you feel you're banging your head against something?"},{"glasses", "These might help you see the answer"}, {"labored", "Going slowly, is it?"}, {"persistent", "Кеер at it."}, {"jumble", "It's what the game is all about "} };
	srand(time(NULL));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++) {
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2] ;
		jumble[index2] = temp;
	}
	cout << "Welcome!!! " << endl;
	cout << "The jumble is " << jumble << endl;
	string guess;
	cout << "Enter yout guess: " << endl;
	cin >> guess;
	while (guess != theWord && guess != "quit") {
		if (guess == "hint") {
			cout << theHint;
		}
		else {
			cout << "Sorry, that's not it " << endl;
		}
		cout << "\n\nYour guess: ";
		cin >> guess;

	}
	if (guess == theWord) {
		cout << "\nThats's it!!! You guessed it!!\n";
	}
	cout << "\nThank you for playing\n";
	return 0;


}*/


// heros inventory 2 vector



/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string> inventory;     // or vector<string> inventory(10); vector<string> inventory(10, "nothing) we have 10 nothing; vector<string> inventory(myStuff) - identical to vector myStuff;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << "You have " << inventory.size() << " items\n";
	cout << "\nYour items:\n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " " << endl;
	}
	cout << "\nYou trade your sword for a battle axe ";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " " << endl;
	}
	cout << "\nThe item name " << inventory[0] << " has ";
	cout << inventory[0].size() << " letters in it\n";
	cout << "\nYour shield is destroyed in a fierce battle ";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (int i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << " " << endl;
	}
	cout << "\nYou were robbed of all your possessions be a thief ";
	inventory.clear();
	if (inventory.empty()) {
		cout << "\nYou have nothing\n";
	}
	else {
		cout << "\nYou have at least one item\n";
	}
	return 0;


}*/




// heros inventory 3.0


/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string> inventory;    
	vector<string> ::iterator myIterator; 
	vector<string> ::const_iterator iter; 
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << "You have " << inventory.size() << "items\n";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {

		cout << *iter << " " <<  endl;

	}
	cout << "\nYou trade your sword for a battle axe ";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << " " << endl;
	}
	cout << "\nThe item name " << *myIterator << " has: ";
	cout << (*myIterator).size() << " letters in it\n";
	cout << "\nThe item name " << *myIterator << " has: ";
	cout << myIterator->size() << " letters in it\n";
	cout << "\nYou recover a crossbow from a slain enemy ";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << endl;
	}
	cout << "\nYour armor is destroyed in a fierce battle ";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter << " " << endl;
	}


	return 0;

}*/




/*#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;
int main() {
	vector<int> ::const_iterator iter; 
	cout << "Creating a list of scores: ";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	cout << "\nHigh Scores\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << " " << endl;

	}

	cout << "\nFinding a score: ";
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	system("cls");
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end()) {
		cout << "Score found\n ";
	}

	else
	{
		cout << "Score not found\n ";
	}
	cout << "\nRandomizing scores ";
	srand(time(NULL));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << " " << endl;
	}
	cout << "\nSorting scores: ";
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) {
		cout << *iter << " " << endl;
	}
	return 0;





}*/

// reserve capacity
/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	cout << "Creating a list of scores\n";
	vector<int> scores(10, 0);
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;
	scores.reserve(20); // reserve memory for 10 additional components in the vector;
	cout << "Vector size is: " << scores.size() << endl;
	cout << "Vector capacity is: " << scores.capacity() << endl;



}*/



// game "hangman"
/*#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<ctime>
#include<cctype>
using namespace std;
int main() {
	const int MAX_WRONG = 8; // maximum number of error that user can make
	vector<string>words; // The container of words to ask
	words.push_back("CAT");
	words.push_back("DOG");
	words.push_back("BEAR");
	srand(time(NULL));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0]; // The word to guess
	int wrong = 0; // the number of errors
	string soFar (THE_WORD.size(), '-');// the open part of the word
	string used = " "; // already guessed letters
	cout << "Welcome to Hangman. Good luck!!\n";
	while (wrong < MAX_WRONG && soFar != THE_WORD) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n ";
		cout << "\nYou've used the following leters:\n" << used << endl;
		cout << "\nSo far, the word is:\n" << soFar << endl;
		char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess); // translates to the uppercase
		while (used.find(guess) != string::npos) {
			cout << "\nYou've already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);

		}
		used += guess;
		if (THE_WORD.find(guess) != string::npos) {
			cout << "That's right! " << guess << " is in the word\n";
			for (int i = 0; i < THE_WORD.length(); i++) {
				if (THE_WORD[i] == guess) {
					soFar[i] = guess;
				}


			}

		}
		else {
			cout << "Sorry " << guess << " isnt't in the word\n";
			++wrong;
		}
		system("cls");
	}
	if (wrong == MAX_WRONG) {
		cout << "\nYou've been hanged:(hohoohoohohoh!!";
	}
	else
	{
		cout << "\nYou've guessed it!!";
	}
	cout << "\nThe word was " << THE_WORD << endl;
	return 0;

}*/




// Воспользуйтесь векторами и итераторами и напишите программу, позволя-ющую пользователю вести список любимых игр. 
// В этой программе у пользователя должны быть такие возможности: перечислить заголовки всех игр, добавить заголовок игры, 
// удалить заголовок игры.
/*#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
using namespace std;
int main() {
	vector<string> favoriteGames;
	vector<string>::iterator iter;
	int choice = 0;
	string newGame = " ";
	string remGame = " ";
	do {
		cout << "\t\t\t\t\tMenu:\n";
		cout << "\t\t\t\t\t1. List all game titles\n";
		cout << "\t\t\t\t\t2. Add a game title\n";
		cout << "\t\t\t\t\t3. Remove a game title\n";
		cout << "\t\t\t\t\t4. Exit\n";
		cout << "\t\t\t\t\tChoose an option between(1-4):" << endl;
		cin >> choice;
	    switch (choice) {
		   case 1:
			if (favoriteGames.empty()) {
				cout << "There is no games in the list\n";
			}
			else {
				cout << "The list of favorite games are:\n";
				for (iter = favoriteGames.begin(); iter != favoriteGames.end(); iter++) {
					cout <<"-" << *iter << "\n";
				}
			}
			break;
		   case 2:
			cout << "Enter the game you would like to add:\n"; 
			cin.ignore();
			getline(cin, newGame);
			favoriteGames.push_back(newGame);
			cout << "The header of the name is added\n";
			break;

		   case 3:
			   if (favoriteGames.empty()) {
				   cout << "There is no games in the list\n";
			   }
			   else {
				   cout << "Enter the header to be removed:\n";
				   cin.ignore();
				   getline(cin, remGame);
				   iter = find(favoriteGames.begin(), favoriteGames.end(), remGame);
				   if (iter != favoriteGames.end()) {
					   favoriteGames.erase(iter);
					   cout << "The header is deleted\n";


				   }
				   else {
					   cout << "The game is not found\n";
				   }

			   }
			   break;
		   case 4:
			   cout << "Hastaluego!" << endl;
			   break;
		   default:
			   std::cout << "Incorrect input\n";
			   break;

		}

		
	} while (choice != 4);
	return 0;





}*/




//Functions
/*#include<iostream>
using namespace std;
	void instructions();
	int main() {
		instructions();
		return 0;

	}
	void instructions() {
		cout << "Welcome " << endl;
		cout << "Here it is...." << endl;

	}*/



// Yes or No 
/*#include<iostream>
#include<string>
using namespace std;
char askYesNo1();
char askYesNo2(string question);
	int main() {
		char answer1 = askYesNo1();
		cout << "Thanks for answering: " << answer1 << "\n\n";
		char answer2 = askYesNo2("Do you wish to save your game?");
		cout << "Thanks for answering: " << answer2 << "\n";
		return 0;
	}

	char askYesNo1() {
		char response1;
		do {
			cout << "Please enter 'y' or 'n' : ";
			cin >> response1;



		} while (response1 != 'y' && response1 != 'n');
		return response1;

	}
	char askYesNo2(string question) {
		char response2;
		do {
			cout << question << " (y/n): ";
			cin >> response2;

		} while (response2 != 'y' && response2 != 'n');
		return response2;

	}*/



// scoping 
/*#include<iostream>
using namespace std;
void func();
int main() {
	int var = 5; // local
		cout << "In main " << var << endl;
		func();
		cout << "Back in main var is: " << var << "\n\n";
		{
			cout << "In main in a new scope var is " << var << endl;
			cout << "Creafting a new scope " << endl;
			int var = 10; 
			cout << "In main() in a new scope var is " << var << endl;

		}
		cout << " At end of main() var created in new scope no longer exists " << endl;
		cout << "At end of main() var is: " << var << endl;
		return 0;

}
void func() {
	int var = -5; // local
		cout << "In func() var is " << var << endl;
}*/




// Give me a number 
/*#include<iostream>
#include<string>
using namespace std;
int askNumber(int high, int low = 1);
int main() {
	int number = askNumber(5);
	cout << "Thanks for entering: " << number << endl;
	number = askNumber(10, 5);
	cout << "Thanks for entering " << number << endl;
	return 0;

}


int askNumber(int high, int low) {
	int num;
	do {
		cout << "Please enter a number " << " (" << low << " - " << high << "): ";
		cin >> num;

	} while (num > high || num < low);
	return num;
}*/


// taking damage 

/*#include<iostream>
using namespace std;
int radiation(int health);
int main() {
	int health = 80;
	cout << "Your health is " << health << endl;
	health = radiation(health);
	cout << "After radiation expossure your health is " << health << endl;
	health = radiation(health);
	cout << "After radiation expossure your health is " << health << endl;
	health = radiation(health);
	cout << "After radiation expossure your health is " << health << endl;
}

 inline int radiation(int health) {
	return(health / 2);	
}*/




// insane librarians
/*#include<iostream>
#include<string>
using namespace std;
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);
int main() {
	cout << "Welcome to Mad Lib\n\n";
	cout << "Answer the following questins to help create a new story\n";
	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a pluralnoun: ");
	int number = askNumber("please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	return 0;
}
string askText(string prompt) {
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}
void tellStory(string name, string noun, int number, string bodyPart, string verb) {
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer \n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << "\n";
	cout << "After all this time, the quest was finally over ";
	cout << "And then the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << " ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for ";


}*/







/*#include<iostream>
#include<string>
using namespace std;
int askQuestion(string question);

int main() {
	string question = "Enter a number please:";
	int answer = askQuestion(question);
	cout << answer << endl;


}
int askQuestion(string question = "Enter a number please:") {
	int num;
	cout << question << " ";
	cin >> num;
	return num;



}*/




//reference 
/*#include<iostream>
using namespace std;
int main() {
	int myScore = 1000;
	int& mikesScore = myScore;
	cout << "myScore is " << myScore << endl;
	cout << "mikesScore is " << mikesScore << endl;
	cout << "Adding 500 to myScore " << endl;
	myScore += 500;
	cout << "myScore is " << myScore << endl;
	cout << "mikesScore is " << mikesScore << endl;
	cout << "Adding 500 to mikesScore " << endl;
	mikesScore += 500;
	cout << "myScore is " << myScore << endl;
	cout << "mikesScore is " << mikesScore << endl;
	return 0;


}*/




// swap program 
/*#include<iostream>
using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);



int main() {
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "My score " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;
	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	cout << "My score " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;
	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	cout << "My score " << myScore << endl;
	cout << "yourScore: " << yourScore << endl;
	return 0;

}
void badSwap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;


}*/



// Inventory Displayer 
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
void display(const vector<string>& inventory);
int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	display(inventory);
	return 0;

}
void display(const vector<string>& inventory) {
	cout << "Your items:\n";
	for (vector<string>::const_iterator iter = inventory.begin(); iter != inventory.end(); ++iter) {
		cout << *iter <<endl;

	}



}*/




// inventory referencer 
/*#include<iostream>
#include<string>
#include<vector>
using namespace std;

string& refToElement(vector<string>& inventory, int i);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << "Sending the returned reference to cout" << endl;
	cout << refToElement(inventory, 0);
	cout << "Assigning the returned reference to another reference" << endl;;
	string& rStr = refToElement(inventory, 1);
	cout << "Sending the new reference to cout" << endl;;
	cout << rStr << "\n\n";
	cout << "Assigning the returned reference to a string object" << endl;;
	string str = refToElement(inventory, 2);
	cout << "Sending the new sting object to cout" << endl;;
	cout << str << "\n\n";
	cout << "Altering an object through a returned reference:" << endl;;
	rStr = "Healing Potion";
	cout << inventory[1] << endl;
	return 0;

}

string& refToElement(vector<string>& inventory, int i) {
	return inventory[i];
}*/






// tic-tac-toe game 
/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';
void instructions();
char askYesNo(string question);
int askNumber(string question, int high, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector<char>& board);
char winner(const vector<char>& board);
 bool isLegal(const vector<char>& board, int move);
int humanMove(const vector<char>& board);
int computerMove(vector<char>board, char computer);
void announceWinner(char winner, char computer, char human);
		
int main() {
	int move;
	const int NUM_SQUARES = 9;
	vector<char> board(NUM_SQUARES, EMPTY);
	instructions();
	char human = humanPiece();
	char computer = opponent(human);
	char turn = X;
	displayBoard(board);
	while (winner(board) == NO_ONE) { 
		
		if (turn == human) {
			move = humanMove(board);
			board[move] = human;

		}
		else {
			move = computerMove(board, computer);
			board[move] = computer;


		}
		//system("cls");
		displayBoard(board);
		turn = opponent(turn);
		
	}

	
	announceWinner(winner(board), computer, human);
		return 0;
}


void instructions() {
	cout << "Welcome to the ultimate man-machine showdown: Tic -Tac-Toe\n";
	cout << "--where human brain is pit against silicon processor\n\n";
	cout << "Make your move known by entering a number(0-8). The number\n";
	cout << "corresponds to the desired board position, as illustratd:\n\n";
	cout << " 0 | 1 | 2\n";
	cout << " ---------\n";
	cout << " 3 | 4 | 5\n";
	cout << " ---------\n";
	cout << " 6 | 7 | 8\n";
	cout << "Prepare yourself, human. The battle is about to begin\n\n";

}


char askYesNo(string question) {
	char response;
	do {
		cout << question << "(y/n): ";
		cin >> response;


	} while (response != 'y' && response != 'n');
	return response;
}


int askNumber(string question, int high, int low) {

	int number;
	do {
		cout << question << " (" << low << " - " << high << "): ";
		cin >> number;

	} while (number > high || number < low);
	return number;

}

char humanPiece() {
	char go_first = askYesNo("Do you require the first move?");
	if (go_first == 'y') {
		cout << "\nThen take the first move. You will need it\n";
		return X;
	}
	else {
		cout << "\nYour bravely will be your undoing...l will gp first\n";
		return O;
	}
}

char opponent(char piece) {
	if (piece == X) {
		return O;
	}
	else {
		return X;
	}
}

void displayBoard(const vector<char>& board) {
	cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
	cout << "\n\t" << "---------";
	cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
	cout << "\n\t" << "---------";
	cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
	cout << "\n\n";

}


char winner(const vector<char>& board) {
	const int WINNING_ROWS[8][3] = { {0,1,2},
									 {3,4,5}, 
									 {6,7,8}, 
									 {0,3,6},
									 {1,4,7}, 
								  	 {2,5,8}, 
									 {0,4,8}, 
									 {2,4,6} };
	const int TOTAL_ROWS = 8;
	for (int row = 0; row < TOTAL_ROWS; ++row) {
		if (board[WINNING_ROWS[row][0]] != EMPTY && board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]] && board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) {
			return board[WINNING_ROWS[row][0]];
		}

	}
	if (count(board.begin(), board.end(), EMPTY) == 0) {
		return TIE;
	}

	return NO_ONE;

}

inline bool isLegal(const vector<char>& board, int move) {
	
	return(board[move] == EMPTY);
}


int humanMove(const vector<char>& board) {
	int move = askNumber("Where will you move?", (board.size()-1));
	while (!isLegal(board, move)) {
		cout << "\n That square is already occupied\n";
		move = askNumber("Where will you move?", (board.size()-1));

	}
	cout << "Fine...\n";
	return move;

}


int computerMove(vector<char> board, char computer) {
	unsigned int move = 0;
	bool found = false;
	// check if there is a one way to win
	while (!found && move < board.size()) {
		if (isLegal(board, move)) {
			board[move] = computer;
			found = winner(board) == computer;
			board[move] = EMPTY;

		}	
		if (!found) {
			++move;
		}



	}
	if (!found) {
		move = 0;
		char human = opponent(computer);
		// check if there is a one way to human win
		while (!found && move < board.size()) {
			if (isLegal(board, move)) {
				board[move] = human;
				found = winner(board) == human;
				board[move] = EMPTY;
			}
			if (!found) {
				++move;
			}
		}
	}
	// check the optimal way to go
	if (!found) {
		move = 0;
		unsigned int i = 0;
		const int BEST_MOVES[] = { 4,0,2,6,8,1,3,5,7 };
		while (!found && i < board.size()) {
			move = BEST_MOVES[i];
			if (isLegal(board, move)) {
				found = true;
			}
			++i;
		}
	}
	cout << "I am going to put " << move << endl;
	return move;

}

void announceWinner(char winner, char computer, char human) {
	if (winner == computer) {
		cout << winner << "'s won!\n";
		cout << "As l predicted, human. I'am triumphant once more -- proof\n";
		cout << "that computers are superior to humans in all regards\n";

	}
	else if (winner == human) {
		cout << winner << " 's won!\n";
		cout << "No, no! It canno't be! Somehow you tricked me, human.\n";
		cout << "But never again! I, the computer, so swear it!\n";

	}
	else {
		cout << "It's a tie\n";
		cout << "You were most lucky, human and somehowmanaged to tie me.\n";
		cout << "Celebrate... for this is the best you will ever achieve\n";
	}



}*/









// OOP

/*#include<iostream>
using namespace std;
class mixedteam {
	string title;
	int blues;
	int reds;
public:
	mixedteam(const string& t, int b, int r) {
		title = t;
		blues = b;
		reds = r;
		if (blues < 1 or reds < 1 or blues * 2 < reds or reds * 2 < blues) {
			blues = reds = 1;
		}
	}
	void print();
	void change_blues(int bplus) {
		int bnew = blues + bplus;
		if (bnew < 1 or bnew * 2 < reds or reds * 2 < bnew);
		else
			blues = bnew;
	}


	void change_reds(int rplus) {
		int rnew = reds + rplus;
		if (rnew < 1 or rnew * 2 < blues or blues * 2 < rnew);
		else
			reds = rnew;


	}
};
void mixedteam::print() {
	cout << title << " " << blues << " " << reds << endl;
}



int main() {
	mixedteam b("First", 5, 3);
	b.print();
	b.change_blues(-4); 
	b.print();
	b.change_blues(-3); 
	b.print(); 
	b.change_reds(-2); 
	b.print(); 
	b.change_blues(-5); 
	b.print(); 
	b.change_reds(4); 
	b.change_reds(3); 
	b.print(); 
	mixedteam c("Second", 55, 3);
	c.print(); 
}*/







//pointing 
/*#include<iostream>
#include<string>
using namespace std;
int main() {
	int* pAPointer;
	int *pScore = 0;
	int score = 1000;
	pScore = &score;
	cout << "Assigning &score to pScore\n";
	cout << "&score is " << &score << "\n"; // addres of score
	cout << "pScore is " << pScore << "\n"; // address saved in pointer
	cout << "score is " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";



	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Adding 500 to *Score\n";
	*pScore += 500;
	cout << "score is " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Assigning &newScore to pScore\n";
	int newScore = 5000;
	pScore = &newScore;
	cout << "&newScore is " << &newScore << "\n";
	cout << "pScore is " << pScore << "\n";
	cout << "newScore is " << newScore << "\n";
	cout << "*pScore is " << *pScore << "\n";
	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str;
	cout << "str is " << str << "\n";
	cout << "*pStr is " << *pStr << "\n";
	cout << "(*pStr).size() is " << (*pStr).size() << "\n";
	cout << "pStr->size() is " << pStr->size() << "\n";
	return 0;

}*/





// swap pointer version

/*#include<iostream>
using namespace std;
void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);
int main() {
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << myScore << endl;
	cout << yourScore << endl;
	badSwap(myScore, yourScore);
	cout << myScore << endl;
	cout << yourScore << endl;
	goodSwap(&myScore, &yourScore);
	cout << myScore << endl;
	cout << yourScore << endl;
	return 0;




}

void badSwap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY) {
	int temp = *pX;
	*pX = *pY;
	*pY = temp;

}*/




/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
string* ptrToElement(vector<string>* const pVec, int i);
int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << *(ptrToElement(&inventory, 0)) << endl;
	string* pStr = ptrToElement(&inventory, 1);
	cout << *pStr << endl;
	string str = *(ptrToElement(&inventory, 2));
	cout << str << endl;
	*pStr = "Healing potion";
	cout << inventory[1] << endl;
	return 0;



}

string* ptrToElement(vector<string>* const pVec, int i) {
	return &((*pVec)[i]);
}*/



//Array passer 
/*#include<iostream>
using namespace std;
void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);
int main() {
	const int NUM_SCORES = 3;
	int highScores[NUM_SCORES] = { 5000, 3500, 2700 };
	cout << *highScores << endl;
	cout << *(highScores + 1) << endl;
	cout << *(highScores + 2) << endl;
	increase(highScores, NUM_SCORES);
	display(highScores, NUM_SCORES);
	return 0;
}

void increase(int* const array, const int NUM_ELEMENTS) {
	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		array[i] += 500;
	}
}
void display(const int* const array, const int NUM_ELEMENTS) {
	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		cout << array[i] << endl;
	}
}*/





// Simple critter
/*#include<iostream>
using namespace std;
class Critter {
public:
	int m_Hunger; // член данных
	void Greet(); // прототип члена функции
};
void Critter::Greet() {
	cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << "\n";

}

int main() {
	Critter crit1;
	Critter crit2;
	crit1.m_Hunger = 9;
	cout << "crit1's hunger level is " << crit1.m_Hunger << "\n";
	crit2.m_Hunger = 3;
	cout << "crit2's hunger level is " << crit2.m_Hunger << "\n\n";
	crit1.Greet();
	crit2.Greet();
	return 0;




}*/




//constructor critter
/*#include<iostream>
using namespace std;
class Critter {
public:
	int m_Hunger;
	Critter(int hunger = 0); // прототип конструктора
	void Greet();

};
Critter::Critter(int hunger) {    // определения конструктора
	cout << "A new critter has been born!!" << endl;
	m_Hunger = hunger;

}
void Critter::Greet() {
	cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << endl;
}
int main() {
	Critter crit(7);
	crit.Greet();
	return 0;

}*/


// Private Critetr
/*#include<iostream>
using namespace std;
class Critter {
private:
	int m_Hunger;
public:
	Critter(int hunger = 0);
	int GetHunger() const;
	void SetHunger(int hunger);


};
Critter::Critter(int hunger):
m_Hunger(hunger)
{
	cout << "A new critter has been born!!" << endl;

}
int Critter::GetHunger() const {
	return m_Hunger;
}

void Critter::SetHunger(int hunger) {
	if (hunger < 0) {
		cout << "You can't set a critter hunger to a negative number\n\n";
	}
	else {
		m_Hunger = hunger;
	}
}


int main() {
	Critter crit(5);
	cout << crit.GetHunger() << endl;
	crit.SetHunger(-1);
	crit.SetHunger(9);
	cout << crit.GetHunger() << endl;

	return 0;
}*/




/*#include<iostream>
using namespace std;
class Critter {
private: 
	int m_Hunger;
public:
	static int s_Total;
	Critter(int hunger = 0);
	static int GetTotal();

};
int Critter::s_Total = 0;
Critter::Critter(int hunger) :
	m_Hunger(hunger)
{
	cout << "A critter has been born!! " << endl;
	++s_Total;
}
int Critter::GetTotal() {
	return s_Total;
}


int main() {
	cout << "The total number of critters is: ";
	cout << Critter::s_Total << "\n\n";
	Critter crit1, crit2, crit3;
	cout << "\nThe total number of criters is: ";
	cout << Critter::s_Total << "\n\n";
	cout << Critter::GetTotal() << "\n";
	return 0;




}*/

// game Critter tagamotchi
/*#include<iostream>
using namespace std;
class Critter {
private:
	int m_Hunger;
	int m_Boredom;
	int GetMood() const;
	void PassTime(int time = 1);
public:
	Critter(int hunger = 0, int boredom = 0);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);

};



Critter::Critter(int hunger, int boredom) :
	m_Hunger(hunger),
	m_Boredom(boredom)
{
	cout << "Initialization:) " << endl;

}
inline int Critter::GetMood() const {
	return(m_Hunger + m_Boredom);
}

void Critter::PassTime(int time) {
	m_Hunger += time;
	m_Boredom += time;

}
void Critter::Talk() {
	cout << "I'm a critter and I feel: ";
	int mood = GetMood();
	if (mood > 15) {
		cout << "mad\n";
	}
	else if (mood > 10) {
		cout << "frustrated\n";
	}
	else if (mood > 5) {
		cout << "okey\n";
	}
	else {
		cout << "happy\n";
	}
	PassTime();

}

void Critter::Eat(int food) {
	cout << "Brruppp\n";
	m_Hunger -= food;
	if (m_Hunger < 0) {
		m_Hunger = 0;
	}
	PassTime();
}

void Critter::Play(int fun) {
	m_Boredom -= fun;
	if (m_Boredom) {
		m_Boredom = 0;
	}
	PassTime();



}



int main() {

	Critter crit;
	crit.Talk();
	int  choice;
	do {
		cout << "\nCritter Caretaker\n\n";
		cout << "0 - Quit\n";
		cout << "1 - Listen to your critter\n";
		cout << "2 - Feed your critter\n";
		cout << "3 - Play with your critter\n\n";
		cout << "Choice: ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Good bye!:)\n";
			break;
		case 1:
			crit.Talk();
			break;
		case 2:
			crit.Eat();
			break;
		case 3:
			crit.Play();
			break;
		default:
			cout << "Incorrect option upppps! " << endl;





		}






	} while (choice != 0);
	return 0;





}*/




// Critter farm
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Critter {
private:
	string m_Name;
public:
	Critter(const string& name = "");
	string GetName() const;

};
Critter::Critter(const string& name):
m_Name(name)
{
	cout << "Initioalization " << endl;
}

inline string Critter::GetName() const {
	return m_Name;
}

class Farm {
private:
	vector<Critter> m_Critter;
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;
};

Farm::Farm(int spaces) {
	m_Critter.reserve(spaces);

}
void Farm::Add(const Critter& aCritter) {
	m_Critter.push_back(aCritter);
}
void Farm::RollCall()const {
	for (vector<Critter>::const_iterator iter = m_Critter.begin();
		iter != m_Critter.end(); ++iter) {
		cout << iter->GetName() << "here\n";
	}
}



int main() {
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.GetName() << endl;
	Farm myFarm(3);
	cout << "\nAdding three critter to the farm\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));
	cout << "\nCalling Roll...\n";
	myFarm.RollCall();
	return 0;
}*/




// friend critter
/*#include<iostream>
#include<string>
using namespace std;
class Critter{
	friend void Peek(const Critter& aCritter);
	friend ostream& operator << (ostream& os, const Critter & aCritter);
public:
	Critter(const string& name = "");
private:
	string m_Name;

};
Critter::Critter(const string& name):
m_Name(name)
{}
void Peek(const Critter& aCritter);
ostream& operator << (ostream & os, const Critter & aCritter);


int main() {
	Critter crit("Poochie");
	cout << "Calling Peek() to access crit's private data member. m_Name:\n";
	Peek(crit);
	cout << "\nSending crit object to cout with the operator << operator:\n";
	cout << crit;
	return 0;
	
}
void Peek(const Critter& aCritter) {
	cout << aCritter.m_Name << endl;
}
ostream& operator <<(ostream& os, const Critter& aCritter) {
	os << "Critter object - ";
	os << "m_Name: " << aCritter.m_Name;
	return os;
}*/



//Heap
/*#include<iostream>
using namespace std;
int* intOnHeap();

int main() {
	int* pHeap = new int;
	*pHeap = 10;
	cout << *pHeap << "\n\n";
	int* pHeap2 = intOnHeap();
	cout << *pHeap2 << endl;
	delete pHeap;
	delete pHeap2;
	pHeap = 0;
	pHeap2 = 0;

	return 0;
}


int* intOnHeap() {
	int* pTemp = new int(20);
	return pTemp;
}*/




//Heap data member
/*#include<iostream>
#include<string>
using namespace std;
class Critter {
public:
	Critter(const string& name = "", int age = 0);
	~Critter();
	Critter(const Critter& c); // copy constuctor
	Critter& operator = (const Critter& c); // overloaded assigh operation
	void Greet() const;
private:
	string* m_pName;
	int m_Age;

};

Critter::Critter(const string& name, int age) {
	cout << "Constructor called\n";
	m_pName = new string(name);
	m_Age = age;
}
Critter::~Critter(){
	cout << "Destructor called\n";
	delete m_pName;

}
Critter::Critter(const Critter& c) {
	cout << "Copy Constructor is called\n";
	m_pName = new string(*(c.m_pName));
	m_Age = c.m_Age;
}
Critter& Critter::operator=(const Critter& c) {
	cout << "Overloaded Assignment operator is called\n";
	if (this != &c) {
		delete m_pName;
		m_pName = new string(*(c.m_pName));
		m_Age = c.m_Age;
	}
	return* this;
}

void Critter::Greet() const {
	cout << "I'm " << *m_pName << "and I'm " << m_Age << " years old ";
	cout << "&m_pName " << &m_pName << endl;

}
void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();


int main() {
	testDestructor();
	cout << endl;

	Critter crit("Poochie", 5);
	crit.Greet();

	testCopyConstructor(crit);
	crit.Greet();
	cout << endl;

	 testAssignmentOp();




	return 0;
}

void testDestructor() {
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy) {
	aCopy.Greet();
}

void  testAssignmentOp() {
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	cout << endl;
	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();

}*/




// Game Lobby

/*#include<iostream>
#include<string>
using namespace std;
class Player {
public: 
	Player(const string& name = "");
	string GetName() const;
	Player* GetNext()const;
	void SetNext(Player* next);
private:
	string m_Name;
	Player* m_pNext;




};

Player::Player(const string& name) :
	m_Name(name),
	m_pNext(0)
{}
string  Player::GetName()const {
	return m_Name;
}

Player* Player::GetNext() const {
	return m_pNext;
}
void Player::SetNext(Player* next) {
	m_pNext = next;
}

class Lobby {
	friend ostream& operator <<(ostream& os, const Lobby& aLobby);
public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void Clear();
private:
	Player* m_pHead;


};
Lobby::Lobby() :
	m_pHead(0)
{}
Lobby::~Lobby() {
	Clear();
}
void Lobby::AddPlayer() {
	cout << "Please enter the name of new player " << endl;
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	if (m_pHead == 0) {
		m_pHead = pNewPlayer;
	}
	else {
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0) {
			pIter = pIter->GetNext();
		}
		pIter->SetNext(pNewPlayer);
	}

}

void Lobby::RemovePlayer() {
	if (m_pHead == 0) {
		cout << "The game lobby is empty. No one to remove!\n";

	}
	else {
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}
}


void Lobby::Clear() {
	while (m_pHead != 0) {
		RemovePlayer();
	}
}

ostream& operator << (ostream& os, const Lobby& aLobby) {
	Player* pIter = aLobby.m_pHead;
	os << "\nHere's who's in the game lobby\n";
	if (pIter == 0) {
		os << "The lobby is empty\n";
	}
	else {
		while (pIter != 0) {
			os << pIter->GetNext() << endl;
			pIter = pIter->GetNext();
		}
	}
	return os;
}

int main() {
	Lobby myLobby;
	int choice;
	do {
		cout << myLobby;
			cout << " 0 - Exit the program " << endl;
			cout << " 1 - Add a player to the lobby " << endl;
			cout << " 2 - Remove a player from the lobby " << endl;
			cout << " 3 - Clear the lobby " << endl;
			cout << "Enter a choice " <<endl;
			cin >> choice;
			switch (choice) {
			case 0:
				cout << "Good Bye!\n";
				break;
			case 1:
				myLobby.AddPlayer();
					break;
			case 2:
				myLobby.RemovePlayer();
				break;
			case 3:
				myLobby.Clear();
				break;
			default:
				cout << "Incorrect choice " << endl;

			}






	} while (choice != 0);
	return 0;


}*/


	   
/*#include<iostream>
using namespace std;
class Point {
private:
	int y;
	int x;
public:
	void setCoord(int x, int y) {
		if (x > 10) {
			this ->x = x;
		}
		
		if (y < 100) {
			this ->y = y;
		}
		
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

	



};
void foo(Point& a) {
	cout << "x = " << a.getX() << " " << "y = " << a.getY() << endl;
}

int main() {
	Point pt;
	pt.setCoord(20, 7); 
	cout << pt.getX() << " " << pt.getY() << endl;
    foo(pt);
	



}*/
/*#include<iostream>
using namespace std;
class Human {
public:
	Human() {
		name = "";
	
	}
	Human(string name) {
		this->name = name;
	}
	Human(string name, int age) :
		Human(name)
	{
		//this->name = name; вместо этого делаем инициализаци двоиточием - через вызов 
		this->age = age;
	}
	Human(string name, int age, float weight) :
		Human(name, age)
	{
		this->weight = weight;
	}
private:
	string name;
	int age;
	float weight;


};

class Point {
public:
	Point() {
		cout << "Calling the constructor " << this << endl;

	}

	Point(int ptx, int pty):
	x(ptx), y(pty)
	{
		cout << "Calling the $$$$ constructor " << endl;
	}


	//Point(int x, int y) {
		//cout << "Calling the second constructor " << this << endl;
	    //this->x = x;
		//this->y = y;
		//}
	
	~Point() {

		cout << "Calling the destructor " << this << endl;
	}
private:
	int y;
	int x;
public:
	void SetCoord(int x, int y) {
		this->x = x;
		this->y = y;
	}
	




};

int main() {
	Point pt(5, 7);
	Human h;

}*/




// copy cobstructor

/*#include<iostream>
using namespace std;


class Point {
public:

	Point(const Point& other) {
		cout << "Calling copy Constructor " << this << endl;
		cout << other.x << " " << other.y << endl;
		this->x = other.x;
		this->y = other.y;
	}


	Point() {
		cout << "Calling the constructor " << this << endl;

	}

	Point(int ptx, int pty) :
		x(ptx), y(pty)
	{
		cout << "Calling the $$$$ constructor " << endl;
	}
	~Point() {

		cout << "Calling the destructor " << this << endl;
	}
private:
	int y;
	int x;
public:
	void SetCoord(int x, int y) {
		this->x = x;
		this->y = y;
	}


	int GetXY() {
		return x + y;
	}


};

void foo(Point pt) {
	cout << "Calling the function " << endl;
	
}

int main() {
	Point a(5, 6);
	foo(a);
	Point b(a);
	


}*/







/*#include<iostream>
using namespace std;
class Point {
public:

	Point(const Point& other) :
		nCoords(other.nCoords)
	
	{
		cout << "Calling copy constructor " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; i++) {
			coords[i] = other.coords[i];
		}

	}
	Point() {
		cout << "Calling the constructor " << endl;
	}
	Point(int size, int* arr) :
		nCoords(size)
	{
		cout << "Constructor of object " << this << endl;
		coords = new int[nCoords];
		for (int i = 0; i < nCoords; i++) {
			coords[i] = arr[i];
		}
	}
	~Point() {
		cout << "Calling the destructor of object " << this << endl;
	}
private:
	int* coords;
	int nCoords;

};



int main() {

	int coords[] = { 1,2 }, size = 2;
	Point a(size, coords);
	Point b(a);



	return 0;
}*/


/*#include<iostream>
using namespace std;
class Point {
public:
	Point() {
		nCount++;
	}
	static int getCount(){
		return nCount;
	}
private:
	static int nCount;
	int x, y;


};

int Point::nCount = 0;

int main() {
	Point p1, p2, p3;
	cout << Point::getCount() << endl;
	cout << p1.getCount() << endl;
}*/




// agrigation
/*#include<iostream>
using namespace std;
class DogCollar {
public:
	void run() {
		cout << "The dog is caring " << endl;
	}
};


class Dog {
public:
	void run() {
		feet.run();

	}
private:
	class Feet {
	public:
		void run() {
			cout << "The dog is running " << endl;
		}
	};


	Feet feet;
	DogCollar dogCollar;

};


int main() {




	Dog dog;
	dog.run();


	return 0;
}*/







/*#include<iostream>
#include<string>
using namespace std;
class CoffeGrinder{
private:
	bool CheckVoltage() {
		return true;
	}


public:
	void Start() {
		bool voltageIsNormal = CheckVoltage();
		if (voltageIsNormal) {
			cout << "VjuHHH! " << endl;
		}
		else {
			cout << "Beep, Beep " << endl;
		}
	}


};



class Point {
private:
	int x;
	int y;


public:
	Point(int Xvalue = 3, int yValue = 4) {
		x = Xvalue;
		y = yValue;

	}
	 
	int GetX() {
		return x;

	}

	int GetY() {
		return y;

	}



};


int main() {
	Point a(7, 88);
	a.GetX();
	a.GetY();
	Point b(45, 76);
	a.GetX();
	a.GetY();

	


	return 0;
}*/



// constructor overloading 
/*#include<iostream>
using namespace std;

class Point{
private:
	int x;
	int y;

public:
	Point() {
		x = 0;
		y = 0;

	}

	Point(int ValueX, int ValueY) {
		x = ValueX;
		y = ValueY;

	}
	Point(int X, bool Y) {
		x = X;
		if (Y) {
			cout << "True " << endl;
			y = 5;
		}
		else {
			cout << "False " << endl;
			y = -1;
		}
	}


	void Print() {

		cout << x << " " << y << endl;
	}



};


int main() {
	Point a;
	a.Print();
	Point b(44, 63);
	b.Print();
	Point c(37, true);
	c.Print();


	return 0;
}*/





/*#include<iostream>
using namespace std;

class MyClass{
	int *data;
public:
	MyClass(int size) {

		data = new int[size];
		for (int i = 0; i < size; i++) {
			data[i] = i;
		}
		cout << data << "Constructor is called " <<  endl;
	}

	~MyClass() {
		delete[] data;
		data = NULL; 
		cout << data << "Destructor is called " << endl;
	}




};

void Foo() {
	cout << "Foo begin " << endl;
	MyClass a(1);
	cout << "Foo end " << endl;
}

int main() {
	Foo();



	return 0;
}*/




/*#include<iostream>
using namespace std;

class Point {
private :
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
		cout << this << "Constructor " << endl;
	
	}

	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
		cout << this << "Constructor " << endl;

	}
	void Print() {
		cout << x << " " << y << endl;

	}
	void SetY(int y) {
		this->y = y;
	}


};

int main() {
	Point a;
	a.SetY(5);
	a.Print();
	


}*/



// Copy Constructor 
/*#include<iostream>
using namespace std;

class MyClass {
private:
	int Size;

public:
	int *data;
	MyClass(int size) {
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++) {
			data[i] = i;
		}
		cout << this << "Constructor is called " << endl;
	}



	~MyClass() {
	
		cout << this << "Destructor is called " << endl;
		delete[] data;
	}

	MyClass(const MyClass& other) {
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++) {
			this->data[i] = other.data[i];
		}
		cout << "Copy Constructor is called " <<this << endl;

	}



};




void Foo(MyClass value) {
	cout << "Foo function is called " << endl;
}

MyClass Foo2() {
	cout << "Foo_2 function is called " << endl;
	MyClass temp(2);
	return temp;
}

int main() {
	MyClass a(1);
	MyClass b(a);

	return 0;
}*/


/*#include<iostream>
#include<string>
using namespace std;
class GradeBook {
public:
	explicit GradeBook(string name);
	void SetCourseName(string name);
	string getCourseName() const;
	void DisplayMessage() const;
private:


	string courseName;


};
GradeBook::GradeBook(string name) {
	SetCourseName(name);
}
void GradeBook::SetCourseName(string name) {
	if (name.size() <= 25)
		courseName = name;
	if (name.size() > 25) {
		courseName = name.substr(0, 25);
		cerr << "Name \"" << name << "\" exceeds maximum length(25).\n"
			<< "Limiting courseName to first 25\n" << endl;
	}

}



string GradeBook::getCourseName() const{
	return courseName;
}
void GradeBook::DisplayMessage()const {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}




int main() {
	GradeBook gradeBook1("CS101 Introduction to Programming in C++");
	GradeBook gradeBook2("CS102 C++ Data Structures");
	cout << "gradeBook1's initial course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's initial course name is: "
		<< gradeBook2.getCourseName() << endl;
	gradeBook1.SetCourseName("CS101 C++ Programming");
	cout << "\ngradeBook1's course name is: "
		<< gradeBook1.getCourseName()
		<< "\ngradeBook2's course name is: "
		<< gradeBook2.getCourseName() << endl;




}*/




/*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	bool condition{ true };
	bool other_condition{ false };
	cout << condition << endl;
	cout << other_condition << endl;
	cout << endl;
	cout << boolalpha;
	cout << condition << endl;
	cout << other_condition << endl;
	cout << endl;
	cout << noboolalpha;
	cout << condition << endl;
	cout << other_condition << endl;
	int pos{ 34 };
	int neg{ -45 };
	cout << showpos;
	cout << pos << endl;
	cout << neg << endl;
	cout << noshowpos;
	cout << pos << endl;
	cout << neg << endl;
	int pos_int{ 717171 };
	cout << dec << pos_int << endl;
	cout << hex << pos_int << endl;
	cout << oct << pos_int << endl;
	cout << showbase;
	cout << dec << pos_int << endl;
	cout << hex << pos_int << endl;
	cout << oct << pos_int << endl;
	cout << uppercase;
	cout << fixed;
	cout << scientific;
	int a = 3.1111111;
	cout << setprecision(10) << a << endl;
	cout << showpoint; // show the fraction point 
	cout << "This is a nice message..." << endl << flush << endl; // sends directly to the terminal
	// setw(10) to set width
	//cout << right;
		//cout << left;
	// setfill('-') fill the empty space with dash charater
}*/





/*#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Critter {
public:
	Critter(const string& name = " ");
	string GetName() const;
private:
	string m_Name;

};

Critter::Critter(const string& name) :
	m_Name(name)
{}
inline string Critter::GetName() const {
	return m_Name;
}

class Farm {
public:
	Farm(int spaces = 1);
	void Add(const Critter& aCritter);
	void RollCall() const;
private:
	vector<Critter> m_Critter;


};


Farm::Farm(int spaces) {
	m_Critter.reserve(spaces);
}

void Farm::Add(const Critter& aCritter) {
	m_Critter.push_back(aCritter);
}

void Farm::RollCall() const {
	for (vector<Critter>::const_iterator iter = m_Critter.begin(); iter != m_Critter.end(); ++iter) {
		cout << iter->GetName() << " here " << endl;
	}
}


int main() {
	Critter crit("Poochie");
	cout << "My critter's name is: " << crit.GetName() << endl;
	cout << "\nCreation criter farm\n";
	Farm MyFarm(3);
	cout << "\nAdding three critters to the farm " << endl;
	MyFarm.Add(Critter("Moe"));
	MyFarm.Add(Critter("Larry"));
	MyFarm.Add(Critter("Curly"));
	cout << "\nCalling Roll...\n";
	MyFarm.RollCall();
	return 0;




}*/



/*#include<iostream>
#include<string>
using namespace std;
class Critter {
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCrittrer);
public:
	Critter(const string& name = "");
private:
	string m_Name;


};
Critter::Critter(const string& name):
	m_Name(name)
{}
void Peek(const Critter& aCritter);

ostream& operator<<(ostream& os, const Critter& aCritter);





int main() {
	Critter crit("Poochie");
	cout << "Calling Peek()  to access crit's private data member, m_Name\n";
	Peek(crit);
	cout << "\n Sending crit object to cout with the << operator :\n";
	cout << crit;
	return 0;





}
void Peek(const Critter& aCritter) {
	cout << aCritter.m_Name << endl;
}

ostream& operator<<(ostream& os, const Critter& aCritter) {
	os << "Critter Object - ";
	os << "m_Name: " << aCritter.m_Name;
	return os;
}*/




/*#include<iostream>
using namespace std;
int* intOnHeap();

int main() {
	int* pHeap = new int;
	*pHeap = 10;
		cout << *pHeap << endl;
		int* pHeap2 = intOnHeap();
		cout << intOnHeap() << endl;
		cout << *pHeap2 << endl;
		delete pHeap;
		delete pHeap2;
		pHeap = 0;
		pHeap2 = 0;
		return 0;


}


int* intOnHeap() {
	int* pTemp = new int(20);
	return pTemp;
}*/




/*#include<iostream>
#include<string>
using namespace std;
class Critter {
public:
	Critter(const string& name = "", int age = 0);
	~Critter();
	Critter(const Critter& c);
	Critter& operator=(const Critter& c);
	void Greet() const;
private:
	string* m_pName;
	int m_Age;

};

Critter::Critter(const string& name, int age) {
	cout << "Constructor is called " << endl;
	cout << this << endl;
	m_pName = new string(name);
	m_Age = age;
}

Critter::~Critter() {
	cout << "Destructor is called " << this << endl;
	delete m_pName;
}
 
Critter::Critter(const Critter& c) {
	cout << "Copy Constructor is called " << this <<endl;
	m_pName = new string(*(c.m_pName));
	cout << ((c.m_pName)) << endl;
	m_Age = c.m_Age;
}


Critter& Critter::operator=(const Critter& c) {
	cout << "Overloaded assignment Operator called" << this << endl;;
	if (this != &c) {
		delete m_pName;
		m_pName = new string(*(c.m_pName));
		m_Age = c.m_Age;
	}
	return *this;
}
void Critter::Greet() const {
	cout << "I'm " << *m_pName <<  "and I'm " << m_Age << " years old ";
	cout << this << endl;
	cout << &m_pName << endl;
}

void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();




int main() {
	testDestructor();
	cout << endl;

	Critter crit("Poochie", 5);
	crit.Greet();
	testCopyConstructor(crit);
	crit.Greet();
	cout << endl;
	testAssignmentOp();
	return 0;


}

void testDestructor() {
	Critter toDestroy("Rover", 3);
	toDestroy.Greet();

}

void testCopyConstructor(Critter aCopy) {
	aCopy.Greet();
}


void testAssignmentOp() {
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();
	cout << endl;

	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();



}*/







/*#include<iostream>
#include<string>
using namespace std;
class Player {
public:
	Player(const string& name = "");
	string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);
private:
	string m_Name;
	Player* m_pNext;

};
Player::Player(const string &name):
	m_Name(name), m_pNext(0)
{}

string Player::GetName() const {
	return m_Name;
}

Player* Player::GetNext()const {
	return m_pNext;
}
void Player::SetNext(Player* next) {
	m_pNext = next;
}

class Lobby {
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void Clear();
private:
	Player* m_pHead;

};


Lobby::Lobby():
	m_pHead(0)
{}

Lobby::~Lobby() {
	Clear();
}



void Lobby::AddPlayer() {
	cout << "Please enter the name of the new player: " << endl;
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	if (m_pHead == 0) {
		m_pHead = pNewPlayer;
	}
	else {
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0) {
			pIter = pIter->GetNext();
		}
		pIter->SetNext(pNewPlayer);
	}


}


void Lobby::RemovePlayer() {
	if (m_pHead == 0) {
		cout << "The game lobby is empty. No one to remove!\n";

	}
	else {
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}

}

void Lobby::Clear() {
	while (m_pHead != 0) {
		RemovePlayer();
	}


}

ostream& operator<<(ostream& os, const Lobby& aLobby) {
	Player* pIter = aLobby.m_pHead;
	os << "Lobby: " << endl;
	if (pIter == 0) {
		os << "The lobby is empty " << endl;
	}
	else {
		while (pIter != 0) {
			os << pIter->GetName() << endl;
			pIter = pIter->GetNext();
		}
	}

	return os;

}



int main() {
	Lobby myLobby;
	int choice;
	do {
		cout << myLobby;
		cout << "\nGame Lobby" << endl;
		cout << "0 - Exit the program " << endl;
		cout << "1 - Add a player to the lobby " << endl;
		cout << "2 - Remove a player from the lobby " << endl;
		cout << "3 - Clear the lobby " << endl;
		cout << endl << "Enter choice: ";
		cin >> choice;
		switch (choice) {
		case 0: cout << "Good-bye "; break;
		case 1: myLobby.AddPlayer(); break;
		case 2: myLobby.RemovePlayer(); break;
		case 3: myLobby.Clear(); break;
		default: cout << "That was not a valid choice ";


		}



	} while (choice != 0);
		return 0;
}*/




