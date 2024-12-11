/*#include<iostream>
#include<vector>
using namespace std;

struct List {
	int val;
	List* next;
	List():val(0),
		next(nullptr)
	{}
	List(int x):val(x), 
		next(nullptr)
	{}
	List(int x, List *next):
		val(x), next(next){}

};

class Node {
public:
	List* removeNthFromEnd(List* head, int n) {
		List* slow, * fast;
		slow = head;
		fast = head;
		List* prev = new List (0, head);
		List* answer = prev;
		while (n > 1) {
			fast = fast->next;
			n--;
		}
		while (fast->next) {
			fast = fast->next;
			slow = slow->next;
			prev = prev->next;
		}
		prev->next = slow->next;
		return answer->next;
	}


	List* createList(const vector<int>& values) {
		if (values.empty()) {
			return nullptr;
		}
		List* head = new List(values[0]);
		List* current = head;

		for (size_t i = 1; i < values.size(); i++) {
			current->next = new List(values[i]);
			current = current->next;
		}
		return head;


	}

	void printList(List* head) {
		List* current = head;
		while (current != nullptr) {
			cout << current->val << " ";
			current = current->next;
		}
		cout << endl;

	}
	
};




int main() {

	Node node;

	vector<int> values = { 1,2,3,4,5,6,7,8,9,10 };
	List* head = node.createList(values);

	cout << "List: ";
	node.printList(head);


	int n = 3;
	head = node.removeNthFromEnd(head, n);

	cout << "New list ";
	node.printList(head);

	return 0;
	




}*/



