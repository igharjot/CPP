#include <bits/stdc++.h>
using namespace std;

int main()
{
    //                PAIRS
    pair<int, int> p1 = {1, 2};
    cout << "p1 = " << p1.first << "   " << p1.second << endl;

    pair<pair<int, int>, int> p2 = {p1, 3}; // nested pair.
    cout << "p2 = " << p2.first.first << "   " << p2.first.second << "   " << p2.second << endl;

    //                VECTORS
    vector<int> v1;      // creates a empty container {}
    v1.push_back(11);    // pushes 1 into the vector 'v1'.
    v1.emplace_back(22); // pushes 2 into the vector 'v1'.
    // emplace_back is faster than push_back.

    // Printing Vectors
    cout << "v1 = ";
    for (auto i : v1)
        cout << i << " ";
    cout << endl;

    vector<pair<int, int>> v2; // pair inside a vector.
    v2.push_back({10, 20});    // curly braces to enter a pair.
    v2.emplace_back(30, 40);   // no need of curly braces to enter a pair.
    cout << "v2 = ";
    for (auto i : v2)
        cout << i.first << ", " << i.second << "\t";
    cout << endl;

    vector<int> v3(5, 100); // 100 is entered in the vector 'v3' 5 times  : {100, 100, 100, 100, 100}
    vector<int> v4(5);      // 0 is entered in the vector 'v4' 5 times : {0, 0, 0, 0, 0}
    v3.push_back(11);
    v4.push_back(11);
    cout << "v3 = ";
    for (auto i : v3)
        cout << i << " ";
    cout << endl;
    cout << "v4 = ";
    for (auto i : v4)
        cout << i << " ";
    cout << endl;

    vector<int> v5(v3); // 'v5' is the copy of vector 'v3'.
    cout << "v5 = ";
    for (auto i : v5)
        cout << i << " ";
    cout << endl;

    vector<int>::iterator val1 = v3.begin(); // begin() will point at the starting-address of the vector i.e. at the the first element of the vector.
    cout << "v3[0] = " << *(val1) << endl;
    val1++;
    cout << "v3[1] = " << *(val1) << endl;
    val1 = val1 + 3;
    cout << "v3[4] = " << *(val1) << endl;
    val1++;
    cout << "v3[5] = " << *(val1) << endl;

    vector<int> v6(5, 66);
    vector<int> v7(5, 77);

    vector<int>::iterator val2 = v4.end(); // end() will point right AFTER the end-address of the vector.
    // vector <int> :: iterator val3 = v6.rend();
    // vector <int> :: iterator val4 = v7.rbegin();

    return 0;
}
