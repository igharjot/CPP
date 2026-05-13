#include <bits/stdc++.h>
using namespace std;

int  main(){
    int bit = 0, n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 0;
    while(n!=0){
        int digit = n & 1;
        bit = (digit * pow(10,i) + bit);
        n = n>>1;
        i++;
    }
    cout << "Answer is : " << bit;

    return 0;
}