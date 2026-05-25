#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for (int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {0};           // every element of the array is 0.
    int arrSize = sizeof(arr)/sizeof(int);

    int arr1[5] = {7};           // arr1 = {7,0,0,0,0}
    int arr1Size = sizeof(arr1) / sizeof(int);

    int arr2[14];
    fill(arr2, arr2 + 14, -24);  // every element of array is -24.
    int arr2Size = sizeof(arr2) / sizeof(int);

    cout << "\narr = ";
    printArr(arr, arrSize);

    cout << "arr1 = ";
    printArr(arr1, arr1Size);

    cout << "arr2 = ";
    printArr(arr2, arr2Size);

    cout << endl;
    return 0;
}