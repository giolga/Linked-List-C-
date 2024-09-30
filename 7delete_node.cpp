#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

void insertAtTheEnd(int d) {
    Node* ptr = new Node();
    ptr->data = d;
    ptr->link = NULL;

    if(head == NULL) { //if list empty
        head = ptr;
    } else {
        Node* temp = head;
        while(temp->link!=NULL) {
            temp = temp->link;
        }
        temp->link = ptr;
    }
}


void display() {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->data << "->";
        tmp = tmp->link;
    }
    cout << '\n';
}

//we can't use this method to delete the last node!!!
void deleteNode(Node* ptr) {
    Node* temp = ptr->link;

    ptr->data = temp->data;
    ptr->link = temp->link;
    free(temp);
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) { // inserting at the end of the list;
        int a;
        cin >> a;
        insertAtTheEnd(a);
    }

    display();

    Node* deleteThirdNode = head->link->link; // this is statically declared variable, so n should be more than 3...

    deleteNode(deleteThirdNode);
    
    display();

    return 0;
}