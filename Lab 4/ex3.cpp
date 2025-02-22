#include <iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
    int position;
};

void add_at_begin(Node*&head, int value){
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}

void display(Node* head){
    while (head != nullptr){
    cout << head->data<<"->";
    head = head->next;
    }
    cout << "Null Ptr \n";
}

void insertAtGivenLocation(Node*& head, int index, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    for (int i = 0; i < index - 1; ++i) {
        if (temp == nullptr) {
            cout << "Index out of bounds\n";
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void displayafterPosition(Node* head) {
    int index;
    cout << "Enter the Index: ";
    cin >> index;

    for (int i = 0; i < index; ++i) {
        if (head == nullptr) {
            cout << "Index out of bounds\n";
            return;
        }
        head = head->next;
    }

    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "Null Ptr\n";
}

int main(){
    Node* head = nullptr;
    add_at_begin(head, 10);
    add_at_begin(head, 20);
    add_at_begin(head, 30);

    display(head);
    insertAtGivenLocation(head, 1, 40);
    displayafterPosition(head);
}