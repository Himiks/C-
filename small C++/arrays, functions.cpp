#include<iostream>
#include<ctime>
using namespace std;
int main() {

	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;
	for (int i = 0; i < SIZE;) {
		alreadyThere = false;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == newRandomValue) {
				alreadyThere = true;
				break;
			}
		}
		if (alreadyThere == false) {
			arr[i] = newRandomValue;
			i++;
		}
	}



	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}




}




/*#include<iostream>
#include<ctime>
using namespace std;
int main() {

	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;
	for (int i = 0; i < SIZE;) {
		alreadyThere = false;
		int newRandomValue = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == newRandomValue) {
				alreadyThere = true;
				break;
			}
		}
		if (alreadyThere == false) {
			arr[i] = newRandomValue;
			i++;
		}
	}


	int minValue = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
	}



	cout << "The min value is :" << minValue << endl;
} */


/*#include<iostream>
#include<ctime>
using namespace std;
int main() {

	int const ROW = 5;
	int const COL = 8;
	int arr[ROW][COL];
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	


	
	

}*/


/*#include<iostream>
using namespace std;

void FillArray(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}
void PrintArray(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}

}


int main() {
	int const SIZE = 10;
	int arr[10];
	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);

}*/

/*#include<iostream>
using namespace std;

void f(int a = 5, double b = 0.5) {
	for (int i = 0; i <= a; i++) {
		cout << '$';
	}

}
int main() {
	f(4);
}*/


/*#include<iostream>
using namespace std;
template <class T>
void sum(T a) {
	cout << a << endl;
	
}
void main() {
	sum(2);
	
}*/


/*#include<iostream>
using namespace std;
int f(int a) {
	if (a < 1)
		return 0;
	a--;
	cout << a << endl;
	return f(a);

}

int main() {

	f(5);

}*/




/*#include<iostream>
using namespace std;


int fact(int N) {

	if (N == 0)
		return 0;
	if (N == 1)
		return 1;
	return N * fact(N - 1);
}


int main() {

	cout << fact(5) << endl;

}*/

// poiters
/*#include<iostream>
using namespace std;
int main() {
	int a = 5;
    int *px = &a; // * указатель на адресс а, & оператор взятия адресса
	cout << px << endl;
	int* px2 = &a;
	cout << px2 << endl;
	*px2 = 2;
	cout << a << endl;
	

}*/




/*#include<iostream>
using namespace std;
int main() {
	int const SIZE = 5;
	int arr[SIZE] = { 4,55,79,1,4 };
	for (int i = 0; i < SIZE; i++) {
		cout << *(arr+i) << endl;
	}
	cout << " ++++++++++++++++++++++++ " << endl;
	int *pArr = arr;
	

	for (int i = 0; i < SIZE; i++) {
		cout << pArr[i] << endl;
	}


}*/


/*#include<iostream>
using namespace std;
void Foo(int *pa, int *pb, int *pc) {
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;
	
}
int main() {
	int a = 0, b =0, c =1 ;
	cout << a << " " << b << " " << c << endl;
	cout << " Foo() " << endl;
	Foo(&a, &b, &c);
	cout << a << " " << b << " " << c << endl;


}*/

/*#include<iostream>
using namespace std;
void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}
int main() {
	int var1 = 31;
	int var2 = 64;
	cout << var1 << " " << var2 << endl;
	cout << " Swap " << endl;
	Swap(&var1, &var2);
	cout << var1 << " " << var2 << endl;



}*/



//#include<iostream>
//using namespace std;



/*void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 61;
	int b = 32; 
	cout << a << " " << b << endl;
	Swap(a, b);
	cout << a << " " << b << endl;



}*/



/*#include<iostream>
using namespace std;
template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
	
}
int main() {
	double a = 61.56;
	double b = 32.46;
	cout << a << " " << b << endl;
	Swap(a, b);
	cout << a << " " << b << endl;



}*/



// new and delete 
/*#include<iostream>
using namespace std;

int main() {
	int* pa = new int; // попросить память, получить область динамической памяти
	*pa = 10;
	cout << *pa << endl;
	delete pa; // очистить память выделеную для 10 
	cout << *pa  << endl;




}*/


// null pointer and nullptr



/*#include<iostream>
using namespace std;

int main() {
	int* pa = new int; // попросить память, получить область динамической памяти
	*pa = 10;
	cout << *pa << endl;
	delete pa; // очистить память выделеную для 10 
	pa = NULL;
	cout << *pa << endl;
	delete pa;
	
	


}*/


/*#include<iostream>
using namespace std;

int main() {
	int size = 0;
	cout << "Enter array size: " << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i]<< "\t";
		cout << arr + i << endl;
	}
	delete[] arr;


}*/


// двумерный динамический массив



/*#include<iostream>
using namespace std;

int main() {
	int rows;
    int cols;
	cin >> rows >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 20;
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
    for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;



}*/







/*#include <iostream>
using namespace std;
int main()
{
	cout << "Enter amount of numbers" << endl;
	int numEntries = 0;
	cin >> numEntries;
	int* pointsToints = new int[numEntries];
	for (int counter = 0; counter < numEntries; ++counter) {
		cout << "Enter " << counter << endl;
    	cin >>* (pointsToints + counter);
	}
	cout << "Entered numbers" << endl;
	for (int counter = 0; counter < numEntries; ++counter) {
		cout << *(pointsToints++) << " ";
	}
	pointsToints -= numEntries;
	delete[] pointsToints;




}*/




/*#include<iostream>
using namespace std;
	void printArray(int* aa, int n) {
		for (int i = 0; i < n; ++i)
			cout << aa[i] << ' ';
		cout << endl;

	}
	int main() {
		int aa[5] = { 1,8,4,6,5 };
		printArray(aa, 5);
		aa[2] += 5;
		cout << aa[2] << endl;


}*/

/*#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
	// Set up the random number generator
	srand(static_cast<unsigned int>(time(0)));

	int playerNumber;
	cout << "Think of a number between 1 and 100, and I will try to guess it.\n";
	cout << "Enter 0 if I guessed your number.\n";

	int minGuess = 1;
	int maxGuess = 100;
	int guess;

	do {
		// Attempt to guess the number within the specified range
		guess = minGuess + rand() % (maxGuess - minGuess + 1);
		

		cout << "Is it " << guess << "?\n";
		cout << "If I guessed correctly, enter 0. If your number is greater, enter 1. If it's smaller, enter -1: ";
		cin >> playerNumber;

		// Update the range based on the player's response

		if (playerNumber == 1) {
			minGuess = guess + 1;
		}
		else if (playerNumber == -1) {
			maxGuess = guess - 1;

		
		}
		

		

	} while (playerNumber != 0);

	cout << "Hooray! I guessed the number.\n";

	return 0;
}
		*/




/*#include <iostream>
using namespace std;


void FillArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

}
void ShowArray(const int* const arr, const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

}
void push_back(int*& arr, int& size, const int value) {
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++) {
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete[] arr;
	arr = newArray; // указатель передаем для массива, а ссылку для того чтобы перевести указатель с первого массива на новый массив как написано сейчас в этой строке;

}
void pop_back(int*& arr, int& size) {
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++) {
		newArray[i] = arr[i];
	}
	delete[] arr;
	arr = newArray;


}
int main() {
	int size = 5;
	int* arr = new int[size];
	





	FillArray(arr, size);
	ShowArray(arr, size);
	push_back(arr, size, 111);
	cout << endl;
	ShowArray(arr, size);
	pop_back(arr, size);
	cout << endl;
	ShowArray(arr, size);

	delete[] arr;

	
	// сделать с началом и середина;

}*/


/*#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum fields { WORD, HINT, NUM_FIELDS };

const int NUM_WORDS = 6;

const string WORDS[NUM_WORDS][NUM_FIELDS] = {
	{"lier", "Durilka kartonnaya obmanut hotel?"},
	{"wall", "Do you feel you're banging your head against something?"},
	{"glasses", "These might help you see the answer."},
	{"labored", "Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
};

int main() {
	srand(static_cast<unsigned int>(time(0)));

	int choice = rand() % NUM_WORDS;
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	string jumble = theWord; // Shuffled version of the word
	int length = jumble.size();

	for (int i = 0; i < length; ++i) {
		int index1 = rand() % length;
		int index2 = rand() % length;

		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit")) {
		if (guess == "hint") {
			cout << theHint;
		}
		else {
			cout << "Sorry, that's not it.";
		}

		cout << "\n\nYour guess: ";
		cin >> guess;

		if (guess == theWord) {
			cout << "\nThat's it! You guessed it!\n";
		}
	}

	cout << "\nThanks for playing.\n";
	return 0;
}*/



/*#include<iostream>
using namespace std;
int &change(int aa[], int i) {
	return aa[i];

}
void change2(int aa[], int i, int val) {
	aa[i] = val;

}


void print(const int aa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << aa[i] << ' ';

	}
	cout << endl;
}

int main() {
	const int n = 5;
	int aa[n] = { 1,8,4,6,5 };
	print(aa, n);
	change(aa, 2) = 444;
	print(aa, n);
	change2(aa, 3, 666);
	print(aa, n);

}*/




/*#include<iostream>
#include<string>
using namespace std;


string DataFromBD() {
	return "Data From BD";
}


void ShowInfo() {

	cout << DataFromBD() << endl;

}

int main() {
	
	ShowInfo();
}*/





/*#include <iostream>
using namespace std;

int main() {
	const int LongSize = 30;
	const int ShortSize = 5;
	int longSeq[LongSize];
	int shortSeq[ShortSize];

	
	cout << "Enter the longer sequence (30 elements): ";
	for (int i = 0; i < LongSize; i++) {
		cin >> longSeq[i];
	}

	
	cout << "Enter the shorter sequence (5 elements): ";
	for (int i = 0; i < ShortSize; i++) {
		cin >> shortSeq[i];
	}
	int shortIndex = 0;
	for (int i = 0; i < LongSize; i++) {
		if (longSeq[i] == shortSeq[shortIndex]) {
			shortIndex++;
			if (shortIndex == ShortSize) {
				
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	// If we reach here, the shorter sequence is not found in the longer sequence
	cout << "No" << endl;

	return 0;
}*/





/*#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const int n = 8;

	// Input the size of the array
	//cout << "Enter the size of the array: ";
	//cin >> n;
     if (n < 3) {
		cout << "Array should have at least three elements." << endl;
		return 1;  // Indicate error
	}

	// Input the elements of the array
	int A[n];
	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	// Calculate the total sum of the array
	int totalSum = 0;
	for (int i = 0; i < n; i++) {
		totalSum += A[i];
	}

	// Variables to keep track of minimum difference and indices
	int minDifference = INT_MAX;
	int minDifferenceIndices[n];  // Maximum possible size
	int minDifferenceCount = 0;

	// Variables to calculate the sum of elements before and after each element
	int sumBefore = 0;
	int sumAfter = totalSum - A[0];

	// Iterate through the array starting from the second element
	for (int i = 1; i < n - 1; i++) {
		// Update the sumBefore and sumAfter for the current element
		sumBefore += A[i - 1];
		sumAfter -= A[i];

		// Calculate the absolute difference
		int currentDifference = abs(sumBefore - sumAfter);

		// Check if the current difference is smaller than the minimum difference
		if (currentDifference < minDifference) {
			// Update the minimum difference and clear previous indices
			minDifference = currentDifference;
			minDifferenceCount = 0;
			minDifferenceIndices[minDifferenceCount++] = i;
		}
		else if (currentDifference == minDifference) {
			// If the current difference is equal to the minimum difference, add the index to the list
			minDifferenceIndices[minDifferenceCount++] = i;
		}
	}

	// Display the result
	if (minDifferenceCount == 0) {
		cout << "No such index found." << endl;
	}
	else {
		cout << "Indices with minimum difference: ";
		for (int i = 0; i < minDifferenceCount; i++) {
			cout << minDifferenceIndices[i] << " ";
		}
		cout << endl;
	}

	return 0;  // Indicate success
}*/






/*#include <iostream>
#include<ctime>
#include <string>

using namespace std;

int main() {
	int temp;
	int index1;
	int index2;
	enum field {Word, Hint, NUM_WORD};
	const int SIZE = 6;
	string GAME[SIZE][NUM_WORD]{
		{"glasses", "It helps you to see"},
		{"frog", "Green alive and live in the pond"},
		{"school", "children study there"},
		{"table", "you can study on it at home"},
		{"friend", "every people must heva a least one"},
		{"God", "People can't live withot Him"}
	};
	srand(time(NULL));
	int choice = rand() % SIZE;
    string theword = GAME[choice][Word];
	string thehint = GAME[choice][Hint];
    

	string jumble = theword;
	int lenght = jumble.size();


	for (int i = 0; i < lenght; i++) {
		index1 = rand() % lenght;
		index2 = rand() % lenght;

		temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;

	}
	cout << "\t\t\t\t\t\t\tWELCOME TO THE GAME JUMBLE " << endl;
	cout << "HEAR YOU SHOULD GUESS THE WORD TO WIN " << endl;
	cout << "ENTER 'HINT' IF YOU NEED HELP " << endl;
	cout << "ENTER 'QUIT' IF YOU TRIED YOUR LUCK AND COULD JUSTIFY IT! " << endl;
	cout << "THE WORD TO BE GUESSED IS " << jumble << endl;

	string guess;
	cout << " ENTER YOU GUESS: ";
	cin >> guess;

	while (guess != theword && guess != "quit") {
		if (guess == "Hint") {
			cout << thehint << endl;
		}
		
		else {
			cout << "Incorrect answer, try again " << endl;
		}
			cout << "YOUR GUESS " ;
			cin >> guess;
		if (guess == theword) {
			cout << "MY PERSONAL CONGRATULATION, YOU GUESSED THE WORD " << endl;
		}


	}

	cout << "HASTALAVISTA!!!" << endl;
	cout << "thanks for the game " << endl;
	return 0;


}*/



// task number 1 ;


/*#include <iostream>

using namespace std;

int main() {
	const char SIZE = 100;
	char arr[SIZE];
	int n = 0;
	bool flag = false;
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
		if (arr[i] == '.') {
			break;
		}
		n++;

	}
	for (int i = 0; i < n/2; i++) 
		if (arr[i] == arr[n - 1 - i]) {
			flag = true;
		}
	if (flag) {
		cout << "YES" << endl;
	}
	
	else {
		cout << " NO " << endl;
	}
}*/









/*#include<iostream>
using namespace std;
int main() {
	const int S = 10;
	const int R = 10;
	int arr1[S];
	int arr2[R];
	for (int i = 0; i < S; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < R; i++) {
		cin >> arr2[i];
	}
	for (int i = 0; i < S; i++) {
		for (int j = 0; j < R; j++) {
			if (arr1[i] == arr2[j]) {
				cout << arr1[i] << " ";
			}
		}
	}


}*/





/*#include<iostream>
using namespace std;
int main() {

	int index = 1;
	const int S = 10;
	int arr[S];
	for (int i = 0; i < S; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < S; i++) {
		for (int j = 0 + index; j < S; j++) {
			if (arr[i] == arr[j]) {
				arr[j] = -1;

			}

		}
		index++;

	}
	for (int i = 0; i < S; i++) {
		if (arr[i] != -1) {
			cout << arr[i] << " ";
		}

	}
}*/




/*#include <iostream>

using namespace std;

int main() {
	const int MAX_SIZE = 10; // Maximum size of the array
	int arr[MAX_SIZE];
	int N;

	cout << "Enter the value of N: ";
	cin >> N;

	if (N <= 0 || N > MAX_SIZE) {
		cout << "Invalid input for N. N should be between 1 and " << MAX_SIZE << "." << endl;
		return 1;
	}

	cout << "Enter " << N << " integers:" << endl;

	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	cout << "Distinct entered numbers:" << endl;

	for (int i = 0; i < N; ++i) {
		// Check if the current number is unique by comparing with previous numbers
		bool isUnique = true;
		for (int j = 0; j < i; ++j) {
			if (arr[i] == arr[j]) {
				isUnique = false;
				break;
			}
		}

		// If the number is unique, print it
		if (isUnique) {
			cout << arr[i] << " ";
		}
	}

	cout << endl;

	return 0;
}*/




/*#include<iostream>
using namespace std;
int main() {
	const int num = 11;
	const int str = 10;
	int arr1[num];
	char arr2[str];
	int answer = 0;
	int count = 0;

	for (int i = 0; i < num; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < str; i++) {
		cin >> arr2[i];
	}
	for (int i = 0, j = 0; i < num; i++, j++) {

		if (i < 10) {
			cout << arr1[i] << " ";
		}
		if (count < 10) {
			cout << arr2[j] << " ";
		}
		if (i >= 10) {
			cout << "=" << " " << arr1[i];
		}
		if (arr2[j] == '-') {
			answer -= arr1[i];
			count++;
		}
		else if (arr2[j] == '+') {
			answer += arr1[i];
			count++;
		}
	}
	if (answer == arr1[10]) {
		cout << " Yep " << endl;
	}
	else {
		cout << "Nope" << endl;
	}
}*/







