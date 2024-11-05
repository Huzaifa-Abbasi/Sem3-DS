//Write a C++ program to multiply two integer 3-dimensional arrays and print the output array
#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int matrix2[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    int result[2][2][2] = {};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
            
                result[i][j][k] = matrix1[i][j][k] * matrix2[i][j][k];
            }
        }
    }
    cout << "Result of  two 3D matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << result[i][j][k] << " ";
            }
            cout << endl;    
        }
    }
}