#include <bits/stdc++.h>
using namespace std;

// Sorting 0s, 1s and 2s in an array.

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n;
    cout << "\nEnter the size of the array : ";
    cin >> n;
    cout << "Enter the elements into the array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int low = 0, mid, high = n;

    cout << endl;
    return 0;
}