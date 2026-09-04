#include <bits/stdc++.h>
using namespace std;

void OneToN(int count, int n){
    if(count > n) return;
    cout << count << "  ";
    OneToN(count+1, n);
}

void NToOne(int n, int i){
    if(n < i) return;
    cout << n << "  ";
    NToOne(n-1,i);
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void reverseArray(int a[], int l, int r){
    if(l>=r) return;
    swap(a[l], a[r]);
    reverseArray(a, l+1, r-1);
}

int main() {
    int n ;
    cout << "Enter a number to count upto using Recursion: ";
    cin >> n;

    OneToN(1, n);
    cout << endl;
    
    NToOne(n, 1);
    cout << endl;
    
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter element into tnnhe array: ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Your array is : ";
    printArray(arr, size);
    
    reverseArray(arr, 0, size-1);

    cout << "Reversed Array :";
    printArray(arr, size);

    return 0;
}