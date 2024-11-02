//Write a C++ program to searches an element using the given index or by the value.

#include<iostream>
using namespace std;

int main(){
    int numbers[10], size, i, search;
    cout<< "Enter the size of the elements: ";
    cin>> size;
    cout<<"Enter the elements: ";
    for(int i = 0; i<size; i++){
        cin >>numbers[i];
    }

    cout<< "Original Version"<<endl;
    for(int i = 0; i<size; i++){
        cout << numbers[i]<<endl;
    }

    cout<<"Enter the index to search: ";
    cin>> search;

    for(i = 0; i<size; i++){
        cout<<numbers[search];
        break;
    }



}