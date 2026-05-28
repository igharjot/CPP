#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    cout << "Printing the array : ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int arraySum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[10];
    int size;
    cout << "\nEnter the size of the array : ";
    cin >> size;
    cout << "Enter the elements into the array : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << endl;
    printArr(arr, size);
    cout << "Sum of the elements of the array is : " << arraySum(arr, size) << endl;
    cout << endl;
    return 0;
}
