#include<bits/stdc++.h>
using namespace std;

void ap(){
    cout << "===============================================================================\n" << endl;
    cout << "    Program - 1 : Arithematic Progression (Formula for nth Term: (3*n + 7))    \n" << endl;
    cout << "===============================================================================" << endl;
    int n, result;
    cout << "Enter the value of n : ";
    cin >> n;
    result = 3*n + 7;
    cout << "The nth term of the given AP is : " << result << endl << endl;
}

// total no of set bits in a and b (calculatenumber of 1's in its binary forms)
void calcSetBits(){
    cout << "===============================================================================\n" << endl;
    cout << "           Program - 2 : Calculate Total nNo. of Set Bits in a and b           \n" << endl;
    cout << "===============================================================================" << endl;
    int a, b;
    cout << "Enter the values of a and b :";
    cin >> a >> b;

    cout << endl;
}

void fibonacci(){
    cout << "===============================================================================\n" << endl;
    cout << "               Program - 3 : Fibonacci Series (Find the nth term)              \n" << endl;
    cout << "===============================================================================" << endl;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int prev = 0, curr = 1;
    int next;
    for(int i = curr; i<n ; i++){
        next = curr + prev;
        
    }
    cout << "The nth term of the Fibonacci Series is : " << curr << endl;
    cout << endl;
}

int main(){
    
    ap();
    // calcSetBits();
    // fibonacci();
    
    return 0;
}