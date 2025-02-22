#include <iostream>
using namespace std;

struct  Node{
    int data;
    Node* next;
    
};
Node* front = nullptr;
Node* rear = nullptr; 


void Insert(){
    int val;
    cout<< "Enter the Value to Insert: "<<endl;
    cin>> val;

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;

     if (rear == nullptr) {  
        front = rear = newNode;
    } else {
        rear->next = newNode;  
        rear = newNode;        
    }
}

void Delete() {
    if (front == nullptr) { 
        cout << "Queue Underflow" << endl;
    } else {
        Node* temp = front;
        cout << "Element Deleted: " << temp->data << endl;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;    
    }
}    

void Display() {
    if (front == nullptr) {  
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue Elements are: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main(){
    int ch;
    cout<<"1) insert: "<< endl;
    cout<<"2) delete: "<< endl;
    cout<<"3) display: "<< endl;
    cout<<"4) exit: "<< endl;

    do
    {
        cout<< "Enter Choice: "<< endl;
        cin >> ch;
        switch (ch)
        {
        case 1: Insert();
            break;

        case 2: Delete();
            break;

        case 3: Display();
            break;

        case 4: cout<< "Exit" << endl;
            break;
        
        default: cout<< "INvalid choice" << endl;
            break;
        }
    } while (ch != 4);
    
    
}