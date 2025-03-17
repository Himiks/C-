#include<iostream>
using namespace std;
constexpr int Square(int number) {
	return number * number;
}
int main() {
	const int ARRAY_LENGHT = 5;
	int myNumbers[ARRAY_LENGHT] = { 5, 10, 0, -101, 20 };
	int moreNumbers[Square(ARRAY_LENGHT)];
	cout << "Enter a numbeer " << endl;
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "Enter a new number " << endl;
	int newValue = 0;
	cin >> newValue;

	myNumbers[elementIndex] = newValue;
	moreNumbers[elementIndex] = newValue;
	cout << elementIndex <<" " << myNumbers[elementIndex] << endl;
	cout << elementIndex <<" " << moreNumbers[elementIndex] << endl;

}
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> DynArrNums(3);
	DynArrNums[0] = 365;
	DynArrNums[1] = -421;
	DynArrNums[2] = 789;
	cout << "Numbers are :" << DynArrNums.size() << endl;
	cout << "Enter a new numbr " << endl;
	int anotherNum = 0;
	cin >> anotherNum;
	DynArrNums.push_back(anotherNum);
	cout << "Numbers are " << DynArrNums.size() << endl;
	cout << "Last element is : " << endl;
	cout << DynArrNums[DynArrNums.size() - 1 ] << endl;
	return 0;
}



#include<iostream>
#include<vector>
using namespace std;
int main() {
	char sayHello[] = { 'H', 'e', 'l', 'l', 'o', ' ',
					   'W', 'o', 'r', 'l', 'd', '\0' };
	cout << sayHello << endl;
	cout << sizeof(sayHello) << endl;
	sayHello[5] = '\0';
	cout << sayHello << endl;
	cout << sizeof(sayHello) << endl;
	return 0;
}


#include<iostream>
#include<string>
using namespace std;
int main() {
	string greetString("Hello ");
	cout << greetString << endl;
    
	cout << " Enter a line " << endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "Enter another line " << endl;
	string secondLine;
	getline(cin, secondLine);

	cout << "Result " << endl;
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;
	cout << " Cope of line " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;
	cout << "Lenght " << concatString.length() << endl;


}

#include<iostream>
using namespace std;
int main() {
	enum Square
	{
		Empty = 0,
		Pawl,
		Rook,
		Knight,
		Bishop,
		King,
		Queen
	};
	Square chessBoard[8][8];
	chessBoard[0][0] = chessBoard[0][7] = Rook;
	chessBoard[7][0] = chessBoard[7][7] = Rook;
	return 0;
}
