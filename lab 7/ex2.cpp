#include <iostream>
using namespace std;

struct Node{
 int data;
 Node* next;   
};


class Stack{
    Node*top;

    public:

    Stack(){
        top = nullptr;
    }

    void push (int value){
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = top;
        top = newNode;
        cout<< value << " Pushed \n";
    }


    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack.\n";
        delete temp;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* current = top;
        cout << "Stack elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};





int main(){

    int ch, value;
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<< "Enter the choice: \n1 for push \n2 for pop \n3 for display";
       cin >> ch;

       switch (ch)
       {
            case 1:{
                cout << "Enter to Push:"<<endl;
                cin >> value;
                s.push(value);
            }
            case 2: {
                s.pop();
            }

            case 3: {
                s.display();
            }
        }while (ch = 4);

}