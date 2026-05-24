#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    int ans = 1;

    for(int i=1 ; i<=y ; i++){
        ans = ans*x;
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