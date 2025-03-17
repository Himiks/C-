#include <iostream>
#include "node.h"
#include "insertAfter.h"
using namespace std;

void Add(Node*& head, int data) {
	Node* newNode = new Node(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}

void display(Node* head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (current != NULL) {
			cout << current->num << " ";
			current = current->next;
		}
		cout << endl;
	}
}

// uni-testing function 
void TestList() {
	cout << "Test 1: " << endl;
	try {
		Node* first = NULL;
		Node* second = NULL;
		Add(first, 66);
		Add(first, 67);
		Add(first, 68);
		Add(second, 69);
		Add(second, 70);
		cout << "first list : ";
		display(first);
		cout << "second list : ";
		display(second);
		cout << "Expected output is: 66,67,69,70,68" << endl;
		cout << "Output: ";
	    insertAfter(first, second, 2);
		display(first); 
	}
	catch (const exception& e) {
		cout << "Test 1 Failed: " << e.what() << endl;
	}
	cout << "\n\n\n";

	cout << "Test 2: " << endl;
	try {
		Node* first = NULL;
		Node* second = NULL;
		Add(second, 101);
		Add(second, 102);
		cout << "first list : ";
		display(first);
		cout << "second list : ";
		display(second);
		cout << "Expected output is: throw exeption first list is empty" << endl;
		cout << "Output: ";
		insertAfter(first, second, 2);
		display(first);
	}
	catch (const exception& e) {
		cout << "Test 2 Failed: " << e.what() << endl;
	}
	cout << "\n\n\n";

	cout << "Test 3: " << endl;
	try {
		Node* first = NULL;
		Node* second = NULL;
		Add(first, 100);
		Add(second, 101);
		Add(second, 102);
		cout << "first list : ";
		display(first);
		cout << "second list : ";
		display(second);
		cout << "Expected output is: throw exeption incorrect position" << endl;
		cout << "Output: ";
		insertAfter(first, second, -1);
		display(first);
	}
	catch (const exception& e) {
		cout << "Test 3 Failed: " << e.what() << endl;
	}


}


int main() {
	TestList();


}