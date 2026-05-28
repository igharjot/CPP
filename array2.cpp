#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMax(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        } else{
            continue;
        }
    }
    return max;
}

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        } else{
            continue;
        }
    }
    return min;
}

int main(){
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[100];
    for(int i=0 ; i<size ; i++){
        cin >> arr[i];
    }
    cout << "The array you entered : ";
    printArr(arr, size);
    cout << "Max value of the array = " << getMax(arr, size) << endl ;
    cout << "Min value of the array = " << getMin(arr, size) << endl ;

    cout << endl;
    return 0;
}