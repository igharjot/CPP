#include<iostream>
using namespace std;

class Car{   // user defined datatype - Car i.e. class.
public:
    string name;
    int price;
    int seats;
    string type;
};

void print(Car c)
{
    cout << c.name << endl << c.price << endl << c.seats << " seater" << endl << c.type << endl;
    cout << endl;
}

void change(Car &c)
{
    c.name = "Kia Sonet";
}

int main()
{
    Car c1;
    c1.name = "Tata Nexon";
    c1.price= 1000000;
    c1.seats = 5;
    c1.type = "Mid SUV";

    Car c2;
    c2.name = "Kia Seltos";
    c2.price= 1600000;
    c2.seats = 5;
    c2.type = "SUV";

    cout << endl;
    print(c1);
    print(c2);

    cout << "After changing name using call by reference...." << endl; 
    cout << endl;  
    change(c2);  
    print(c2);

    return 0;
}