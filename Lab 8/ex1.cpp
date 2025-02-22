#include <iostream>
using namespace std;
int queue[100], n=100, front = -1, rear = -1;
void Insert(){
    int val;
    if (rear == n-1)
    cout<< "Queue Overflow: ";

    else if(front == -1)
    front = 0;
    cout<<"Inset the Element: "<<endl;
    cin>>val;
    rear++;
    queue[rear]=val;
}

void Delete() {
    if (front == -1 || front > rear){
        cout<< "Queue overflow: ";
        return;

    }else {
        cout <<"Element Deleted: "<< queue[front] <<endl;
        front++;
    }
}

void Display(){
    if (front == -1)
    cout << "Queue is empty"<< endl;
    else{
        cout << "Queue Elements are: ";
        for (int i = front; i <= rear; i++)
        cout<< queue[i]<<" ";
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