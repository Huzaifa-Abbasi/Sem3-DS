//Write a C++ program to insert new ITEM at Bottom of the array. Print all elements of the array.

#include<iostream>
using namespace std;

int main(){
    int numbers[10], size, i, new_element;
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
    
    cout<<"Enter the element to add at Bottom: ";
    cin>> new_element;
    for(i = 0; i<size; i++ ){
        numbers[i];
    }
    numbers[i] = new_element;
    size++;

    cout<< "Updated Version"<<endl;
    for(int i = 0; i<size; i++){
        cout << numbers[i]<<endl;
    }
}