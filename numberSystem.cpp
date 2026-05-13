#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n=10;
    while(n!=0){
        int bit = n&1;
        n = n>>1;
    }

    return 0;
}