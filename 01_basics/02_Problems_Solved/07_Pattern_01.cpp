#include <iostream>
using namespace std;

int main()
{
    // // Print Following pattern
    // //  * * *
    // //  * * *
    // //  * * *
    // int n ;
    // cin >> n ;
    // for (int i = 1 ; i <= n ; i++){
    //     for ( int j = 1 ; j <= n ; j++) {
    //        cout << "*" << " "  ;
    //     }
    //     cout << endl ;
    // }
    // Print Following pattern
    /*
      1 1 1
      2 2 2
      3 3 3
    */
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    /*
    Prints 
    Ex. input n = 3 ;
    1 1 1 
    2 2 
    3
    */
    return 0;
}
