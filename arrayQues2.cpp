#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAdjacent(int arr[], int size){
    cout << "\n======= Swapping Adjacent Elements of the Array =======\n" << endl;
    for(int i=0; i<size; i+=2){
        if((i+1) < size){
            swap(arr[i],arr[i+1]);
        }
    }
    printArr(arr, size);
}

int main() {
    int arr[50];
    int size;
    cout << "\nEnter the size of the array : ";
    cin >> size;
    cout << "Enter the elements into the array : ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Printing the Array : ";
    printArr(arr, size);
    swapAdjacent(arr, size);
    
    cout << endl;
    return 0;
}