#include <iostream>
using namespace std;


int main(){
    int matrix[2][2] = {{1, 2},{3, 4}};

    for (int row = 0, col = 0; row < 2 && col < 2; row++, col++) {
        cout << matrix[row][col] << " ";
    }
    cout<<endl;
}
