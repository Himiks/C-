#include<iostream>
using namespace std;

class Node {
public:
	int data; 
	Node* next;

	Node(int num):
		data(num), next(NULL)
	{}

}; 


class Lists {
private:

	Node* head;
public:
	Lists() :
		head(NULL)
	{}
	void insertValues(int num);
	void display();
	void removeValues();
	void InsertAfter(Lists& list, int num);
	~Lists();


};


void Lists::insertValues(int num) {
	Node* NewNode = new Node(num);
	if (head == NULL) {
		head = NewNode;
	}
	else {
		Node* current = head;
		while (current->next!=NULL) {
			current = current->next;
		}
		current->next = NewNode;

	}


}


void Lists::display() {
	Node* current = head;
	while (current != NULL) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;

}

void Lists::removeValues() {
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (current != NULL) {
			Node* nextNode = current->next; // почему нужно создавать нувую
			delete current;
			current = nextNode;
		}
		head = NULL;

	}



}

void Lists::InsertAfter(Lists& list, int num) {
	if (head != NULL) {
		Node* current = head; 
		int index = 1; 

		while (current!=NULL and index < num) {  
			current = current->next;  
			index++;
		}
		if (current == NULL) {
			cout << "The position after which list should be added bigger than the list.";
			return;
		}
		else {
			//Node* after = current->next;
			//current->next = list.head;
			Node* current2 = list.head; 
			Node* after = current->next;
			while (current2!= NULL) {
				insertValues(current2->data);
				current2 = current2->next; // 4
			}
			Node* current = head;
			while (current->next != NULL) {
				current = current->next;

			}
			current->next = after;


		}
	}



}
Lists::~Lists() {
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (head != NULL) {
			Node* current = head->next;
			delete head;
			head = current;
		}
	}
	cout << "Values were deleted " << endl;
}





int main() {
	Lists FirstList;
	Lists SecondList;
	int num;
	
		
		cout << "Please enter the values in the firts list. If you want to stop adding values type -1:  "<< endl;
		while (cin >> num && num != -1) {
			FirstList.insertValues(num);

		}

		cout << "Please enter the values in the firts list. If you want to stop adding values type -1:  " << endl;
		while (cin >> num && num != -1) {
			SecondList.insertValues(num);

		}

		cout << "Firts List: " << endl;
	FirstList.display();
	cout << "Second List: " << endl;
	SecondList.display();

	int numAfter;
	cout << "Enter the n position to add list after: ";
	cin >> numAfter;

	FirstList.InsertAfter(SecondList, numAfter);
	cout << "Result: ";
	FirstList.display();


}





#include<iostream>
using namespace std;
struct Node {
	int num;
	Node* next;


	Node(int data) :
		num(data), next(NULL)
	{}

};


void Add(Node*&head, int data) {

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

void rem(Node*&head) {
	if (head == NULL) {
		cout << "The list is empty " << endl;
	}
	else {
		Node* current = head;
		while (head != NULL) {
			current = current->next;
			delete head;
			head = current;
		}
	}
	cout << "The list is deleted " << endl;
}

int ElemCount(Node* list) {
	int count = 0;
	Node* current = list;
	while (current != NULL) {
		count++;
		current = current->next;
	}

	return count;

}





void insertAfter(Node*&first, Node*&second, int pos) {
    if (first != NULL) {

        Node* current = first;
        int index = 1;
        while (current != NULL && index < pos) {
            current = current->next;
            index++;
        }
        if (current == NULL) {
            cout << "The position after which list should be added is greater than the list." << endl;
            return;
        }
        else {
			
			Node* current2 = second;
            Node* after = current->next;
            while (current2 != NULL) {
				Node* newNode = new Node(current2->num);
				current->next = newNode;
                current2 = current2->next;
				current = current->next;
            }

			current->next = after;
	
        }
    }
}




int main() {
	Node* first = NULL;
	Node* second = NULL;
	int num;
	cout << "Please enter the values in the firts list. If you want to stop adding values type -1:  " << endl;
	while (cin >> num && num != -1) {
		Add(first, num);
	}
	cout << "Please enter the values in the second list. If you want to stop adding values type -1:  " << endl;
	while (cin >> num && num != -1) {
		Add(second, num);
	}
	cout << "First list: " << endl;
	display(first);
	cout << "Second list: " << endl;
	display(second);

	cout << "Elements in the first list: " << ElemCount(first) << endl;
	cout << "Elememnts in the second list: " << ElemCount(second) << endl;

	
	if (first != NULL and second!=NULL) {
		cout << "Please enter the position to add the second list after: ";
		cin >> num;
		if (num <= 0 or num > ElemCount(first)) {
			cout << "The lenght of the list is smaller than position, you typed or the position is out of range " << endl;
			return -1;
		}

		insertAfter(first, second, num);
		cout << "Result: " << endl;
		display(first);


		cout << "First list is ";
		rem(first);
		cout << "Second list is ";
		rem(second);

		cout << "First list: " << endl;
		display(first);

		cout << "Second list: " << endl;
		display(second);
	}
	return 0;


}





#include<iostream>
#include<list>
using namespace std;

void display(const list<int>&list) {

	if (list.empty()) {
		cout << "The list is empty " << endl;
	}
	
	for (auto& a : list) {
		cout << a << " ";
	}
	cout << endl;

}

void InsertAfter(list<int>&list1, list<int>&list2, int num) {

	if (!list1.empty() and !list2.empty()) {
		auto it = list1.begin();
		advance(it, num);
		list1.insert(it, list2.begin(), list2.end());
	}

}


void rem(list<int>& list) {

	if (list.empty()) {
		cout << "The list is empty " << endl;

	}
	else {
		auto it = list.begin();
		while (it != list.end()) {
			it = list.erase(it);
		}
		cout << "The list is deleted " << endl;
	}


}


int CountElem(const list<int>& list) {
	int count = 0;
	if (!list.empty()) {
		for (auto a : list) {
			count++;
		}
	}
	return count;

}


int main() {
	list<int> list1;
	list<int> list2;
	int n;
	cout << "Please enter the values in the firts list. If you want to stop adding values type -1:  " << endl;
	while (cin >> n and n != -1) {
		list1.push_back(n);
	}

	cout << "Please enter the values in the second list. If you want to stop adding values type -1:  " << endl;
	while (cin >> n and n != -1) {
		list2.push_back(n);

	}

	cout << "The first list: " << endl;
	display(list1);

	cout << "The second list: " << endl;
	display(list2);


	cout << "Elements in the first list: " << CountElem(list1) << endl;
	cout << "Elements in the second list: " << CountElem(list2) << endl;

	if (!list1.empty() and !list2.empty()) { // add if 0 
		cout << "Please enter the position to add the second list after: ";
		cin >> n;

		if (list1.size() < n or n <= 0) {
			cout << "The lenght of the list is smaller than position, you typed or the position is out of range" << endl;
			return -1;
		}

		InsertAfter(list1, list2, n);


		cout << "Result: " << endl;
		display(list1);


		rem(list1);
		display(list1);

		rem(list2);
		display(list1);
	}
	else {
		cout << "Try again first or second list is empty " << endl;
	}
}


#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node(int data) : data(data), next(nullptr) {}
};

// Function to count elements in a linked list
int countElements(Node* head) {
	int count = 0;
	Node* current = head;
	while (current != nullptr) {
		count++;
		current = current->next;
	}
	return count;
}

// Function to insert another list after n-th element in the first list
void insertAfterN(Node*& first, Node*& second, int n) {
	if (first == nullptr) {
		first = second; // Если первый список пуст, просто присваиваем ему второй список
	}
	else {
		Node* current = first;
		int index = 1;
		while (current != nullptr && index < n) {
			current = current->next;
			index++;
		}
		if (current == nullptr) {
			cout << "The position after which list should be added is greater than the list." << endl;
			return;
		}
		else {
			Node* secondTail = second;
			while (secondTail->next != nullptr) {
				secondTail = secondTail->next;
			}
			secondTail->next = current->next; // Устанавливаем указатель next последнего узла второго списка на следующий элемент после n-го узла первого списка
			current->next = second; // Устанавливаем указатель next n-го узла первого списка на начало второго списка
			second = nullptr; // Очищаем указатель на второй список, чтобы избежать дублирования
		}
	}
}

// Function to display the linked list
void displayList(Node* head) {
	Node* current = head;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

// Function to delete all nodes of a linked list
void deleteList(Node*& head) {
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int main() {
	Node* firstList = nullptr;
	Node* secondList = nullptr;

	int n;
	cout << "Enter the number of elements for the first list: ";
	cin >> n;
	cout << "Enter " << n << " elements for the first list: ";
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		Node* newNode = new Node(num);
		if (firstList == nullptr) {
			firstList = newNode;
		}
		else {
			Node* current = firstList;
			while (current->next != nullptr) {
				current = current->next;
			}
			current->next = newNode;
		}
	}

	cout << "Enter the number of elements for the second list: ";
	cin >> n;
	cout << "Enter " << n << " elements for the second list: ";
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		Node* newNode = new Node(num);
		if (secondList == nullptr) {
			secondList = newNode;
		}
		else {
			Node* current = secondList;
			while (current->next != nullptr) {
				current = current->next;
			}
			current->next = newNode;
		}
	}

	cout << "First list: ";
	displayList(firstList);
	cout << "Second list: ";
	displayList(secondList);

	int position;
	cout << "Enter the position to insert the second list after: ";
	cin >> position;

	int firstListSize = countElements(firstList);
	if (position < 1 || position > firstListSize) {
		cout << "Invalid position. Position should be between 1 and " << firstListSize << endl;
	}
	else {
		insertAfterN(firstList, secondList, position);
		cout << "After insertion: ";
		displayList(firstList);
	}

	// Clean up memory
	deleteList(firstList);
	deleteList(secondList);

	return 0;
}


