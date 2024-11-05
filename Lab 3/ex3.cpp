//Write a C++ program to Find Sum of Diagonal Elements of Matrix

#include <iostream>
using namespace std;


int main(){
    int matrix[2][2] = {{1, 2},{3, 4}};
    int sum = 0;

    for (int row = 0, col = 0; row < 2 && col < 2; row++, col++) {
        sum += matrix[row][col]; 
    }
    cout << "Sum of diagonal elements: " << sum << endl;
    cout<<endl;
}