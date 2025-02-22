#include<iostream>
using namespace std;

int BSA (int arr[10],int i,int num,int first,int last,int middle){
    cout<<"Enter numbers "<< endl;
    for (i=0; i<10; i++)
        cin >> arr[i];
    cout<<"n\Enter Number to search: ";
    cin >> num;
    first = 0;
    last = 9;
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
    int i, arr[10], num, first, last, middle;
    BSA(arr, i, num, first, last, middle);
}
