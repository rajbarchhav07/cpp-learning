#include<iostream>
using namespace std ;
  int main() {
    // In c++ whenever the float and double value is passed and they are same 
    // the compiler only recognized the double value not the float value 
    // In order to get float value and should recongnized by the compiler 
    // , we need to write like ex. 33.22f or 33.22F 
     float d = 33.22f ;
    long double  e = 33.22l ; // long double means the precision is more
     // **************float , double and long Literals*****************
     //A literal is a constant value that is written directly in the source code
      // and does not change during program execution.
      // ex int a = 10 ; here 10 is a literal
      //   a = 20 ; here 20 is another literal
      // here a is change from 10 to 20 
      // here why literals are need because to provide constants value to the variables and expressions 

    cout << "The size of 33.22 is " << sizeof(33.22) << endl ; // It will show the size of double 
    cout << "The size of 33.22f is " << sizeof(33.22f) << endl ; // It will show the size of float 
    cout << "The size of 33.22F is " << sizeof(33.22F) << endl ;
    cout << "The size of 33.22l is " << sizeof(33.22l) << endl ;
    cout << "The size of 33.22L is " << sizeof(33.22L) << endl ; // It will show the size of long double 
    
    // ************Typecasting****************
    // Typecasting means converting the value frome one datatype to another datatype .

      int a = 45 ;
      float b = 45.66 ;
     cout << "The value of a is " << float(a) << endl ;
     cout << " The value of a is " << (float)a << endl ;
     cout << " The value of b is " << int(b) << endl ;
     cout << " The value of b is " << (int)b << endl ;
      int c = int(b);
      cout << " The value of c is " << c << endl ;

      cout << " The expression is " << a + int(b) << endl;
      cout << " The expression is " << a + (int)b << endl;
      cout << " The expression is " << b + float(a) << endl;
      cout << " The expression is " << b + (float)a << endl;

    return 0 ;
  }
  