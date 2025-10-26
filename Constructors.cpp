#include<iostream>
using namespace std;

class Student{ 
public:
    string name;
    int rno;
    float gpa;

    //        CONSTRUCTORS
    Student() { }      // Default Constructor

    Student(int r , float g){   // Parameterized Constructor
        rno = r;
        gpa = g;
    }

    Student(string n , int r , float g){   // Parameterized Constructor
        name = n;
        rno = r;
        gpa = g;
    }

    Student(int r , float g , string n){   // Parameterized Constructor
        name = n;
        rno = r;
        gpa = g;
    }
};

void print(Student s)
{
    cout << s.name << "  " << "Roll No-" << s.rno << "  " <<  "GPA-" << s.gpa << endl;
    cout << endl;
}

int main()
{
    Student s1("Harjot Singh" , 21 , 8.144);

    Student s4(5 , 5.05 , "Manish Sisodia");

    Student s2;
    s2.gpa = 9.0;
    s2.name = "Nishit Pandey";
    s2.rno = 46;

    Student s3(20 , 9.1);   // Two parameters only 
    s3.name = "Shivansh Kumar";

    Student s5 = s4;     //  Deep copy  
    s5.name = "Arvind Kejriwal";

    Student s6(s3);      // Copy Constructor - deep copy

    cout << endl;
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);

    return 0;
}