#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int num;
	int guess;
	int tries = 0;
	srand(time(NULL));
	num = (rand() % 100) + 1;

	cout << " ******* NUMBER GUESSING GAME ******* \n";
	do {
		cout << " Enter a guess between 1 - 100 " << endl;
		cin >> guess;
		tries++;
		if (guess > num ) {
			cout << " Too high! "  ;
		}
		else if (guess < num ){
			cout << " Too low " ;
		}
		
		else {
			cout << " CORRECT! " << " tries " << tries << " num " << " " <<  num;
		}

	} while (guess != num);
}




#include<iostream>
#include<ctime>
using namespace std;
int main() {
	cout << "****************** Welcome to the game 'Guess the number!'***********************" << endl;
	srand(int(time(NULL)));
	int guessNum;
	int guess;
	cout << "guess the number:\n";
	cin >> guess;
	int random = 0;
	int lowRange, highRange;
	cout << "Enter a range: " << endl;
	cin >> lowRange >> highRange;
	cout << "The computer will guess the numberin the range:" << "(" << lowRange << " - " << highRange << ")" << endl;
	do {
		random = rand();
		guessNum = lowRange + random % (highRange - lowRange + 1); // see more detail

		if (guessNum < guess) {
			cout << "Too low!!" << guessNum << endl;
			lowRange += 1;
		}
		if (guessNum > guess) {
			cout << "Too high!!" << guessNum << endl;
			highRange -= 1;
		}
		if(guessNum==guess) {
			cout << "Congratulation you guessed the number!! " << guessNum << endl;
		}


	} while (guessNum != guess);



}



#include<string>
#include<iostream>
using namespace std;
int main() {

	enum field{WORD, HINT, NUM};
	const int SIZE = 5;
	const string arr[SIZE][NUM] = { {"university", "you go there every day"},
		{"glass", "a ... of milk"},
		{ "program", "a set of rules that perform a certain task"},
		{"computer", "you program on it"},
		{"Hello", "... World!"} };
		srand(int(time(NULL)));
		int TheWord = rand() % SIZE;
		string Guess_WORD = arr[TheWord][WORD];
		string WORD_HINT = arr[TheWord][HINT];
		char answer = 'y';
		string jumble = Guess_WORD;
		int length = jumble.size();
		int points = length;
		for (int i = 0; i < length; i++) {
			int  index1 = rand() % length;
			int index2 = rand() % length;
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;


		}

		cout << "WELCOME TO THE GAME JUMBLE.\n\n";
		cout << "The main task of this game is too guess the word that computer mixed\n\n";
		cout << "GOOD LUCK!! You will need it;)\n\n";
		string guess;
		cout << "So the word mixed by computer is: " << jumble << endl;
		do {

			cout << "Enter your guess:\n";
			cin >> guess;
			if (guess == Guess_WORD) {
				cout << "Congratulation, you guess the word " << Guess_WORD << " for this word you gained: " << points << " points " <<  endl;
				cout << " Would you like to continue the game? (y/n)" << endl;
				cin >> answer;
				if (answer == 'y') {
					int TheWord = rand() % SIZE;
					string Guess_WORD = arr[TheWord][WORD];
					string WORD_HINT = arr[TheWord][HINT]; 
					string jumble = Guess_WORD; 
					int length = jumble.size(); 
					for (int i = 0; i < length; i++) { 
						int  index1 = rand() % length; 
						int index2 = rand() % length; 
						char temp = jumble[index1]; 
						jumble[index1] = jumble[index2]; 
						jumble[index2] = temp; 
						

					}
					cout << "So the word mixed by computer is: " << jumble << endl;
				}

			}
			
			if (guess == "Hint") {
				cout << WORD_HINT << endl;
				points -= 1;

			}
			else if(guess != Guess_WORD) {
				cout << "NOPE. Try again " << endl;
			}
			

		} while (guess != Guess_WORD or answer =='y');
		

}


