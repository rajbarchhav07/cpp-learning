#include<iostream>
using namespace std ;
// ************* recursion***********************
 // Recursion is a programming technique in which funciton calls itself repeatadly to solve smaller part
 // of the same problem until the base condition is reached .
//  Recursion needs 2 things:
//  1. Base case → when to stop
//  2. Recursive case → function calls itself with a smaller/simpler input
// A pattern which help in recursive problems 
// return_type function(input)
// {
//     // 1. Base case
//     if (condition)
//         return something;

//     // 2. Smaller problem
//     return current_work + function(smaller_input);
// }

 void print( int n ){
    if ( n == 0 ){
        return ;
    }
    cout << n << endl;
    print(n-1);
    cout << n << endl ;
 }
 int main(){
    print(5);
    return 0 ;
 }