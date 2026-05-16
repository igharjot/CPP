#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int num = 3;
    // cout << endl;
    // switch (num)
    // {
    // case 1:
    //     cout << "First" << endl;
    //     break;
    // case 2:
    //     cout << "Second" << endl;
    //     break;
    // default:
    //     cout << "Defalut case." << endl;
    //     break;
    // }
    // cout << endl;

    
    // Simple Calculator Using Switch
    cout << endl;
    int x, y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << endl
         << "Enter the value of y : ";
    cin >> y;
    int ch;
    cout << endl
         << "Operations:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulas\n";
    cout << endl
         << "Enter your choice : ";
    cin >> ch;

    switch (ch){
        case 1:
            cout << x << " + " << y << " = " << (x + y) << endl;
            break;
        case 2:
            cout << x << " - " << y << " = " << (x - y) << endl;
            break;
        case 3:
            cout << x << " * " << y << " = " << (x * y) << endl;
            break;
        case 4:
            if (y == 0){
                cout << "Division by Zero is not defined.";
                break;
            }
            cout << x << " / " << y << " = " << (x / y) << endl;
            break;
        case 5:
            cout << x << " % " << y << " = " << (x % y) << endl;
            break;
        default:
            cout << "Invalid choice !!!" << endl;
            break;
    }
    cout << endl;

    return 0;
}