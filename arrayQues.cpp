#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    cout << "Printing the array : ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arraySum(int arr[], int size){
    cout << "\n======= Sum of Array Elements =======\n" << endl;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout << "Sum of the elements of the array is : " << sum << endl;
}

void linearSearch(int arr[], int size){
    cout << "\n=========== Linear Search ==========\n" << endl;
    int n;
    int idx = -1;
    cout << "Enter the element to search in the array : ";
    cin >> n;
    cout << "Searching " << n << " in the array...\n" << endl;
    for(int i=0; i<size; i++) {
        if(arr[i] == n){
            idx = i;
            break;
        } else{
            continue;
        }
    }
    if(idx == -1){
        cout << "Element not found.\n" << endl;
    } else{
        cout << "Element found in the array at index : " << idx << endl;
    }
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
    printArr(arr, size);
    arraySum(arr, size);
    linearSearch(arr, size);
    
    cout << endl;
    return 0;
}
