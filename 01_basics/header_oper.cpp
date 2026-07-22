// There are two types of header files ---
// 1. System header files ---- comes with the compiler 
#include<iostream>
// 2. User defined header files --- written by the programmer 
// #include"this.h"  //----this will be only used if the this.h header file 
// will exist in the directory
using namespace std ;
   int main (){
      // Types of operators 
      // Assignment operator --> used to assign the value to the variable
      int a = 12 , b = 6 ;
      
   //  arithmertic operator 
    cout << " The value of a+b is : " << a + b << endl ;
      cout << " The value of a-b is : " << a - b << endl ;
    cout << " The value of a*b is : " << a * b << endl ;
      cout << " The value of a/b is : " << a / b << endl ;
    cout << " The value of a%b is : " << a % b << endl ;
      cout << " The value of a++ is : " <<  a++ << endl ; // print 12
    cout << " The value of a is : " <<  a << endl ; // print 13
      cout << " The value of ++a is : " << ++a << endl ;  // print 14 
    cout << " The value of a-- is : " << a-- << endl ; // print 14
      cout << " The value of a is : " << a << endl ; // print 13
    cout << " The value of --a  is : " << --a << endl ; // print 12
   
     // Relational or Comparison operator 
   cout << " The value of a == b is " << (a == b) << endl ; 
   cout << " The value of a != b is " << (a != b) << endl ; 
   cout << " The value of a < b is " << (a < b) << endl ; 
   cout << " The value of a <= b is " << (a <= b) << endl ; 
   cout << " The value of a > b is " << (a > b) << endl ; 
   cout << " The value of a >= b is " << (a >= b) << endl ; 
     // Logical operator 
     cout << " The value of ((a == b) && (a < b)) logical AND operator is : " << ((a == b) && (a < b)) << endl ;
     cout << " The value of ((a == b) || (a < b)) logical OR operator is : " << ((a == b) || (a < b)) << endl ;
     cout << " The value of (!(a == b)) logical NOT  operator is : " << (!(a == b)) << endl ;
     // Bitwise operator
     int c = 5 , d = 6 ; 
   cout << " The value of Bitwise AND is " << (c & d )  << endl ;
   cout << " The value of Bitwise OR is " << (c | d)  << endl ;
   cout << " The value of Bitwise NOT is " << (!c)  << endl ;
   cout << " The value of Bitwise XOR is " << (c ^ d)  << endl ;
   cout << " The value of Bitwise left shift  is " << (c << 1)  << endl ;
   cout << " The valur of Bitwise right shift is " <<  (c >> 1) << endl ;
   // Special operator
    // 1. (sizeof) operator  
    cout <<"The value of sizeof(c) is  "<< sizeof(c) << endl ;
    cout << "The value of sizeof(int) is  " << sizeof(int) << endl ;
    // 2. address--of--operator 
    cout <<" The address of a is " << &c ;
    
   
     
     return 0 ;
   }