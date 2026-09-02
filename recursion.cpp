#include <bits/stdc++.h>
using namespace std;

void print(int count, int n){
    if(count == n+1) return;
    cout << count << "  ";
    count++;
    print(count, n);
}

int main() {
    int n ;
    int count = 0;
    cout << "Enter a number to count upto using Recursion: ";
    cin >> n;
    print(count, n);
    cout << endl;
    return 0;
}