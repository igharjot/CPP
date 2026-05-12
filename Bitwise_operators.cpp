#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Bitwise Operators
    int a=10, b=8;
    cout << "a&b = " << (a&b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "~b = " << (~b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "a^b = " << (a^b) << endl;
    cout << endl;

    // Left & Right Shift Operators
    cout << "17 >> 1 = " << (17 >> 1) << endl;
    cout << "17 >> 2 = " << (17 >> 2) << endl;
    cout << "19 << 1 = " << (19 << 1) << endl;
    cout << "21 << 3 = " << (21 << 3) << endl;
    cout << endl;


    // Fibonacci Series
    int n, next, prev, i, x = 0, y = 1;
    cout << "enter the number of digits to print fibonacci series : ";
    cin >> n;

    cout << x << "  " << y << "  ";
    next = x + y;
    for (i = 0; i < (n - 2); i++){
        cout << next << "  ";
        prev = next;
        next += y;
        y = prev;
    }
    cout << endl << endl;

    // Prime Number Operations
    int num;
    cout << "Enter a number to check if it is prime or not : ";
    cin >> num;
    bool isPrime = 1;
    for(int i = 2 ; i <= num/2 ; i++){
        if (num % i == 0){
            //cout << num << " is not Prime Number." << endl;
            isPrime = 0;
            break;
        }
        else{
            continue;
        }
    }
    if(isPrime == 0){
        cout << num << " is not Prime Number.";
    }
    else{
        cout << num << " is a Prime Number.";
    }
    cout << endl;

    return 0;
}