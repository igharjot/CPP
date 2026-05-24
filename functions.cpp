#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
    int ans = 1;

    for(int i=1 ; i<=b ; i++){
        ans = ans*a;
    }
    
    return ans;
}

int main(){
    int a,b;
    cout << "Enter the values of a and b respectively :" <<endl;
    cin >> a >> b;

    cout << "b raised to the power a = " << power(a,b) << endl;
    
    return 0;
}