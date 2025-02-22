#include <iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
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


int main(){
    Node* head = nullptr;
    add_at_begin(head, 10);
    add_at_begin(head, 20);
    add_at_begin(head, 30);

    display(head);
}