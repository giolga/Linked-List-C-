#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = NULL;

void showMid() {
    Node* slow = head;
    Node* fast = head;

    if(head == NULL) {
        cout << "List Empty";
    }

    while(fast != NULL && fast->link == NULL) {
        slow = slow->link;
        fast = fast->link->link;// fast = fast->link; fast = fast->link;
    }
}

int main() {


    return 0;
}