/*#include<iostream>
using namespace std;


struct Node {
	int data;
	Node* next;
	Node* prev;
};


void push(Node** head, int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = (*head);

	if ((*head) != NULL) {
		(*head)->prev = newNode;
		(*head) = newNode;

	}

}

int findLargestNode(Node** head) {
	Node* maxVal, * curr;
	maxVal = curr = *head;
	while (curr != NULL) {
		if (curr->data > maxVal->data) {
			maxVal = curr;

		}
		curr = curr->next;
	}
	return maxVal->data;
}

int main() {
	Node* head = NULL;
	push(&head, 5);
	push(&head, 2);
	push(&head, 9);
	push(&head, 1);
	push(&head, 3);
	cout << "The largest node in doubly linked-list is " << findLargestNode(&head);


}*/

