#include<iostream>
using namespace std;

int main() {
    int total, arr[10], i, j, temp;

    cout << "Enter The Size of Array: ";
    cin >> total;

    cout << "Enter " << total << " Array Elements: ";
    for (i = 0; i < total; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < total - 1; i++) {
        for (j = i + 1; j < total; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nSorted Array Is: \n";
    for (i = 0; i < total; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}