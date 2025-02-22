#include<iostream>
using namespace std;

int BSA (int size, int arr[],int i,int num,int first,int last,int middle){

    cout<<"n\Enter the size of the arrAY ";
    cin >> size;

    cout<<"Enter numbers "<< endl;
    for (i=0; i<size; i++)
        cin >> arr[i];
    
    cout<<"n\Enter Number to search: ";
    cin >> num;
    first = 0;
    last = size;
    middle = (first+last)/2;
    
    while (first <= last){
        if (arr[middle] < num){
            first = middle+1;
        }else if (arr[middle]==num){
            cout<< "\n The Number, "<<num<<" found "<< middle+1;
            break;
        }else{
            last = middle-1;
            middle = (first+last)/2;
        }
        if (first > last){
            cout << "\n the number "<<num<< "is not found";
        }
        cout<< endl;
    }
}

int main (){
    int i, size, num, first, last, middle;
    cout << "Enter the maximum size of the array: ";
    cin >> size; // Initialize size before declaring the array
    int arr[size];
    BSA(size, arr, i, num, first, last, middle);
}
