#include <bits/stdc++.h>
using namespace std;

// void countWords(vector<string> words){
//     for(auto st = words.begin(); st <= words.end() ; st++){
//         cout << st << endl;
//     }
// }

void findGCD(int x, int y){
    cout << x << " , " << y << endl;
}

int main() {
    string line;
    cout << "Enter a string : ";
    cin >> line;
    vector<string> words;
    string word = "";

    for(char ch : line){
        tolower(ch);
        cout << ch << ", ";
        if(ch == ' '){
            cout << "The word is : " << word << endl;
            words.push_back(word);
            word = "";
            continue;
        }
        else{
            word += ch;
        }
        cout << word << endl;
    }

    // countWords(words); 

    findGCD(num1, num2);

    cout << endl;
    return 0;
}