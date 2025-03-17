
#include<iostream>
using namespace std;

class Node {
public:
	int Value;
	Node* next;

};
void PrintList(Node*n) {
	while (n != NULL) {
		cout << n->Value << endl;
		n = n->next;
	}
}

int main() {

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	head->Value = 1;
	head->next = second;
	second->Value = 2;
	second->next = third;
	third->Value = 3;
	third->next = NULL;
	PrintList(head);



	return 0;
}





/*#include<iostream>
using namespace std;

class Node {
public:
	int Value;
	Node* next;

};
void PrintList(Node* n) {
	while (n != NULL) {
		cout << n->Value << endl;
		n = n->next;
	}
}


void insertAtTheFront(Node**head, int newValue){
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->next = *head;
	*head = newNode;
}
void insertAtTheEnd(Node**head, int newValue) {
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->next = NULL;
	if (*head == NULL) {
		*head = newNode;
		return;
	}   
	Node* last = *head;
	cout << last << endl;
	while (last->next!= NULL) {
		last = last->next;
	}
	last->next = newNode; 

}

void insertAfter(Node* previous, int newValue) {
	if (previous == NULL) {
		cout << "Previous can't be NULL";
		return;
	}
	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->next = previous->next; // указывает на -1 ? // node указывает на -1 а у node просто есть значение которое добавлятся между но ничешл не смещаеться просто указатели меняться
	cout << previous->Value << endl;
	cout << previous->next << endl;
	previous->next = newNode; // head указывает на node
	cout << previous->Value << endl;



}

int main() {

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	head->Value = 1;
	head->next = second; 
	second->Value = 2;
	second->next = third;
	third->Value = 3;
	third->next = NULL;
	insertAtTheFront(&head, -1); 
	insertAtTheFront(&head, -2);
	PrintList(head);
	insertAtTheEnd(&head, 4); // how does third know that it should point to last 
	insertAtTheEnd(&head, 5); // how does last know that it should point to last
	PrintList(head);
	insertAfter(head, -1);
	PrintList(head);
	insertAfter(head, -2);
	PrintList(head);




	return 0;
}*/




// stack
/*#include<iostream>
#include<stack>
using namespace std;
void printStackElements(stack<int> stack) {
	while (!stack.empty()) {
		cout << stack.top() << endl;
		stack.pop();
	}

}



int main() {
	stack<int> numberStack;
	numberStack.push(5);
	numberStack.push(6);
	numberStack.push(7);
	numberStack.pop();
	if (numberStack.empty()) {
		cout << "The stack is empty " << endl;
	}
	else {
		cout << "The stack is not empty " << endl;
	}
	cout << "size " << numberStack.size() << endl;
	
	printStackElements(numberStack);


}*/




#include<iostream>
#include<queue>
using namespace std;
/*void printQueue(queue<string> queue) {
	int index = 1;
	while (!queue.empty()) {
	
		cout << index <<") " << queue.front() << endl;;
		queue.pop();
		index++;
	}
	cout << endl;
	if (queue.empty()) {
		cout << "All tasks are finished " << endl;
	}

}



int main() {
	queue<string> myQueue;
	cout << "My schedule: " << endl;
	myQueue.push("7:00 - get up");
	myQueue.push("7:30 - having breakfast");
	myQueue.push("8:30 - quiet time");
	myQueue.push("9:30 - university studing");
	myQueue.push("15:00 - going home");
	myQueue.push("16:00 - studing home");
	myQueue.push("18:30 - boxing");
	myQueue.push("21:00 - lunch");
	myQueue.push("22:00 - book");
	myQueue.push("23:00 - Going to bed");
	//cout << myQueue.size() << endl;
	cout << myQueue.front() << endl;
	cout << myQueue.back() << endl;
	myQueue.pop();
	cout << myQueue.front() << endl;
	//cout << "My queue " << endl; 
	//printQueue(myQueue);




}*/


// map
/*#include<iostream>
#include<map>
//#include<unordered_map>
#include<string>
using namespace std;
int main() {
	map<string, string> myDictionary;
	myDictionary.insert(pair<string, string>("apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("banana", "die banana"));
	myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
	myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

	myDictionary["strawberry"] = "Die Erdbeere";
	cout << myDictionary.size() << endl;
	myDictionary.clear();

	for (auto pair : myDictionary) {
		cout << pair.first << " - " << pair.second << endl;
	}


	return 0;
}*/





/*#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;
int main() {
	map<string, list<string>> Pockedex;
	list<string> pikachuAttacks{ "thunder shock", " tail whip ", "quick attack" };
	list<string> charmanderAttacks { "flame thrower", " scary face " };
	list<string> chikoritaAttcks { "razor leaf", " poison powder "};

	Pockedex.insert(pair<string, list<string>>("pickachu", pikachuAttacks));
	Pockedex.insert(pair<string, list<string>>("charmander", charmanderAttacks));
	Pockedex.insert(pair<string, list<string>>("chikorita", chikoritaAttcks));

	for (auto pair : Pockedex) {
		cout << pair.first << " - ";
		for (auto attack : pair.second) {
			cout << attack << ", ";
		}
		cout << endl;
	}
}*/




/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Square {
public:
	int side;
	Square(int side) :
		side(side)
	{}

};
	bool compare_squares(Square x, Square y) {
		return x.side < y.side;
	}

int main() {

	int array[] = { 9,4 ,5 ,8, 3, 7, 2, 6,0,1 };
	sort(array, array + 10, greater<int>());
	for (auto i : array) {
		cout << i << " ";
	}
	cout << endl;

	Square array2[] = { Square(6), Square(9), Square(4), Square(3) };
	sort(array2, array2 + 4, compare_squares);

	for (int i = 0; i < 4; i++) {
		cout << array2[i].side << " ";
	}
	cout << endl;


	vector<int> vector1{ 9,4,5,8,3,7,2,6,0,1 };
	sort(vector1.begin(), vector1.end());
		for (int value : vector1) {
			cout << value << " ";
		}
		cout << endl;


}*/



/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct compare_squares {

	bool operator()(int x, int y) {
		return x < y;
	}
};

int main() {

	int array[] = { 9,4 ,5 ,8, 3, 7, 2, 6,0,1 };
	sort(array, array + 10, greater<int>());
	for (auto i : array) {
		cout << i << " ";
	}
	cout << endl;

	int array2[] = { 8,6,5,4 };
	sort(array2, array2 + 4, compare_squares());

	for (int i = 0; i < 4; i++) {
		cout << array2[i] << " ";
	}
	cout << endl;

}*/


// vector
/*#include<iostream>
#include<vector>
using namespace std;
int main() {

	vector<int> myVector;
	vector<int> myVector2 = { 0,484,484,999 };
	vector<int> myVector3;
	myVector3.reserve(10);
	myVector3.push_back(1);
	myVector3.push_back(44);
	myVector3.push_back(77);
	myVector3.push_back(114);
	for (auto& i : myVector3) {
		cout << i << " ";
	}
	cout << endl;
	cout << myVector3.capacity() << endl;
	 myVector3.shrink_to_fit();
	 cout << myVector3.capacity() << endl;
	 for (auto& i : myVector3) {
		 cout << i << " ";
	 }
	 cout << endl;


	 myVector3.resize(20, 400);


	// myVector3.insert();
	 //myVector3.erase();
	 

	for (auto& i : myVector3) {
		cout << i << " ";
	}
	cout << endl;


	myVector.push_back(1);
	myVector.push_back(44);
	myVector.push_back(77);
	myVector.push_back(114);
	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	cout << endl;
	myVector[0] = 5000;
	cout << myVector.at(2) << endl;
	for (auto &i : myVector) {
		cout << i << " ";
	}
	cout << endl;

	//myVector.clear();
	myVector.pop_back();
	for (auto& i : myVector) {
		cout << i << " ";
	}
	cout << endl;

	for (auto& i : myVector2) {
		cout << i << " ";
	}
	cout << endl;

	cout << myVector.capacity() << endl;
	


	return 0;
}*/



// iterators

/*#include<iostream>
#include<vector>
using namespace std;
int main() {
 vector<int> myVector = { 1,9,44,422,676,78 };
 vector<int> ::iterator iter = myVector.begin();
 //it = myVector.begin();
 //*it = 1000;
 //it++;
 //it += 2;
 //it--;
 //cout << *it << endl;
 for (vector<int> ::iterator it = myVector.begin(); it != myVector.end(); it++) {
	 cout << *it << " ";
 }
 cout << endl;


 for (vector<int> ::reverse_iterator it = myVector.rbegin(); it != myVector.rend(); it++) {
	 cout << *it << " ";
 }
 cout << endl;

 //advance(iter, 3);
 //cout << *iter << endl; 
 //myVector.insert(iter+3, 999);
 //myVector.insert(iter, 999);
 advance(iter, 4);
 myVector.insert(iter, 999);

	 for (vector<int> ::iterator it = myVector.begin(); it != myVector.end(); it++) {
		 cout << *it << " ";
	 }
 cout << endl;
 vector<int> ::iterator it2 = myVector.begin();
 //myVector.erase(it2);
 myVector.erase(it2, it2 + 3); // till 3

 for (vector<int> ::iterator it = myVector.begin(); it != myVector.end(); it++) {
	 cout << *it << " ";
 }

}*/





/*#include<iostream>
#include<list>
#include<vector>
using namespace std;
template<typename T>
void PrintList(const list<T>& list) {

	for (auto i = list.cbegin(); i != list.cend(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

}



int main() {
	vector<int> Vec = { 1,2,3,4,5 };
	reverse(Vec.begin(), Vec.end());
	cout << Vec[0] << endl;
	list<int> Mylist = { 15,22,34 };
	auto iter = Mylist.begin();
	Mylist.push_back(55);
	Mylist.push_front(45);
	//advance(iter, 4);
	Mylist.sort();
	// from smollest to largest
	Mylist.insert(iter, 333);

	//Mylist.pop_back();
	//Mylist.pop_front();
	//cout << Mylist.size() << endl;
	//Mylist.unique(); // delete all dublicates that goes последовательно;
//	Mylist.reverse();
	//Mylist.clear();
	list<int> ::iterator it = Mylist.begin(); // or auto it = my.List.begin();
	//cout << *it << endl;

	for (auto i = Mylist.begin(); i != Mylist.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;








}*/




/*#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main() {
	vector<int> Vec = { 7,8,55,33,12 };
	list<int> myList = { 66,789,23,90 };
	auto iter = myList.begin();
	auto  it = Vec.begin();

	advance(iter, 3);
	//++iter;
	myList.insert(iter, 88);
	for (auto& i : myList) {
		cout << i << " ";
	}
	cout << endl;
	//advance(it, 6);
	Vec.erase(it);
	myList.erase(iter);
	//myList.remove(23);
	myList.assign(3, 15); // fill an array with 3 nummbers 15 and delte others;
	list<int> myList2 = { 19,66,44,22 };
	myList.assign(myList2.begin(), myList2.end());


	myList.insert(iter, 88);
	for (auto& i : myList) {
		cout << i << " ";
	}
	cout << endl;

	Vec.insert(it + 3, 23);
	Vec.erase(it);
	for (auto& i : Vec) {
		cout << i << " ";
	}
	cout << endl;





}*/





//prefix vs postfix


/*#include<iostream>
#include<vector>
#include<list>
using namespace std;
template <typename T>
void PrintList(const list<T>& list) {

	for (auto i = list.cbegin(); i != list.cend(); ++i) {
		cout << *i << " ";
	}
	cout << endl;

}




int main() {
	int a = 5;
	 //cout << a++ << endl;
	//cout << ++a << endl;
	list<int> ::iterator it;
	list<int> myList = { 1,2,3,4,5,6 };
	//it++;
	//++it;
	PrintList(myList);




}*/

// linked list (very interesting)
/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;
	elem(int n) {
		num = n;
		next = NULL;

	}

};

void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next;

	}
	cout << endl;
}

void rem(elem*& first) {
	while (first) {
		elem* p = first->next;
		delete first;
		first = p;
	}

}

void push_back(elem*& first, elem*& last, int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		last = p;
	}


}

int main() {
	int aa[] = { 1,8,4,6,5 };
	elem* first = NULL, * last;
	for (int i = 0; i < 5; ++i) {
		push_back(first, last, aa[i]);

	}
	print(first);
	rem(first);

}*/

// forward list


/*#include<iostream>
#include<forward_list>
using namespace std;
int main() {

	forward_list<int> fl = { 131,94,494 };
	fl.push_front(1);
	fl.push_front(2);
	for (auto el : fl) {
		cout << el << " ";
	}
	cout << endl;
	forward_list<int> ::iterator iter = fl.begin();

	fl.insert_after(iter, 34);
	for (auto el : fl) {
		cout << el << " ";
	}
	fl.erase_after(iter++);
	fl.insert_after(iter, 34);
	for (auto el : fl) {
		cout << el << " ";
	}
	


}*/


//array

/*#include<iostream>
#include<array>
using namespace std;
int main() {
	array<int, 5> ar = { 33, 54, 65, 76, 90 };
	
	//cout << ar.at(4) << endl;
	//try {
		//cout << ar.at(12) << endl;
	//}
	//catch (const std::exception& ex) {
		//cout << ex.what() << endl;
	//}
	//ar.fill(0);
	//ar.front() // firts element
	//	ar.back() // last element
	for (int i = 0; i < ar.size(); i++) {

	}



	return 0;
}*/


//comparison

/*#include<iostream>
#include<array>
using namespace std;
int main() {

	array<int, 4> arr = { 1,94,77,9 };
	array<int, 4> arr2 = { 1,94,77,9 };

	bool result = (arr == arr2);
	cout << result << endl;


}*/





//set
/*#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {

	set<int> mySet;
	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(10);
	mySet.insert(4);
	mySet.insert(-1);

	for (auto& i : mySet) {
		cout << i << " ";
	}
	cout << endl;


	for (int i = 0; i < 20; ++i) {
		mySet.insert(rand() % 20);
	}
	int value;
	cin >> value;

	if (mySet.find(value) != mySet.end()) {
		cout << "number " << value << " found" << endl;
	}
	else {
		cout << "number " << value << " not found ";
	}
	mySet.erase(10);

}*/








// multiset
//set
/*#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main() {

	multiset<int> mySet;
	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(10);
	mySet.insert(4);
	mySet.insert(-1);

	for (auto& i : mySet) {
		cout << i << " ";
	}
	cout << endl;


	for (int i = 0; i < 20; ++i) {
		mySet.insert(rand() % 20);
	}
	int value;
	cin >> value;

	if (mySet.find(value) != mySet.end()) {
		cout << "number " << value << " found" << endl;
	}
	else {
		cout << "number " << value << " not found ";
	}
	mySet.erase(10);


	auto it1 = mySet.lower_bound(4); // finds and returns an element 4

	auto it2 = mySet.upper_bound(4); // finds and returns an element after 4

	auto a = mySet.equal_range(1); // return range from lowerband to upperband of numbers

}*/




/*#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {

	map<int, string> myMap;
	myMap.insert(make_pair(1, "phone"));
	myMap.insert(pair<int, string>(2, "laptop"));
	myMap.emplace(3, "screen");
	myMap.emplace(22, "keyboard");

	auto it = myMap.find(22);
	if (it != myMap.end()) {
		cout << it->second << endl;
	}
	else {
		cout << "not found " << endl;
	}

	cout << myMap[3] << endl;


}*/




//map
/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<pair<string, string>> dd = { {"rosso", "red"},{"giorno", "day"}, {"forte", "strong"},{"sempre", "always"},{"arrivederci", "good bye"}};

	for (auto& s : dd) {
		cout << s.first << " " << s.second << endl;
	}



}*/


//map
/*#include<iostream>
#include<map>
using namespace std;
int main() {
	map <string,string> dd = { {"rosso", "red"},{"giorno", "day"}, {"forte", "strong"}};
	dd["sempre"] = "always";
	dd["arrivederci"] = "goodbye";


	for (auto& s : dd) {
		cout << s.first << " " << s.second << endl;
	}
	cout << dd["forte"] << endl;




}*/





//counter map
/*#include<iostream>
#include<list>
#include<map>
using namespace std;
int main() {
	list<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list"
	};

	map<string, int> st;
	for (auto& a : aa) {
		st[a]++;
	}
	for (auto& s : st) {
		cout << s.first << " " << s.second << endl;
	}





}*/



// maps very interesting
/*#include<iostream>
#include<list>
#include<map>
#include<set>
using namespace std;
int main() {
	list<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list"};
	map<int, int> lengths;
	map<int, set<string>> lengths2;
	for (auto& a : aa) {
		lengths[a.length()]++;
		if (lengths[a.length()] == 1) {
			lengths2[a.length()] = set<string>();
		}

		lengths2[a.length()].insert(a);
	}

	for (auto& x : lengths2) {
		cout << x.first << " " << lengths[x.first] << " ";

		for (auto w : x.second) {
			cout << w << " ";
		}
		cout << endl;
	}

}*/



/*#include<iostream>
#include<string>
using namespace std;

class ContactList; 
class Contact {

	friend ostream& operator<<(ostream& os, const Contact& c);
	friend class ContactList; 
public:
	Contact(string name = "none");
private:
	string name;
	Contact* next;
	


};
Contact::Contact(string s) :
	name(s), next(NULL)
{}

ostream& operator<<(ostream& os, const Contact& c) {
	return os << "Name: " << c.name;

}

class Contact;

class ContactList {
	friend class Contact;
public:
	ContactList();
	void addToHead(const string& );
	void printList();
	void insert(const string&);
private:
	Contact* head;
	int size;

};

ContactList::ContactList() :
	head(NULL), size(0)
{}

void ContactList::addToHead(const string& name) {
	Contact* newOne = new Contact(name);
	if (head == 0) {
		head = newOne;
	}
	else {
		newOne->next = head;
		head = newOne;
	}
	size++;

}

void ContactList::printList() {
	Contact* tp = head;
	while (tp != NULL) {
		cout << *tp << endl;
		tp = tp->next;
	}

}


void ContactList::insert(const string& name) {
	Contact* newNode = new Contact(name);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Contact* curr = head;
		Contact* trail = NULL;
		while (curr != 0) {
			if (curr->name >= newNode->name) {
				break;
			}
			else {
				trail = curr;
				curr = curr->next;
			}
		}


		if (curr == head) {
			newNode->next = head;
			head = newNode;

		}
		else {
			newNode->next = curr;
			trail->next = newNode;
		}


	}
	size++;


}

int main() {
	ContactList* cl1 = new ContactList(); 
	string name;
	while (true) {

		cout << "Enter the name of the contact or q to quit " << endl;
		cin >> name;
		if (name == "q") {
			break;
		}
		cl1->insert(name);
	}

	cl1->printList();

}
*/



/*#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool freqless(pair<string, int>a, pair<string, int> b) {
	return a.second > b.second;
}


int main() {
	vector<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list" };

	map<string, int> st;
	for (auto& a : aa) {
		st[a]++;
	}
	vector<pair<string, int>> st2;
	for (auto& s : st) {
		st2.push_back(s);
	}
	sort(st2.begin(), st2.end(), freqless);
	for (auto& s : st2) {
		cout << s.first << " " << s.second << endl;
	}

}*/



/*#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool freqless(pair<string, int>a, pair<string, int> b) {
	return a.second > b.second;
}


int main() {
	vector<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list" };

	map<string, int> st;
	for (auto& a : aa) {
		st[a]++;
	}
	vector<pair<string, int>> st2;
	for (auto& s : st) {
		st2.push_back(s);
	}

	sort(st2.begin(), st2.end(), freqless);
	int freq = 0;
	for (auto& s : st2) {
		if (s.second != freq) {
			if (freq != 0) {
				cout << endl;
			}

			cout << s.second << " ";
		}
		freq = s.second;
		cout << s.first << " ";

	}




}*/



/*#include<iostream>
#include<list>
#include<map>
using namespace std;
int main() {
	vector<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list" };

	map<char, list<string>> fletter;
	for (auto& a : aa) {
		char c = a[0];
		if (fletter.find(c) == fletter.end()) {
			fletter[c] = list<string>();
		}
		fletter[c].push_back(a);


	}
	for (auto& f : fletter) {
		cout << f.first << " ";
		for (auto w : f.second) {
			cout << w << " ";
		}
		cout << endl;
	}

}*/



/*#include<iostream>
#include<set>
#include<map>
#include<list>
int main() {
	vector<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list" };

	map<char, set<string>> fletter;
	for (auto& a : aa) {
		char c = a[0];
		fletter[c].insert(a);
	}
	for (auto& f : fletter) {
		cout << f.first << " ";
		for (auto w : f.second) {
			cout << w << " ";
		}
		cout << endl;
	}

}*/










/*#include<iostream>
using namespace std;
class Node {
public:
	int Value;
	Node* next;

};

void insertList(Node* head) {

	int n;
	cin >> n;
	cout << "Choose number " << endl;
	while (n != 'q') {
		Node* newNode = new Node();
		newNode->Value = n;
		newNode->next = head;
		head = newNode;
	}


}

void printList(Node*n) {

	while (n != NULL) {
		cout << n->Value << endl;
		n->next;
	}

}

void insetAtTheFont(Node**head, int newValue) {

	Node* newNode = new Node();
	newNode->Value = newValue;
	newNode->next = *head;
	*head = newNode;


}


void insertAtTheEnd(Node**head, int newValue) {
	Node *newNode = new Node();
	newNode->Value = newValue;
	newNode->next = NULL;
	
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	Node* last = *head;
	while (last->next!=NULL) {
		last = last->next;
		
	}
	last->next = newNode;


}

void insertAfter(Node* previous, int newValue) {
	if (previous != NULL) {
		Node* newNode = new Node();
		newNode->Value;
		newNode->next = previous->next;
		previous->next = newNode;
	}
	else {
		cout << "previous cant be NULL " << endl;
		return;
	}

}



int main() {
	Node* head = new Node();
	//Node* second = new Node();
	//Node* third = new Node();

	head->next = NULL;
	int n;
	cout << "Choice the number for linked list " << endl;
	cin >> n;
	head->Value = n;
	insertList(head);

	//head->Value = 1;
	//second->Value = 2;
	//third->Value = 3;
	//head->next = second;
	//second->next = third;
	//third->next = NULL;
	insertAtTheEnd(&head, 4);
	insertAtTheEnd(&head, 5);
	insetAtTheFont(&head, -2);
	insetAtTheFont(&head, -1);
	printList(head);
	insertAfter(&head, -1);
	
}*/








/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;
	elem(int n) {
		num = n;
		next = NULL;
	}


};


void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << endl;
		p = p->next;
	}
	cout << endl;
}

void rem(elem*& first) {
	while (first) {
		elem* p = first->next;
		delete first;
		first = p;
	}
}

void push_back(elem*& first, elem*& last, int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		last = p;
	}



}

int main() {
	int aa[] = {1,8,4,6,5};
	elem* first = NULL, * last;
	for (int i = 0; i < 5; ++i) {
		push_back(first, last, aa[i]);
	}
	print(first);
	rem(first);
	return 0;




}*/




/*#include<iostream>
#include<string>
using namespace std;

class ContactList;
class Contact {

	friend ostream& operator<<(ostream& os, const Contact& c);
	friend class ContactList;
public:
	Contact(string name = "none");
private:
	string name;
	Contact* next;



};
Contact::Contact(string s) :
	name(s), next(NULL)
{}

ostream& operator<<(ostream& os, const Contact& c) {
	return os << "Name: " << c.name;

}

class Contact;

class ContactList {
	friend class Contact;
public:
	ContactList();
	void addToHead(const string& );
	void printList();
	void insert(const string&);
	void deleteNode(const string&);
private:
	Contact* head;
	int size;

};

ContactList::ContactList() :
	head(NULL), size(0)
{}

void ContactList::addToHead(const string& name) {
	Contact* newOne = new Contact(name);
	if (head == 0) {
		head = newOne;
	}
	else {
		newOne->next = head;
		head = newOne;
	}
	size++;

}

void ContactList::printList() {
	Contact* tp = head;
	while (tp != NULL) {
		cout << *tp << endl;
		tp = tp->next;
	}

}


void ContactList::insert(const string& name) {
	Contact* newNode = new Contact(name);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Contact* curr = head;
		Contact* trail = NULL;
		while (curr != 0) {
			if (curr->name >= newNode->name) {
				break;
			}
			else {
				trail = curr;
				curr = curr->next;
			}
		}


		if (curr == head) {
			newNode->next = head;
			head = newNode;

		}
		else {
			newNode->next = curr;
			trail->next = newNode;
		}


	}
	size++;


}

int main() {
	ContactList* cl1 = new ContactList();
	string name;
	while (true) {

		cout << "Enter the name of the contact or q to quit " << endl;
		cin >> name;
		if (name == "q") {
			break;
		}
		cl1->insert(name);
	}

	cl1->printList();


}*/



/*#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int value):
		data(value), next(nullptr)
	{}


};

void addFront(Node*& head, int value) {
		Node* newNode = new Node(value);
		newNode->next = head;
		head = newNode;
	
}

void addEnd(Node*& head, int value) {
	Node* newNode = new Node(value);
	if (head==NULL) {
		head = newNode;
		return;
	}
	Node* current = head;
	while (current->next != NULL) {
		current = current->next;

	}
	current->next = newNode;
}

void addAfterValue(Node*& head, int existingValue, int newValue) {
	Node* current = head;
	while (current != NULL) {
		if (current->data == existingValue) {
			Node* newNode = new Node(newValue);
			newNode->next = current->next;
			current->next = newNode;
			return;
		}
		current = current->next;
	}
	cout << "The value " << existingValue << "wasn't found in the list " << endl;

}
void display(Node* head) {
	Node* current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}



static void removeAll(Node*& head) {

	while (head != NULL) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}

}

static void removeFirst(Node*& head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
		return;
	}
	Node* tmp = head;
	head = head->next;
	delete tmp;


}

static void removeLast(Node*& head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
		return;
	}
	if (head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	Node* current = head;
	while (current->next->next != NULL) {
		current = current->next;
	}
	delete current->next;
	current->next = NULL;
}
static void removeAfterValue(Node*& head, int existingValue) {
	Node* current = head;
	while (current != NULL) {
		if (current->data == existingValue && current->next!=NULL) {
			Node* temp = current->next;	
			current->next = current->next->next;
			delete temp;
			return;
		}
		current = current->next;
	}
	cout << "The element " << existingValue << " wasn't found" << endl;

}



int main() {


	Node* head = NULL;
	addFront(head, 0);
	addFront(head, 1);
	addFront(head, 2);
	addFront(head, 3);
	display(head);
	
	addEnd(head, 4);
	addEnd(head, 5);
	display(head);


	addAfterValue(head, 4, 6);
	display(head);

	removeFirst(head);
	display(head);

	display(head);
	removeLast(head);
	display(head);

	addFront(head, 7);
	display(head);

	removeAfterValue(head, 7);
	display(head);

	removeAll(head);
	display(head);


	

}*/





/*#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int data):
		data(data), next(NULL)
	{}

};
class LinkedList {
private:
	Node* head;
public:
	LinkedList():
		head(NULL)
	{}

	void append(int data) {
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			return;
		}
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
	void display() {
		Node* current = head;
		while (current != NULL) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;

	}


	~LinkedList() {
		Node* current = head;
		while (current != NULL) {
			Node* next = current->next;
			delete current;
			current = next;
		}



	}
	void prepend(int data) {
		Node* newNode = new Node(data);
		newNode->next = head;
		head = newNode;
	}


};


int main() {
	LinkedList list;
	list.append(1);
	list.append(2);
	list.append(3);
	list.prepend(0);
	list.append(4);
	list.display();








}*/





/*#include<iostream>
#include<list>
using namespace std;
int main() {
	list<int> myList;
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);

	myList.push_front(0);

	auto it = find(myList.begin(), myList.end(), 2);
	if (it != myList.end()) {
		myList.insert(next(it), 5);

	}
	else {
		cout << "Value 2 not found " << endl;
	}
	for (int num : myList) {
		cout << num << " ";
	}
	cout << endl;




}*/




/*#include<iostream>
#include<list>
#include<algorithm>

bool isEven(int num) {
	return num % 2 == 0;
}
void removeEvenNumbers(list<int>& myList) {
	myList.remove_if(isEven);
}

void displayList(const list<int>& myList) {
	for (int num : myList) {
		cout << num << " ";
	}
	cout << endl;
}



int main() {

	list<int> myList;
	for (int i = 1; i <= 10; ++i) {
		myList.push_back(i);
	}

	displayList(myList);
	removeEvenNumbers(myList);
	displayList(myList);
	myList.reverse();
	displayList(myList);
	myList.sort();
	displayList(myList);






}*/







/*#include<iostream>
#include<list>
#include<map>
#include<set>
using namespace std;
int main() {
	list<string> aa = { "if", "you", "add", "new", "items", "to",
	 "a", "list", "the", "new", "items", "will", "be", "placed",
	 "at", "the", "end", "of", "the", "list" };
	map<char, set<string>> fletter2;
	for (auto& a : aa) {
		char c = a[0];
		fletter2[c].insert(a);
	}
	for (auto& f : fletter2) {
		cout << f.first << " ";
		for (auto w : f.second) {
			cout << w << " ";
		}
		cout << endl;
	}
}*/





/*#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int value) :
		data(value), next(NULL)
	{}


};

void addFront(Node*& head, int value) {
	Node* newNode = new Node(value);
	newNode->next = head;
	head = newNode;

}

void addEnd(Node*& head, int value) {
	Node* newNode = new Node(value);
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node* current = head;
	while (current->next != NULL) {
		current = current->next;

	}
	current->next = newNode;
}

void addAfterValue(Node*& head, int existingValue, int newValue) {
	Node* current = head;
	while (current != NULL) {
		if (current->data == existingValue) {
			Node* newNode = new Node(newValue);
			newNode->next = current->next;
			current->next = newNode;
			return;
		}
		current = current->next;
	}
	cout << "The value " << existingValue << "wasn't found in the list " << endl;
	                      
}
void display(Node* head) {
	Node* current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

void incDecOdd(Node*& head) {
	Node* current = head;
	while (current != NULL) {
		if (current->data % 2 != 0) {
			if (current->data < 0) {
				current->data += 1;
			}
			else {
				current->data -= 1;
			}

		}

	  current = current->next;

	}
}
void deleteFirstEvenBeforeOdd(Node*& head) {
	Node* current = head;
	if (current != NULL && current->next!=NULL) {
		if (current->data % 2 == 0 && current->next->data % 2 != 0) {
			if (current == head) {
				head = head->next;
				delete current;
				return;
			}
		}
	}
	while (current->next != NULL) {
		Node* temp = current; // 4
		Node* temp2 = current->next; //2
		if (temp2->next != NULL) {
			if (temp->next->data % 2 == 0 && temp2->next->data % 2 != 0) {

				temp->next = temp2->next;
				delete temp2;
				return;

			}
		}
		current = current->next;
	}


}


static void removeAll(Node*& head) {

	while (head != NULL) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}

}

static void removeFirst(Node*& head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
		return;
	}
	Node* tmp = head;
	head = head->next;
	delete tmp;


}

static void removeLast(Node*& head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
		return;
	}
	if (head->next == NULL) {
		delete head;
		head = NULL;
		return;
	}
	Node* current = head;
	while (current->next->next != NULL) {
		current = current->next;
	}
	delete current->next;
	current->next = NULL;
}
static void removeAfterValue(Node*& head, int existingValue) {
	Node* current = head;
	while (current != NULL) {
		if (current->data == existingValue && current->next != NULL) {
			Node* temp = current->next;
			current->next = current->next->next;
			delete temp;
			return;
		}
		current = current->next;
	}
	cout << "The element " << existingValue << " wasn't found" << endl;

}



int main() {


	Node* head = NULL;
	//addFront(head, 0);
	//addFront(head, 1);
//	addFront(head, 2);
	//addFront(head, 3);
	//display(head);

	addEnd(head, 1);  
	addEnd(head, 3);   
	addEnd(head, 8); 
	addEnd(head,3);
	addEnd(head, 5);
    //incDecOdd(head);
	display(head);
   deleteFirstEvenBeforeOdd(head);
	display(head);


	addAfterValue(head, 4, 6);
	display(head);

	removeFirst(head);
	display(head);

	display(head);
	removeLast(head);
	display(head);

	addFront(head, 7);
	display(head);

	removeAfterValue(head, 7);
	display(head);

	removeAll(head);
	display(head);
	


	
}*/


/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;
	elem(int n) {
		num = n;
		next = NULL;
	}


};

void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next;
	}
	cout << endl;
}


void rem(elem*& first) {
	while (first != NULL) {
		elem* p = first->next;
		delete first;
		first = p;
	}
}

void append(elem*& first, elem*& last, int n) {
	elem* p = new elem(n);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		last = p;
	}
}
void incDecOdd(elem* first) {
	elem* p = first;
	while (p != NULL) {
		if (p->num % 2 != 0) {
			if (p->num > 0) {
				p->num--;
			}
			else {
				p->num++;
			}
		}
		p = p->next;
	}
}

void deleteFirstEvenBeforeOdd(elem*& first) {
	if (first != NULL and first->next != NULL) {
		if (first->num % 2 == 0 and first->next->num % 2 != 0) {
			elem* p = first;
			first = first->next;
			delete p;
		}
		else {
			elem* p = first; //2 
			elem* q = p->next; //3 
			elem* r = q->next;// 8 
			while (r != NULL) {
				if (q->num % 2 == 0 and r->num % 2 != 0) {
					p->next = r;
					delete q;
					return;
				}
				else {
					p = q; //3
					q = r; // 8
					r = r->next; //4

				}
			}
		}
	}
}





int main() {
	int aa[] = { 1,3,8,3,5 };
	elem* first = NULL, * last;
	for (int i = 0; i < 5; ++i) {
		append(first, last, aa[i]);
	}
	print(first);
	//incDecOdd(first);
	print(first);
	//rem(first);
	deleteFirstEvenBeforeOdd(first);




}*/


/*#include<iostream>
#include<list>
using namespace std;
void incDecOdd(list<int>& aa) {
	for (auto& a : aa) {
		if (a % 2 != 0) {
			if (a < 0) {
				++a;
			}
			else {
				--a;
			}
		}
	}
}



int main() {
	list<int> aa = { -2,3,-7,-4,5 };
	for (const auto& a : aa) {
		cout << a << " ";
	}
	cout << endl;
	incDecOdd(aa);

	for (const auto& a : aa) {
		cout << a << " ";
	}



}*/


//C[5]
/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;
	elem(int data) :
		num(data), next(NULL)
	{}
};

void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num;
		p = p->next;
	}
	cout << endl;
}


int firstDuplicateDistance2(elem* first) {
	elem* p = first;
	elem *q = p->next->next;
	int pos = 0;
	while (q != NULL) {
		if (p->num == q->num) {
			return pos;
		}
		pos++;
		p = p->next;
		q = q->next;

	}
	return -1;
}

//or


int firstDuplicateDistance2(elem* first) {
	elem* p = first;
	if (p->next != NULL and p->next->next != NULL) {
		elem* q = p->next->next;
		int pos = 0;
		while (q != NULL) {
			if (p->num == q->num) {
				return pos;
			}
			pos++;
			p = p->next;
			q = q->next;

		}
		

	}
	return -1;


}




void rem(elem*& first) {
	while (first != NULL) {
		elem* p = first->next;
		delete first;
		first = p;

	}

}


void append(elem*& first, elem*& last, int data) {
	elem* p = new elem(data);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		last = p;
	}

}
int main() {
	int aa[] = { 2,2 };
	elem* first = NULL, * last;
	for (int i = 0; i < 2; ++i) {
		append(first, last, aa[i]);
	}
	print(first);
	cout << firstDuplicateDistance2(first) << endl;



}*/



//C[9];

/*#include<iostream>
using namespace std;
struct elem {
	int num;
	elem* next;
	elem(int data) :
		num(data), next(NULL)
	{}



};




void print(elem* first) {
	elem* p = first;
	while (p != NULL) {
		cout << p->num << " ";
		p = p->next;
	}
	cout << endl;
}

void append(elem*& first, elem*& last, int data) {
	elem* p = new elem(data);
	if (first == NULL) {
		first = last = p;
	}
	else {
		last->next = p;
		last = p;
	}

}

void rem(elem*& first) {
	while (first != NULL) {
		elem* p = first->next;
		delete first;
		first = p;
	}
}


void deleteAllBiggerThanTheBiggestEven(elem*& first) {
	int maxEven = INT_MIN;
	elem* p = first;
	while (p != NULL) {
		if (p->num % 2 == 0 and p->num > maxEven) {
			maxEven = p->num;
		}
		p = p->next;
	}


	if (maxEven == INT_MIN) {
		return;
	}


	 p = first; 
	if(p!=NULL and p->next!=NULL){
		elem* q = p->next;
		while (q != NULL and p->next!=NULL) {
			if (p->num > maxEven) { // delete first
				p = p->next;
				delete first;
				first = p;
				q = p->next;
			}
			else if (q->num > maxEven and q->next != NULL) { // delete un the middle
					p->next = q->next;
					delete q;
					q = p->next;	
			}
			else if(q->next==NULL and q->num>maxEven){ // delete last (not nessessary)
				delete q;
				p->next = NULL;
			}
			else { // going through nummbers
				p = p->next;
				q = p->next;
			}
			
		}

	}
	
}


// or
void deleteAllBiggerThanTheBiggestEven2(elem*& first) {

	int maxEven = -1;
	elem* p = first;
	while (p != NULL) {
		int num = p->num;
		if (num % 2 == 0 and ( maxEven == -1 or num > maxEven)) {
			maxEven = num;

		}
		p = p->next;
	}

	if (maxEven != -1) {

		while (first != NULL and first->num > maxEven) {
			p = first->next;
			delete first;
			first = p;
		}
		if (first != NULL and first->next != NULL) {
			elem* prev = first;
			elem* p = first->next;
			while (p != NULL) {

				if (p->num > maxEven) {
					prev->next = p->next;  // 7 11 NULL     
					delete p;							
					p = prev->next;
				}
				else {
					prev = p;
					p = p->next;
				}

			}
		}

	}

}



int main() {
	int arr[] = { 13,11,7,8 ,17,6,19 };
	elem* first = NULL, * last;
	for (int i = 0; i < 7; ++i) {
		append(first, last, arr[i]);
	}
	print(first);
	//deleteAllBiggerThanTheBiggestEven2(first);
	deleteAllBiggerThanTheBiggestEven(first);
	print(first);
}
*/







/*#include<iostream>
#include<list>
using namespace std;
int firstDuplicateDistance2(list<int>& myList){
	int pos = 0;
	auto it = myList.begin();
	auto it2 = myList.begin(); 
	advance(it2, 2);
	for (; it2 != myList.end(); it2++, it++) {
		if (*it == *it2) {
			return pos;
		}
		pos++;
	}
	return -1;
}




int main() {
	list<int> myList{ 2,2 };
	cout << firstDuplicateDistance2(myList) << endl;
	return 0;

}*/



/*#include<iostream>
#include<list>
using namespace std;
int firstDuplicateDistance2(const list<int>& aa) {
	int pos = 0;
	int b=0, c = 0;
	for (auto& a : aa) {
		if (pos >= 2 and a == c) {
			return pos - 2;
		}
		c = b;
		b = a;
		++pos;
	}
	return -1;
}
int main() {

	list<int> aa = { 1,2,6,4,5,4,4,5 };
	for (const auto& a : aa) {
		cout << a << " ";
	}
	cout << endl;
	cout << firstDuplicateDistance2(aa) << endl; // 3
}
*/




/*#include<iostream>
#include <list>
using namespace std;
void eleteAllBiggerThanTheBiggestEven(list<int>& myList) {
	int maxEven = INT_MIN;
	for (auto it = myList.begin(); it != myList.end(); ++it) {
		if (*it % 2 == 0 and *it > maxEven) {
			maxEven = *it;
		}
	}
	if (maxEven != INT_MIN) {
		auto it2 = myList.begin();
		for (auto it = myList.begin(); it != myList.end(); it++) {
			if (*it > maxEven) {
				it = myList.erase(it);
			}
			
		}
	}

}
int main() {
	list<int> myList = { 13,7,5,11,4,8,9,6 };
	for (auto& a : myList) {
		cout << a << " ";
	}
	cout << endl;
	eleteAllBiggerThanTheBiggestEven(myList);
	for (auto& a : myList) {
		cout << a << " ";
	}

}
*/



/*#include<iostream>
#include<list>
using namespace std;
void deleteAllBiggerThanTheBiggestEven(list<int>& aa) {
	int maxeven = -1;
	for (auto& num : aa) {
		if (num % 2 == 0 and (maxeven == -1 or num > maxeven))
			maxeven = num;
	}
	if (maxeven != -1) {
		auto p = aa.begin();
		while (p != aa.end()) {
			if (*p > maxeven) {
				p = aa.erase(p);
			}
			else {
				++p;
			}
		}
	}
}
int main() {
	
		list<int> aa = { 13,7,5,11,4,8,9,6, 19 };
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
		deleteAllBiggerThanTheBiggestEven(aa); // 7,5,4,8,6
		for (auto& a : aa) {
			cout << a << " ";
		}
		cout << endl;
	}*/


