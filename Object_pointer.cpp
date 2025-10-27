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
    }
    void print1(){
        cout << name << "  " << runs << endl;
    }
};

void change(Batsmen* b)
{
    // (*b).name = "Ricky Ponting";
    b->name = "Ricky Ponting";    // "(*p)." = "p->"
}

int main()
{   
    int x = 7;
    cout << &x << endl;
    int* p = &x;
    cout << p << endl;
    cout << *p << endl;
    *p = 21;    // x = 21
    cout << x << endl;

    Batsmen b1("Virat Kohli", 27000);
    Batsmen b2("Sachin Tendulkar", 34000);

    Batsmen* p1 = &b1;
    Batsmen* p2 = &b2;

    cout << endl;
    cout << p1 << endl;
    cout << (*p1).runs << endl;
    
    (*p2).runs = 34500;
    cout << b2.runs << endl;

    change(&b1);
    b1.print1();

    cout << endl;
    return 0;

}
