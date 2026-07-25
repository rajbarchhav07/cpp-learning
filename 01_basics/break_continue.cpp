#include <iostream>
using namespace std;
int main()
{
    //***************Break and Continue statements******************
    // Break statement is the statement which is used to exist the loop immediately.
    // for (int i = 0; i <= 10; i++)
    // {
    //     if (i == 2)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }
    // Continue statement is the statement which is used to skip that iteration
    // ,when it is used in that loop.
    for (int i = 0; i <= 10; i++)
    {
        if (i == 2)
        {
            continue;
        }

        cout << i << endl;
    }
    return 0 ;
}