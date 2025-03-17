#include<iostream>
#include<list>
#include<map>
using namespace std;

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



void findSegment(Node* head, Node* head2) {
	Node* current = head;
	Node* current2 = head2;
	bool flag = true;


	while (current != NULL) {
		if (current->info == current2->info or current->info == current->next->info) {
			map<int, int> pair;

			if (current->info == current->next->info) {
				pair[current->info] = current->next->info;
			}
			else {
				pair[current->info] = current2->info;
			}

			current = current->next;
		}


	}
}





int main() {
	int point, colorsn;
	Node* first = NULL;
	Node* second = NULL;
	cin >> point >> colorsn;
	int color;
	list<int> v1;
	

	for (int i = 0; i < point; i++) {
		cin >> color;
		Add(first, color);
		v1.push_front(color);


	}
	auto iter = v1.begin();
	while(iter!=v1.end()) {
		Add(second,*iter);
		iter++;
	}
	findSegment(first, second);

	//findSegment(first);



}