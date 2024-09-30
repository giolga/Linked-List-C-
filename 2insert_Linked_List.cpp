#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

void insertAtTheBeginning(int d) {
    Node* ptr = new Node();
    ptr->data = d;
    ptr->link = head; // head contains the address of the first node in the linked list, so since we want to insert in the beginning
                            // we have to give the address of the first node to the newly created node
    head = ptr; //newly created node is at the beginning of the linked list, so we give the address of the first node to the head
}

void insertAtTheEnd(int d) {
    Node* ptr = new Node();
    ptr->data = d;
    ptr->link = NULL;

    if(head == NULL) {
        head = ptr;
    }
    else {
        Node* temp = head;
        while(temp->link != NULL) {
            temp = temp->link; //traversing the list
        }
        temp->link=ptr;
    }
}

void displayLink() {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link; //traversing the list
    }

    cout << '\n';
}

int main() {
    Node* ptr = new Node();

    ptr->data = 1;
    ptr->link = NULL;
    head = ptr;

    insertAtTheBeginning(2);
    insertAtTheBeginning(1);
    insertAtTheEnd(3);
    displayLink();


    return 0;
}