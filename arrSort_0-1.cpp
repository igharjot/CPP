#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for (int num = 0; num < n; num++)
    {
        cout << arr[num] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int val;
    cout << "Enter length of the array : ";
    cin >> val;

    cout << "\n\nEnter binaries into the array : ";
    for(int x=0; x<val;  x++){
        cin >> arr[x];
    }
    cout << "Printing the array : ";
    printArray(arr, val);

    int i = 0, j = val-1;
    while(i<val && j>=0){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] == 1){
            j--;
        }
        else if(arr[i] == 1){
            if(arr[j] == 0){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        if(i>=j){
            break;
        }
    }
    cout << "Printing Sorted 0,1 array : ";
    printArray(arr, val);

    cout << endl;
    return 0;
}