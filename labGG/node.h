#ifndef NODE_H
#define NODE_H

struct Node {
    int num;
    Node* next;

    Node(int data) : num(data), next(nullptr) {}
};

#endif