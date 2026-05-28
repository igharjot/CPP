#include<bits/stdc++.h>
using namespace std;

void update(int arr[], int n){
    cout << "Inside the Function" << endl;
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going Back to the Main Function" << endl;
}

int main(){
    int arr[3] = {10,20,30};
    int size = sizeof(arr)/sizeof(int);
    update(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;
    return 0;
}