#include <iostream>
using namespace std;

int main()
{
    /* Print the following pattern
     1 2 3 4
     1 2 3 4
     1 2 3 4
     1 2 3 4
    */
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {   
         for (int j = 1; j <= n; j++)     
         {                                
             cout << j << " ";            
            //  cout << n-j+1 << " "; this will print reverse of that pattern when it is 
            // used instead of  cout<<< n << " ";
         }                                  
        cout << endl;
    }
    cout << endl ;
    // Prints below pattern if n = 4 
    // 4 3 2 1 
    // 4 3 2 1 
    // 4 3 2 1
    // 4 3 2 1
    for ( int i = 1 ; i <= n ; i++)
    {
        for ( int j = n ; j <= n ; j-- ){
            if (j==0){
                break ;
            }
            cout << j << " ";
        }
        cout << endl ;
    }
    return 0;
}