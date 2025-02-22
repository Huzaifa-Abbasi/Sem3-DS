#include <iostream>
using namespace std;

int Linear_search_function (int arr[5], int i, int num, int index){
    cout<< "Enter 5 Numbers" << endl;
    for(i=0; i<5; i++)
    cin >> arr[i];
    cout<< "Enter Number to find: ";
    cin>> num;
    for (i=0; i<5; i++){
        if (arr[i]==num){
            index = i;
            break;
        }
    }
    cout<<"Found at Index No "<<index;
}
int main() {
    int arr[5], i, num, index;
    Linear_search_function(arr, i, num, index); 
}