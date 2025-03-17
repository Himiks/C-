#include "insertAfter.h"
#include <stdexcept>
using namespace std;
 //function for testing

void insertAfter(Node*& first, Node*& second, int pos) {
    if (first == NULL) {
        throw invalid_argument("The first list is empty.");
    }
    if (second == NULL) {
        throw invalid_argument("The second list is empty.");
    }
    if (pos <= 0) {
        throw out_of_range("Position must be greater than 0.");
    }

    Node* current = first;
    int index = 1;
    while (current != NULL && index < pos) {
        current = current->next;
        index++;
    }
    if (current == NULL) {
        throw out_of_range("The position is greater than the length of the first list.");
    }

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
