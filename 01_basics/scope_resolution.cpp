#include<iostream>
using namespace std; 

 // Note : what if the name of local and global variable have same .
 // Here  the value of local variable will only be printed because local variable has 
 // higher precendence than global variable
 // In order to access the global variable , we need to used scope resolution operator i.e (::)
 int a = 10 ; // global variable 
 void var() {
    int a = 20 ;
    cout << " The value of local variable a is " << a << endl ;
 }
 int main (){
     int a = 20 ;
        cout << " The value of a is : "  << a << endl ; // here only the value of local variable 
         // will be printed according to the precedence 
         var();
         cout << " The value of global variable a is " << (::a) << endl ;
         return 0 ;
 }