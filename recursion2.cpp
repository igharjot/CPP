#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s, int i, int n){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return palindrome(s, i+1, n);
}

int main() {
    cout << "\nChecking if a string is palindrome or not using Recursion.\n\n";
    string st = "MADAMa";
    cout << "String is : " << st << endl;
    bool result;
    result = palindrome(st, 0, st.length());
    if(result) cout << "The string is palindrome.\n";
    else cout << "The string is not palindrome.\n";

    cout << endl;
    return 0;
}