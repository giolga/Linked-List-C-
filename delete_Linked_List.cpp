#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

void deleteBeg() {
    if(head == NULL) {
        cout << "Empty List";
        return ;
    }

    Node* ptr = head;
    head = head->link;

    free(ptr); 
}

void deleteEnd() {
    if(head == NULL) {
        printf("Empty List");
        return ;
    }


    Node* ptr, prev;

    if(head->link == NULL) { //if head contains one node;
        ptr = head;
        head = NULL;
        free(ptr);
        return ;
    }

    ptr = head;

    while(ptr != NULL) {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = NULL;
    free(ptr);
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