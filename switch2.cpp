#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Switch Program to Calculate Minimum Number of Notes to form a Given Amount

    int amount, hunNotes = 0, fifNotes = 0, tweNotes = 0, oneNotes = 0;
    cout << endl
         << "Available notes are : $100, $50, $20 and $1" << endl;
    cout << "Enter the amount : ";
    cin >> amount;
    int org = amount;
    int ch = 1;

    switch (ch)
    {
    case 1:
        hunNotes = amount / 100;
        amount %= 100;
    case 2:
        fifNotes = amount / 50;
        amount %= 50;
    case 3:
        tweNotes = amount / 20;
        amount %= 20;
    case 4:
        oneNotes = amount / 1;
        amount %= 1;

    default:
        cout << "Enter valid Amount." << endl;
        break;
    }
    
    cout << "Notes Count for the Amount : " << org << endl
         << endl;
    cout << "$100 notes = " << hunNotes << endl;
    cout << "$50 notes = " << fifNotes << endl;
    cout << "$20 notes = " << tweNotes << endl;
    cout << "$1 notes = " << oneNotes << endl;
    cout << endl;

    return 0;
}