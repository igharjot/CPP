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

int main(){
    int a,b;
    cout << "Enter the values of a and b respectively :" <<endl;
    cin >> a >> b;

    cout << "b raised to the power a = " << power(a,b) << endl;

    cout << endl << "======= Cheking ODD or EVEN =======" << endl << endl;
    int num;
    cout << "Enter a number to  check if tis even or odd : ";
    cin >> num; 

    isEven(num);

    if(isEven){
        cout << "The entered number if even." << endl ; 
    }
    else{
        cout << "The entered number if odd." << endl;
    }
    
    return 0;
}