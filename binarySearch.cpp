#include <bits/stdc++.h>
using namespace std;
#define N = 100;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "=========== Binary Search ==========" << endl;
    int arr[100];
    int size;
    cout << "\nEnter the size of the array : ";
    cin >> size;
    cout << "Enter the elements into the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing the Array : ";
    printArr(arr, size);

    cout << endl;
    return 0;
}