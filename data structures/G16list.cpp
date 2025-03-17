//G16.Count n elements from beginning of list.Create function to insert another list after n - th element in first list.
//Input from keyboard integer n and all values in both lists.Create two lists in the beginning.Do no duplicate second list in memory.


#include<iostream>
#include<list>
using namespace std;

void display(const list<int>&list) { // function to display list

	if (list.empty()) {
		cout << "The list is empty " << endl;
	}

	for (auto& a : list) {
		cout << a << " ";
	}
	cout << endl;

}

void InsertAfter(list<int>&list1, list<int>&list2, int num) {  // function to insert second list in the first

	if (!list1.empty() and !list2.empty()) {
		auto it = list1.begin(); // pointer to the begging of the list
		advance(it, num); // function to advance the position of the pointer to the needed
		list1.insert(it, list2.begin(), list2.end()); // function to insert the second list in the first.
	}

}


void rem(list<int>& list) { // function to remove the elements from the list

	if (list.empty()) {
		cout << "The list is empty " << endl;

	}
	else {
		auto it = list.begin(); // pointer to the first element of the list
		while (it != list.end()) { // while it not points to the one past last element
			it = list.erase(it); //delete the element that it points
		}
		cout << "The list is deleted " << endl;
	}


}


int CountElem(const list<int>& list) { // function to count elements in the list
	int count = 0;
	if (!list.empty()) {
		for (auto a : list) {
			count++;
		}
	}
	return count;

}


int main() {
	list<int> list1; // first list
	list<int> list2; // second list
	int n;
	cout << "Please enter the values in the first list. If you want to stop adding values type -1:  " << endl;
	while (cin >> n and n != -1) { // inserting values to the first list
		list1.push_back(n);
	}

	cout << "Please enter the values in the second list. If you want to stop adding values type -1:  " << endl;
	while (cin >> n and n != -1) { // inserting values to the second list
		list2.push_back(n);

	}

	cout << "\n\nThe first list: " << endl;
	display(list1); // display function

	cout << "The second list: " << endl;
	display(list2);


	cout << "\n\nElements in the first list: " << CountElem(list1) << endl;  // function to count the elements
	cout << "Elements in the second list: " << CountElem(list2) << endl;

	if (!list1.empty() and !list2.empty()) { // if first and second list is not empty
		cout << "\n\nPlease enter the position to add the second list after: ";
		cin >> n;

		if (list1.size() < n or n <= 0) { // if position less or equal to the 0 or greater than the length of the list. Return an error.
			cout << "The length of the list is smaller than position, you typed or the position is out of range" << endl;
			return -1;
		}

		InsertAfter(list1, list2, n); // function to insert values first list, second list, position


		cout << "\n\nResult: " << endl;
		display(list1);

		cout << "\n\n";
		rem(list1);
		display(list1);

		cout << "\n";
		rem(list2);
		display(list1);
	}
	else {
		cout << "Try again first or second list is empty " << endl;
	}
}