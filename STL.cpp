#include <bits/stdc++.h>
using namespace std;

void explainList()
{

    list<int> ls; // Declaration

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(); // {2,4}

    // Rest functions same as vector - begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque()
{
    deque<int> dq;
    // exactly similar to list and vector.
}

void explainStack()
{

    //         STACK (LIFO)
    // Stack mainly deals with 3 functions - push(), pop() and top()

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top(); // 5

    st.pop();

    cout << st.top();   // 4
    cout << st.size();  // 4
    cout << st.empty(); // clears the stack

    stack<int> st1, st2;
    st1.swap(st2); // swapping two stacks
}

void explainQueue()
{
    //         QUEUE (FIFO)
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(3); // {1,2,3}
    q.emplace(4); // {1,2,3,4}

    cout << q.back(); // 4
    q.back() += 5;    // 4 + 5
    cout << q.back(); // 9

    q.pop(); // {2,3,9} deletes front element as FIFO

    cout << q.front(); // 2
}

void explainPriorityQue()
{
    // PRIORITY QUEUE - It sinnot a linear DS, it as maintained as tree DS.

    priority_queue<int> pq; // MAX HEAP
    // Inserts elements in descending order automatically

    pq.push(10);    // {10}
    pq.push(20);    // {20,10}
    pq.push(30);    // {30,20,10}
    pq.emplace(40); // {40,30,20,10}
    pq.emplace(50); // {50,40,30,20,10}
    pq.push(25);    // {50,40,30,25,20,10}
    pq.push(15);    // {50,40,30,25,20,15,10}
    pq.emplace(45); // {50,45,40,30,25,20,15,10}
    pq.emplace(35); // {50,45,40,35,30,25,20,15,10}

    cout << pq.top(); // 50
    pq.pop();         // {45,40,35,30,25,20,15,10}
    pq.pop();         // {40,35,30,25,20,15,10}
    cout << pq.top(); // 40

    priority_queue<int, vector<int>, greater<int>> pq1; // MIN HEAP
    // Inserts elements in ascending order automatically

    pq.push(10);    // {10}
    pq.push(20);    // {10,20}
    pq.push(30);    // {10,20,30}
    pq.emplace(40); // {10,20,30,40}
    pq.emplace(50); // {10,20,30,40,50}

    pq.push(25);    // {10,20,25,30,40,50}
    pq.push(15);    // {10,15,20,25,30,40,50}
    pq.emplace(45); // {10,15,20,25,30,40,45,50}
    pq.emplace(35); // {10,15,20,25,30,35,40,45,50}

    cout << pq.top(); // 10
    pq.pop();         // {15,20,25,30,35,40,45,50}
    pq.pop();         // {20,25,30,35,40,45,50}
    cout << pq.top(); // 20
}

void explainSet()
{
    set<int> s;
    // Inserts unique occurrences of the elements in sorted order automatically.
    // No element is repeated more than once.

    s.insert(3);  // {3}
    s.emplace(2); // {2,3}
    s.insert(2);  // {2,3}
    s.insert(1);  // {1,2,3}
    s.emplace(3); // {1,2,3}

    auto it1 = s.find(3); // If the element is present in the set, it will point to that element (3)
    auto it2 = s.find(5); // If the element is not present in the set, it will point to s.end()

    s.erase(2); // {1,3}
}

void explainMultiSet()
{
    multiset<int> ms;
    // Multiset can store multiple occurrences of the same element

    ms.insert(10); // {10}
    ms.insert(11); // {10,11}
    ms.insert(10); // {10,10,11}
    ms.insert(10); // {10,10,10,11}

    ms.erase(10); // erases all the occurrences of 10.

    int cnt = ms.count(11); // counts number of occurrences of 11 in ms ie 1
}

void explainUnorderedSet()
{
    unordered_set<int> us;
    // Inserts elements in unsorted manner.
    // Elements are inserted uniquely(only once).
}

void explainMap()
{
    cout << "\n\n       MAPS\n\n";
    // MAPS
    // Stores data in {Key,Value} format, where Key and Value can be of any datatype independently
    // Stores Unique Keys in sorted order.
    map<int,int> m1;            // m1
    map<int,pair<int,int>> m2; // m2
    map<pair<int,int>,int> m3; // m3

    m1[1] = 2;         // { {1,2} }
    m1.insert({3, 1}); // { {1,2}, {3,1} }
    m1.emplace(2, 5);  // { {1,2}, {2,5}, {3,1} }

    m2.insert({3,{10,20}});
    m2[2] = {15,16};

    m3[{2, 3}] = 10;
    m3.insert({{55,66},11});

    cout << "m1 : ";
    for (auto it : m1) { // it stores each {key,value} as a 'Pair'
        cout << it.first << " - " << it.second << endl;
    }

    cout << "m2 : ";
    for (auto it : m2) { // it stores each {key,value} as a 'Pair'
        cout << it.first << " - {" << it.second.first << "," << it.second.first << "}" << endl;
    }

    cout << "m3 : ";
    for (auto it : m3) { // it stores each {key,value} as a 'Pair'
        cout << "{" << it.first.first << "," << it.first.second << "} - " << it.second << endl;
    }

    cout << m1[1] << endl;
    cout << m1[5] << endl;

    cout << "Using m1.find(3) : ";
    auto it2 = m1.find(3);
    cout << (*it2).first << "  " << it2->second;

    cout << "Using m1.find(5) : ";
    auto it1 = m1.find(5);
    cout << (*it1).first << "  " << it1->second;
}

int main()
{
    //                PAIRS

    pair<int, int> p1 = {1, 2};
    cout << "p1 = " << p1.first << "   " << p1.second << endl;

    pair<pair<int, int>, int> p2 = {p1, 3}; // nested pair.
    cout << "p2 = " << p2.first.first << "   " << p2.first.second << "   " << p2.second << endl;

    pair<int, int> pairArr[] = {{2, 5}, {7, 5}, {12, 5}};
    int size = 0;
    size = sizeof(pairArr) / sizeof(pairArr[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "Pair Array : " << pairArr[i].first << "   " << pairArr[i].second << endl;
    }

    //                VECTORS (Singly Linked List)

    vector<int> v1;      // creates a empty container {}
    v1.push_back(11);    // pushes 11 into the vector 'v1'.
    v1.emplace_back(22); // pushes 22 into the vector 'v1'.
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

    vector<int>::iterator val2 = v4.end();          // end() will point right AFTER the end-address of the vector.
    vector<int>::reverse_iterator val3 = v3.rend(); // reverse iteration
    vector<int>::reverse_iterator val4 = v4.rbegin();

    // Printing a Vector
    cout << "Printing Vector v3:" << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
    {
        cout << *(it) << " ";
    }

    cout << "" << endl;

    // Size of the vector
    int len = v3.size();
    cout << "Size (number of elements) of vector v3 is : " << size << endl;

    v3.pop_back();

    v6.swap(v7); // swaps the two vectors

    v4.clear(); // males the vector empty.

    cout << "Is the vector v7 empty? : " << v7.empty() << endl;

    explainMap();

    return 0;
}
