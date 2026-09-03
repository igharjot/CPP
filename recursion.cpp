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

int main() {
    int n ;
    cout << "Enter a number to count upto using Recursion: ";
    cin >> n;
    OneToN(1, n);
    cout << endl;
    NToOne(n, 1);
    cout << endl;
    return 0;
}