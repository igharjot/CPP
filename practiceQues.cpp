#include <bits/stdc++.h>
using namespace std;

// void countWords(vector<string> words){
//     for(auto st = words.begin(); st <= words.end() ; st++){
//         cout << st << endl;
//     }
// }

void findGCD(int x, int y){
    while (x > 0 && y > 0){
        cout << "x = " << x << " and y = " << y << endl;  
        if (x > y){
            x = x % y;
        } else if (y > x){
            y = y % x;
        } else{
            cout << "\n Ans: The GCD or HCF of " << x << " & " << y << " is: " << x << endl;
            return;
        }
    }
    if(x == 0){
        cout << "\n Ans: The GCD or HCF of " << x << " & " << y << " is: " << y << endl;
    } else if(y == 0){
        cout << "\n Ans: The GCD or HCF of " << x << " & " << y << " is: " << x << endl;
    }
}

int main()
{
    string line;
    cout << "Enter a string : ";
    cin >> line;
    vector<string> words;
    string word = "";

    for (char ch : line)
    {
        tolower(ch);
        cout << ch << ", ";
        if (ch == ' ')
        {
            cout << "The word is : " << word << endl;
            words.push_back(word);
            word = "";
            continue;
        }
        else
        {
            word += ch;
        }
        cout << word << endl;
    }

    // countWords(words);

    int n1, n2;
    cout << "\nFinding GCD/HCF between 2 numbers.\n";
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;

    findGCD(n1, n2);

    cout << endl;
    return 0;
}