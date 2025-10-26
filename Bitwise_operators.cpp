#include<iostream>
using namespace std;
int main()
{
    // Fibonacci Series

    int n,nxt,prev,i,x=0,y=1;
    cout << "enter the number of digits to print fibonacci series : ";
    cin >> n;

    cout << x << endl << y << endl;
    nxt = x + y;
    for(i = 0 ; i<(n-2) ; i++)
    {
        cout << nxt << endl;
        prev = nxt;
        nxt = nxt + y;
        y = prev;
    }
    return 0;
}