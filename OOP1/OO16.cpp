#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int num) {
		data = num;
		next = NULL;
	}
};

void Add(int num, Node*&first, Node*&last) {
	Node* newNode = new Node(num);
	if (first == NULL) {
		first = last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;

	}

}

void Display(Node* first) {
	if (first == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* curr = first;
		while (curr != NULL) {
			cout << curr->data << " ";
			curr = curr->next;
		}
		cout << endl;
	}

}

void rem(Node*& first) {
	if (first == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		while (first != NULL) {
			Node* curr = first->next;
			delete first;
			first = curr;
		}

	}

}


void deleteBigger(Node*& first) {
	if (first == NULL) {
		cout << "The list is empty " << endl;
	}
	else {

		Node* begin = first;
		Node* second = begin->next; 
		 int prew = begin->data; 
		while (second != NULL) { 
			
			if (second->data > prew) {
				begin->next = second->next;// 3;
				prew = second->data; // 2
				delete second; // 2
				if (begin->next!=NULL) {
					second = begin->next;
				}
				else
				{
					second = NULL;
				}
			}
			else {
				begin = begin->next;
				prew = begin->data;
				second = begin->next;
			}

		}
		
		
	}

}


int main() {
	Node* first = NULL, *last;
	int num = 0;
	cout << "Enter the values. To stop enter a -1 " << endl;
	while (cin>>num && num!=-1) {
		Add(num, first, last);
	}
	Display(first);
	deleteBigger(first);
	Display(first);
	rem(first);
	Display(first);
}
*/



#include<iostream>
#include<list>
using namespace std;


void display(list<int> myList) {
	if (myList.empty()) {
		cout << "The list is empty " << endl;
	}
	for (auto i : myList) {
		cout << i << " ";
	}
	cout << endl;
}


void rem(list<int>& myList) {
	if (myList.empty()) {
		cout << "The list is empty " << endl;
	}
	for (auto iter = myList.begin(); iter != myList.end();) {
		iter = myList.erase(iter);
	}
}



void DeleteBigger(list<int>& myList) {
	auto iter1 = myList.begin();
	auto iter2 = myList.begin();
	iter2++;
	int prew = *iter1;
	while (iter2 != myList.end()) {
		if (*iter2 > prew) {
			prew = *iter2;
			iter2 = myList.erase(iter2);
		}
		else { 
			prew = *iter2;
			iter2++;
		}
	}

}



int main() {
	list<int> myList;
	int n = 0;
	cout << "Enter the values to list. To stop enter -1" << endl;
	while (cin >> n and n != -1) {
		myList.push_back(n);


	}
	display(myList);
	DeleteBigger(myList);
	display(myList);
	rem(myList);
	display(myList);



}