#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 1;
    int k = 1;
    int count = 1;
    int row = 1;

    // Pattern #1
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << "  ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern #2
    // while(row<=n)
    // {
    //     int col=1;
    //     while(col<=row){
    //         cout<<"* ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // Pattern #3
    // while(i<=n)
    // {
    //     int j=1;
    //     while(j<=i)
    //     {
    //         cout<<count<<"  ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern #4
    // while(i<=n)
    // {
    //     int j=0;
    //     //int num=i;
    //     while(j<i)
    //     {
    //         cout<<i+j<<"  ";
    //         //cout<<num<<"  ";
    //         //num++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern #5
    //  while(k<=n)
    //  {
    //      int j=1;
    //      while(j<=i)
    //      {
    //          cout<<i<<"  ";
    //          i--;
    //      }
    //      cout<<endl;
    //      k++;
    //      i=k;
    //  }

    // Pattern #6
    // while(i<=n)
    // {
    //     int j=1;
    //     char ch=('A' + i - 1);
    //     while(j<=n)
    //     {
    //         cout<<ch<<"  ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern #7
    // while(i<n)
    // {
    //     int space=n-i;
    //     while(space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     int space = n - 1;
    //     while (space > 0)
    //     {
    //         cout << " ";
    //         space--;
    //     }
    //     while (j <= i)
    //     {
    //         cout << i << "  ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern #8
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
