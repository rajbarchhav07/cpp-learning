#include<iostream>
using namespace std;
   
int a = 10 ; // global variable 
 void var(){
   int b = 7 ; // local variable 
   cout << " The value of local variable b  is : " << b << endl;
 }
int main (){
    // scope means the area of the program where the variables can be used 
    // There are types of variables
    // 1. local variables  --- means the variable which are used and declare inside the function 
    // 2. glocal variables ---- means the variable which are declare outside the fuction can 
    // be used  everywhere in the program 
     
     int c = 20 ; // local variable
     
     cout << " The value of global variable a is : " << a << endl ; 
     var();
     cout << " The value of local variable c is  " << c ; 

     return 0 ;
    
    
 }