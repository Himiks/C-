/*#include<iostream>
using namespace std;

struct Node {
	int data;
    Node* next, * prev;
};


void findSumPairs(Node* head, int sum) {
	Node* first = head;
	int pairCount = 0;
	while (first != NULL) {
		Node* second = first->next;
		while (second != NULL) {
			if ((first->data + second->data) == sum) {
				pairCount++;
				cout << "(" << first->data << ", " << second->data << ")\n";
			}
			second = second->next;
		}
		first = first->next;
	}
	if (!pairCount) {
		cout << "No pairs found" << endl;
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
	insert(&head, 6);
	insert(&head, 9);
	insert(&head, 4);
	insert(&head, 8);
	insert(&head, 2);
	int sum = 10;
	cout << "Pair in the linked list with sum = " << sum << " :\n";
	findSumPairs(head, sum);

}*/