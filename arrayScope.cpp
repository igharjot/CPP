#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n){
    cout << "\n===== INSIDE UPDATE FUNCTION =====" << endl << endl;
    cout << "Updating the first element of the array...." << endl;
    arr[0] = 99;
    cout << "Updated Array : ";
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "\n=== GOING BACK TO MAIN FUNCTION ===\n" << endl;
}

int main(){
    int arr[3] = {10,20,30};
    int size = sizeof(arr)/sizeof(int);
    cout << endl <<"Original Array : ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    update(arr, size);

    cout << "Re-printing Array in main() : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl << endl;
    return 0;
}