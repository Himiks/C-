/*#include<iostream>
using namespace std;


struct Node {
	int data;
	Node* next, * prev;
};

void findSumPairs(Node* head, int sum) {
	Node* start = head;
	Node* end = head;
	while (end->next != NULL) {
		end = end->next;
	}
	int pairCount = 0;
	while (start != NULL && end != NULL && start != end && end->next != start) {
		if ((start->data + end->data) == sum) {
			pairCount++;
			cout << "(" << start->data << ", " << end->data << ")\n";
			start = start->next;
			end = end->prev;
		}
		else if ((start->data + end->data) < sum)
			start = start->next;
		else {
			end = end->prev;
		}

	}

	if (!pairCount) {
		cout << "No Such Pairs found !";
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
	struct Node* head = NULL;
	insert(&head, 12);
	insert(&head, 9);
	insert(&head, 6);
	insert(&head, 5);
	insert(&head, 2);
	int sum = 11;
	cout << "Pair in the linked list with sum = " << sum << " :\n";
	findSumPairs(head, sum);
	return 0;
}

*/



