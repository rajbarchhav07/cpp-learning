#include <iostream>
using namespace std;
int main()
{
    // Looping or iteration control structure ----> Looping control structures is a block of statements which
    //   are executed again and again until the condition becomes false .
    //   Repeat the same task again and again until the condition becomes false .
    // There are three types of loop :
    //    1. for
    //    2. while
    //    3. do-while
    cout << " This is Looping control structures " << endl;
    // ******************For loop in C++**************
    //   Syntax of for loop : for ( initialization ; condition ; increment or decrement ) {
    //       block of code
    //   }
    //   for (int i = 0 ; i <= 10 ; i++) {
    //     cout << i << endl ;
    //   }
    // Infinite for loop :
    // for ( int i = 0 ; 3 > 2 ; i ++) {
    //     cout << i << endl ;
    // }
    // *******************while loop in C++******************
    //
    // Syntax of while loop :
    //    while (condition)
    //    {
    //       statements
    //       increment or decrement
    //    }
    //    int i = 1 ;
    //    while ( i <= 40 ) {
    //     cout << i << endl ;
    //     i++ ;
    //    }
    // Infinite while loop
    // int i = 1 ; // variable intialization
    // while (true){
    //     cout << i << endl ;
    //     i++;
    // }
    // *****************do-while loop in C++ *****************
    // Syntax of do-while loop :
    //   do
    //   {
    //     /* code */
    //    increment or decrement
    //   } while (condition);
    // wether the condition is true or false , it will run one iteration
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 40);

    return 0;
}
