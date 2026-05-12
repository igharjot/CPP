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
    int n, nxt, prev, i, x = 0, y = 1;
    cout << "enter the number of digits to print fibonacci series : ";
    cin >> n;

    cout << x << "  " << y << "  ";
    nxt = x + y;
    for (i = 0; i < (n - 2); i++){
        cout << nxt << "  ";
        prev = nxt;
        nxt = nxt + y;
        y = prev;
    }
    cout << endl;
    return 0;
}