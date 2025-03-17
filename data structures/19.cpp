#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* slow, * fast;
		slow = head;
		fast = head;
		ListNode* prev = new ListNode(0, head); // Добавляем фиктивный узел
		ListNode* answer = prev; // Сохраняем указатель на фиктивный узел
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
};

void printList(ListNode* head) {
	while (head != nullptr) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}

int main() {
	// Создаем связанный список 1->2->3->4->5
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);

	cout << "Original List: ";
	printList(head);

	Solution sol;
	head = sol.removeNthFromEnd(head, 2);

	cout << "Modified List: ";
	printList(head);

	return 0;
}
