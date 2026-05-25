#include<bits/stdc++.h>
using namespace std;

void ap(){
    cout << "\n===============================================================================" << endl;
    cout << "          Program - 1 : Arithematic Progression (Formula : (3*n + 7))          " << endl;
    cout << "===============================================================================" << endl;
    int n, result;
    cout << "Enter the value of n : ";
    cin >> n;
    result = 3*n + 7;
    cout << "The nth term of the given AP is : " << result << endl << endl;
}

void calcSetBits(){
    cout << "\n===============================================================================" << endl;
    cout << "           Program - 2 : Calculate Total nNo. of Set Bits in a and b           " << endl;
    cout << "===============================================================================" << endl;
    int a, b;
    cout << "Enter the values of a and b : ";
    cin >> a >> b;
    int countA = 0, countB = 0;
    while(a > 0){
        if(a % 2 == 1){
            countA++;
        }
        a /= 2;
    }
    while (b > 0){
        if (b % 2 == 1){
            countB++;
        }
        b /= 2;
    }
    int count = countA + countB;
    cout << "Total Number of Set Bits in Both a and b are : " << count << endl;
    cout << endl;
}

void fibonacci(){
    cout << "\n===============================================================================" << endl;
    cout << "               Program - 3 : Fibonacci Series (Find the nth term)              " << endl;
    cout << "===============================================================================" << endl;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int prev = 0, curr = 1;
    int next;
    if(n == 0){
        cout << "Invalid value !! (Enter n > 0)" << endl;
    }
    else if(n == 1){
        cout << "The 1st term of the Fibonacci Series is : 0" << endl;
    }
    else if (n == 2){
        cout << "The 2nd term of the Fibonacci Series is : 1" << endl;
    }
    else{
        for(int i = prev; i<(n-2) ; i++){
            next = curr + prev;
            prev = curr;
            curr = next;       
        }
        cout << "The term " << n << " of the Fibonacci Series is : " << curr << endl;
    }
    cout << endl;
}

int main(){
    ap();
    calcSetBits();
    fibonacci();

    return 0;
}