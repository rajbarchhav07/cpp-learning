#include<iostream>
using namespace std ;
int main () {
    // what is pointer? -------> Pointer is a special type of variable which is used to 
    // store address of another variable .
     int a = 10 ; 
     cout << " The value of a is : " << a << endl ;
     cout << " The address of a is : " << &a << endl ;
     int *ptr = &a ;  // here ptr is a pointer to an integer
     cout << " The address of a  using pointer ptr is : " << ptr << endl ; // It will give the address of a .
     cout << " The value of a using pointer is : " << *ptr << endl ;
    //  The * means go to the address and bring back the value stored there .
    // we know that if we need to store a value we need a variable , but what if need to store 
    // a address , we can't use normal variable , such variable which is used to store address 
    // are called pointer .
    // The dereference operator (*) is used to access the value stored at the
    //  memory address contained in a pointer.
     // ************************Pointer to Pointer**************************
     int **c = &ptr ; // here c will store the address of ptr and ptr will store the address of a 
     cout << " The address of ptr is : " << &ptr << endl ; // address of ptr
     cout << " The address of ptr using another pointer c  is : " << c << endl; // address of ptr
     cout << " The address of a using pointer c  is : " << *c << endl ; // here *c will hold address of a 
     cout << " The value of a using pointer to pointer is " << **c << endl;
      // ***************************Changing the value using pointer***************
    //   int a = 10 ; 
    //   int *ptr = &a ;
      cout << " Before changing : " << endl ;
      cout <<  " a = " << a << endl ; 
      cout << " *ptr = " << *ptr << endl ;
       *ptr = 30 ;
       cout << " After changing : " << endl ;
       cout << " a = " << a << endl ;
       cout << " *ptr = " << *ptr << endl ;
       
      return 0 ; 
 }

  