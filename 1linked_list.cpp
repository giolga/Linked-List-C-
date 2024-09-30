#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

int main() {
    Node* ptr = new Node(); // use new to dynamically allocate memory
    ptr->data = 2;
    ptr->link = NULL;// we put NULL so our link doesn't have any other node connected to it

    head = ptr; // Copying the starting point of the linked list. Pointing the head to the first node in the linked list

    return 0;
}