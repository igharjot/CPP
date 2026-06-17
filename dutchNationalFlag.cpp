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
    cout << "Printing the Array: ";
    printArr(arr, n);
    int low = 0, mid = 0, high = n-1;
    
    while (high >= mid){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    cout << "Printing the Sorted 0-1-2 Array: ";
    printArr(arr, n);

    cout << endl;
    return 0;
}