// Write a C++ program to add two 2-dimensional arrays.

#include <iostream>
using namespace std;

int main(){
    int matrix1[2][2] = {{1, 2},{3, 2}};
    int matrix2[2][2] = {{3, 4},{1, 2}};

    int matrix3[2][2] = {};

    for(int rows = 0; rows <2; rows++){
        for (int col = 0; col < 2; col++){
            matrix3[rows][col] =  matrix1[rows][col]+matrix2[rows][col];
        }
    }
    for(int rows = 0; rows <2; rows++){
        for (int col = 0; col < 2; col++){
           cout << matrix3[rows][col]<< " ";
        }
        cout<<endl;
    }
}