//Write a C++ program to print largest value of array.
#include<iostream>
using namespace std;

int main(){
    int number[5]= {1,2,3,4,6};
    int i;
    int max = number[0];
    int min = number[0];

    for ( i = 0; i < 5; i++){
        if (number[i] > max){
            max = number[i] ;
        }
    }
    cout<< "The Max numbers is: "<<max<<"\n";

    for ( i = 0; i < 5; i++){
        if (number[i] < min){
            min = number[i] ;
        }
    }
    cout<< "The Min Numbers is: "<<min;   
}