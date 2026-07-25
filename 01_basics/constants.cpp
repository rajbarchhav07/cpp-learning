#include<iostream>
#include<iomanip>  // In order to use setw() like function , we need to 
                    // include iomanip library 
using namespace std;
int main (){
    // int a = 2 ;
    // cout<< " THe value of a is : " << a << endl ;
    // a = 3 ;
    // cout << " The value of a is : " << a << endl ;
    // constants in c++
    // constants means the value of a variable will be the same throughout 
    // the program 
    // const int a = 3 ; 
    // cout << " The value of a is : " << a ;
    // a = 4 ; // here it will show error because the variable a value 
    //  is constants
    // cout << " The value of a is : " << a ; 
    // Manipulators in C++
     // Manipulators are special function or keywords which are used to 
    //  change the way the output or input is displayed
    // for example : setw() , endl 
    // setw() is a function which is used to give a fixed width to next output
    int a = 5 , b = 34 , c = 1223 ; 
    cout << " The value of a is : " << setw(4) << a << endl ; 
    cout << " The value of b is : " << setw(4) << b << endl ; 
    cout << " The value of c is : " << setw(4) << c << endl ; 
    
   // *********Operator Precedence****************    
//   Operator precedence is priority assigned to the operators which determines the order 
// in which the operations are perform in an expression
// if the precedence is same then  according to the operator associativty the expression will be solved 
//    int d = (a*b)+12; 
   int d = ((((a*5) + b) - 45) + 87) ;
   cout << " The value of d is : " << d ; 
   return 0;
}

    