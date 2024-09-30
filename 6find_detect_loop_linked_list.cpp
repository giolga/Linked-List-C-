#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

int findLoop(Node* head) {
    Node *slow, *fast;

    slow = head;
    fast = head;
    
    while(fast != NULL && fast->link != NULL) {
        fast = fast->link->link;
        slow = slow->link;

        if(slow == fast) {
            return 1; //if true, loop found
        }
    }

    return 0; // NO Loop found. we reached the end of the list;
}

void displayList() {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    //inserting a node at the beginning of the list using loop

    for(int i = 0; i < n; i++) {
        Node* ptr = new Node();
        cin >> ptr->data;
        ptr->link = head;
        head = ptr;
    }

    displayList();

    return 0;
}