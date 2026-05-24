#include<bits/stdc++.h>
using namespace std;

int power(int x, int y){
    int ans = 1;
    for(int i=1 ; i<=y ; i++){
        ans = ans*x;
    }
    return ans;
}

bool isEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n,  int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int answer = num/denom;
    return answer;
}

int main(){
    cout << "======= Calculating b raised to the power a =======" << endl << endl;
    int a,b;
    cout << "Enter the values of a and b respectively :" <<endl;
    cin >> a >> b;
    cout << "b raised to the power a = " << power(a,b) << endl;

    cout << endl << "======= Cheking ODD or EVEN =======" << endl << endl;
    int num;
    cout << "Enter a number to  check if tis even or odd : ";
    cin >> num; 
    bool result = isEven(num);
    if(result){
        cout << "The entered number if even." << endl ; 
    }
    else{
        cout << "The entered number if odd." << endl;
    }
    cout << endl << "======= Calculating nCr =======" << endl;
    cout << "Formula : nCr = n! / r! * (n-r)!" << endl << endl;

    int n, r;
    cout << "Enter the value of n :" ;
    cin >> n;
    cout << "Enter the value of r :";
    cin >> r;
    cout << n << "C" << r << " = " << nCr(n,r);

    return 0;
}