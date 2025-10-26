#include<bits/stdc++.h>
using namespace std;

class Batsmen{
public:
    string name;
    int runs;

    Batsmen(){ }

    Batsmen(string name , int runs)
    {
        this->name = name;     
        this->runs = runs;
        // "this->" keyword is used because of the same names of the  function parameter and the class attribute.
    }
    void print1(){
        cout << name << "  " << runs << endl << endl;
    }
};

class Bowlers{
public:
    string name;
    int wickets;
};

int main()
{
    cout << endl;

    Batsmen a1;
    a1.name = "Rohit Sharma";
    a1.runs = 18000;

    Batsmen a2("Virat Kohli", 27000);

    a1.print1();     // Calling a Class function 
    a2.print1();

    return 0;
}