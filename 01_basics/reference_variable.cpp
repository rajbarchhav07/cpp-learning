#include<iostream>
using namespace std; 
int main (){
 
// reference variable is a another name (alias) of the existing 
// variable . It refers to the same memory location of the existing variable
// Technical definition ----->
// Reference variable is a variable which acts as an alias for another variable.
   // It is declare using & symbol and it must be initialized when it is created 
    // There is only one value in memory but it can be accessed using either name 
     // syntax ---> data_type &reference_name = original_variable;

     int a = 10 ;
      int &ref = a ;
    //   ref = 20 ; // changing ref means changing a 
      a = 30 ; // changing a is also changing ref

      cout << " The value of a is " << a << endl ;
      cout << " The value of ref is " << ref ;

    return 0 ;

}