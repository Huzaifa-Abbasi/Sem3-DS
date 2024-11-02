//Write a C++ program to deletes ITEM from lOC given by user of the array. Print all elements of the array.

#include<iostream>
using namespace std;

int main(){
    int numbers[10], size, i, loc;
    cout<< "Enter the size of the elements: ";
    cin>> size;
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i<size; i++){
        cin >>numbers[i];
    }

    cout<< "Original Version"<<endl;
    for(int i = 0; i<size; i++){
        cout << numbers[i]<<endl;
    }

    cout<<"Enter the LOC: ";
    cin>> loc;

    for (int i = loc; i < size - 1; i++) {
        numbers[i] = numbers[i + 1];
    }
    size--;

    cout<<"After Deletion"<<endl;
    for(int i = 0; i<size; i++){
        cout << numbers[i]<<endl;
    }
}