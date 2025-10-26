#include<bits/stdc++.h>
using namespace std;

int main(){
    //                PAIRS
    pair <int , int> p1 = { 1 , 2 } ;
    cout << p1.first << "   " << p1.second << endl ;

    pair < pair <int , int> , int > p2 = { p1 , 3 } ;   // nested pair.
    cout << p2.first.first << "   " << p2.first.second << "   " << p2.second << endl ;


    //                VECTORS
    vector <int> v1 ;  // creates a empty container {}
    v1.push_back(11) ;   // pushes 1 into the vector 'v1'.
    v1.emplace_back(22) ;    // pushes 2 into the vector 'v1'.
    // emplace_back is faster than push_back.

    vector <pair <int , int>> v2 ;   // pair inside a vector.
    v2.push_back( {10 , 20} );  // curly braces to enter a pair.
    v2.emplace_back(30 , 40);   // no need of curly braces to enter a pair.

    vector <int> v3(5, 100);   // 100 is entered in the vector 'v3' 5 times  : {100, 100, 100, 100, 100} 
    vector <int> v4(5);   // 0 is entered in the vector 'v4' 5 times : {0, 0, 0, 0, 0} 
    v3.push_back(11);

    vector <int> v5(v3);   // 'v5' is the copy of vector 'v3'.

    // Printing Vectors
    cout << v1[0] << "  " << v1[1] << endl ;

    vector <int> :: iterator val1 = v3.begin();   // begin() will point at the starting-address of the vector i.e. at the the first element of the vector.
    cout << *(val1) << endl ;
    val1++ ;
    cout << *(val1) << endl ;
    val1 = val1 + 3 ;
    cout << *(val1) << endl ;
    val1++ ;
    cout << *(val1) << endl ;

    vector <int> v6(5, 66);
    vector <int> v7(5, 77);

    vector <int> :: iterator val2 = v4.end();   // end() will point right AFTER the end-address of the vector. 
    // vector <int> :: iterator val3 = v6.rend();
    // vector <int> :: iterator val4 = v7.rbegin();

    return 0 ;

}
