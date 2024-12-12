
/*#include<iostream>
using namespace std;
struct Node {
	int num;
	Node* next;

	Node(int data) :  // constructor where data and next pointer initialised
		num(data), next(NULL)
	{}

};


void Add(Node*& head, int data) { // function to add values to the list

	Node* newNode = new Node(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next != NULL) { // continue while the last list not point to end
			current = current->next;
		}
		current->next = newNode; // link the last list with new one

	}

}


void display(Node* head) { // function to display list
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (current != NULL) { // continue while there is a node that points to other node
			cout << current->num << " ";
			current = current->next;
		}
		cout << endl;

	}


}

void rem(Node*& head) {   // function to remove the elements from the list
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (head != NULL) { // delete while first element points to other nodes
			current = current->next;
			delete head;
			head = current;
		}
	}
	cout << " deleted " << endl;
}

int ElemCount(Node* list) { // function to count elements in the list
	int count = 0;
	Node* current = list;
	while (current != NULL) {
		count++;
		current = current->next;
	}

	return count;

}





void insertAfter(Node*& first, Node*& second, int pos) { // function to insert second list in the first
	if (first != NULL) {

		Node* current = first;
		int index = 1;
		while (current != NULL && index < pos) { // loop to find the position after we will insert list
			current = current->next;
			index++; // counter positions
		}
		if (current == NULL) { // if we didn't found
			cout << "The position after which list should be added is greater than the list." << endl;
			return;
		}
		else {

			Node* current2 = second; // pointer to the beginnig of the second list
			Node* after = current->next; // pointer to the element after the position where we would like to insert values
			while (current2 != NULL) { // while second node not equll NULL
				Node* newNode = new Node(current2->num); // assigning values to the newNode from the second list
				current->next = newNode; // adding value to the first list and pointiong to it
				current2 = current2->next; // moving the position of the second list
				current = current->next; // moving the position of the first list
			}

			current->next = after; // pointing to the element after position that we inserted values from the seond list

		}
	}
}




int main() {
	Node* first = NULL; // first list
	Node* second = NULL; // second list
	int num; // variable for numbers
	cout << "Please enter the values in the firts list. If you want to stop adding values type -1:  " << endl;
	while (cin >> num && num != -1) { // inserting values to the first list
		Add(first, num);
	}
	cout << "Please enter the values in the second list. If you want to stop adding values type -1:  " << endl;
	while (cin >> num && num != -1) { // inserting values to the second list
		Add(second, num);
	}
	cout << "First list: " << endl;
	display(first); // display function
	cout << "Second list: " << endl;
	display(second);

	cout << "\n\nElements in the first list: " << ElemCount(first) << endl;
	cout << "\n\nElements in the second list: " << ElemCount(second) << endl;


	if (first != NULL and second != NULL) { // if first and second list is not empty
		cout << "\nPlease enter the position to add the second list after: ";
		cin >> num; // variable to enter the position after we would like to insert second list
		if (num <= 0 or num > ElemCount(first)) { // if position less or equal to the 0 or greater than the lenght of the list. Return an error
			cout << "\nThe lenght of the list is smaller than position, you typed or the position is out of range " << endl;
			return -1;
		}

		insertAfter(first, second, num);
		cout << "\n\nResult: " << endl;
		display(first);


		cout << "\n\nThe first list is ";
		rem(first);
		cout << "The second list is ";
		rem(second);

		cout << "\n\nFirst list: " << endl;
		display(first);

		cout << "Second list: " << endl;
		display(second);
	}
	else {
		cout << "First or second list is empty " << endl;
	}
	return 0;


}*/


#include<iostream>
using namespace std;
struct Node {
	int info;
	Node* next;

	Node(int data) {
		info = data;
		next = NULL;
	}
};


void Add(Node*& first, int data) {
	Node* newNode = new Node(data);
	if (first == NULL) {
		first = newNode;
	}
	else {
		Node* current = first;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}


void display(Node* head) {
	Node* current = head;
	while (current != NULL) {
		cout << current->info << " ";
		current = current->next;
	}



}

int seqLen(Node* listHead1, Node* listHead2) {
	int len = 0;
	int num = 1;

	Node* current = listHead1;
	while (current->next != NULL) {
		current = current->next;
	}

	Node* current2 = listHead2;
	while (current2 != NULL) {
		Node* newNode = new Node(current2->info);
		current->next = newNode;
		current = current->next;
		current2 = current2->next;
	}


	int counter = 0;
	current = listHead1;
	current2 = listHead1;
	Node* current3 = listHead1;
	while (current3 != NULL) {
		bool found = false;
		while (current != NULL) {
	
			if (current->info == num) {
				counter++;
				found = true;
			}
			current = current->next;
		}
		if (counter == 1 and found == true) {
			num++;
			len++;
		}
		else {
			if (counter > 1) {
				len++;
			}
			return len;
		}
		current = current2;
		current3 = current3->next;
		counter = 0;

	}


	
	
	return len;
}


int main() {
	Node* first = NULL;
	Node* second = NULL;

	Add(first, 9); 
	Add(first, 7);
	Add(first, 5);
	Add(first, 3);
	Add(first, 1);


	Add(second, 6);
	Add(second, 4);
	Add(second, 2);
	 


	display(first);
	cout << endl;
	display(second);
	cout << endl;


	cout << seqLen(first, second);

	}






/*#include<iostream>
using namespace std;
struct Node {
	int info;
	Node* next;


	Node(int data):
		info(data), next(NULL)
	{}



};


void Add(Node*& first, int data) {
	Node* newNode = new Node(data);
	if (first == NULL) {
		first = newNode;
	}
	else {
		Node* current = first;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}


void display(Node* head) {
	Node* current = head;
	while (current != NULL) {
		cout << current->info << " ";
		current = current->next;
	}

}



void deleteElem(Node*& first) {
	if (first == NULL) {
		cout << "The list is empty " << endl;
		return;
	}

	Node* current = first;
	while (current->next != NULL) {
		current = current->next;
	}
	int num = current->info;

	if (num == 0) {
		current = first->next;
		delete first;
		first = current;
		return;
	}

	current = first;
	Node* next = current->next;
	for (int i = 0; i < num-1; i++) {
		if (next != NULL) {
			current = current->next;
			next = next->next;
		}
		else {
			return;
		}

	}

	current->next = next->next;
	delete next;
}

int main() {
	Node* first = NULL;
	Add(first, 1); 
	Add(first, 2); 
	Add(first, 5);
	Add(first, 3);
	Add(first, 7);

	display(first);
	cout << endl;
	deleteElem(first);
	cout << endl;
	display(first);

	




}*/

