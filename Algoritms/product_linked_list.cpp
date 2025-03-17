/*#include<iostream>
using namespace std;


struct Node {
	int data;
	Node* next, * prev;
};

void pairProduct(Node* head, int data) {
	Node* first = head;
	Node* second = head;

	while (second->next != NULL) {
		second = second->next;
	}

	bool found = false;

	while (first != NULL && second != NULL && first != second && second != first) {
		if ((first->data * second->data) == data) {
			found = true;
			cout << "(" << first->data << ", " << second->data << ")" << endl;
			first = first->next;
			second = second->next;
		}
		else {
			if ((first->data * second->data) < data) {
				first = first->next;
			}
			else {
				second = second->prev;
			}
		}

	}
	if (found == false) {
		cout << "Not found " << endl;
	}
}

void insert(Node** head, int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->next = temp->prev = NULL;
	if (!(*head)) {
		(*head) = temp;
	}
	else {
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}



int main() {
	Node* head = NULL;
	insert(&head, 7);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 4);
	insert(&head, 3);
	insert(&head, 2);
	insert(&head, 1);
	int x = 6;
	pairProduct(head, x);
	return 0;
}*/