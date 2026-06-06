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

vector<int> interSecArr(int arr1[], int arr2[], int n, int m){
    vector<int> ans;
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        } 
        else if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j]){
            j++;
        }
    }
    return ans;

    // SOLUTION - 2 (High Complexity)

    // for(int i=0; i<n; i++){
    //     int element = arr1[i];
    //     for(int j=0; j<m; j++){
    //         if(element == arr2[j]){
    //             ans.push_back(element);
    //             arr2[j] = INT_MIN;
    //             break;
    //         }
    //     }
    // }
    // return ans;
}

int
main(){
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

    cout << "\n========== Finding Intersection of 2 Arrays ==========\n" << endl;
    int arr1[50], arr2[50];
    int n, m;

    cout << "\nEnter the size of the array - 1 : ";
    cin >> n;
    cout << "Enter the elements into the array - 1 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter the size of the array - 2 : ";
    cin >> m;
    cout << "Enter the elements into the array - 2 : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout << "\nArray - 1 : ";
    printArr(arr1, n);
    cout << "Array - 2 : ";
    printArr(arr2, m);

    vector<int> ans = interSecArr(arr1, arr2, n, m);
    cout << "\nIntersection of Array-1 and Array-2 : ";
    for(auto& num : ans){
        cout << num << " ";
    }

    cout << endl;
    return 0;
}