//Name: Alok Chawat
//PRN:2307012316
//Aim:Implemention of Linked List in a programto Add a node at the end of a Linked List

#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 30);
    display(head);
    
    insertAtHead(head, 32);
    display(head);
    
    insertAtTail(head, 35);
    display(head);

    insertAtTail(head, 37);
    display(head);

    return 0;
}


/*Output:
30 -> NULL
32 -> 30 -> NULL
32 -> 30 -> 35 -> NULL
32 -> 30 -> 35 -> 37 -> NULL*/