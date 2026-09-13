#include <iostream>
using namespace std;
int main()
{
    // Print the following pattern
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
    // Print the following pattern
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}