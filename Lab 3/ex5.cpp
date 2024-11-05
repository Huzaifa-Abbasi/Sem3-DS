//Write a C++ program to Transpose Matrix

#include <iostream>
using namespace std;


int main(){
    int matrix[2][2] = {{1, 2},{3, 4}};
    int transpose[2][2];

    
    for(int col = 0; col < 2; col++){
        for (int rows = 0; rows <2; rows++){
            transpose[col][rows] =  matrix[rows][col];
        }
    }
    for(int col = 0; col < 2; col++){
        for (int rows = 0; rows <2; rows++){
            cout << transpose[col][rows]<<" ";
        }
        cout<< endl;
    }
}