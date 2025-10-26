#include<bits/stdc++.h>
using namespace std;

class Bowlers
{
public:
    string name;
    int wkts;

    Bowlers(){ }
    Bowlers(string n, int w){
        name = n;
        wkts = w;
    }

    void print(){
        cout << name << "  " << wkts << endl;
    }
};

int main()
{
    cout << endl;
    
    // Using NEW keyword
    int* ptr = new int(625);  // pointing at a int value-625 without any variable.
    cout << *ptr << endl;

    Bowlers b1("R.Ashwin", 600);
    Bowlers* b2 = new Bowlers("Muthayia Murlidaran", 1000);

    cout << b1.name << "  " << b1.wkts << endl;
    cout << b2->name << "  "  << b2->wkts  << endl;

    cout << endl;
    return 0;
}