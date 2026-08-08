#include <bits/stdc++.h>
using namespace std;

void countWords(vector<string> words){
    
}

int main() {
    string line;
    cout << "Enter a string : ";
    cin >> line;
    cout << endl;
    vector<string> words;
    string word = "";

    for(char ch : line){
        if(ch == ' '){
            cout << "The word is : " << word << endl;
            words.push_back(word);
            word = "";
            continue;
        }
        else{
            word += ch;
        }
    }
    countWords(words);

    cout << endl;
    return 0;
}