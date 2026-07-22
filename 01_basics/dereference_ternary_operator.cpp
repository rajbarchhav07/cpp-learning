#include<iostream>
 using namespace std ;
  int main () {
    //  In a declaration, * tells the compiler that a variable is a pointer.
    // In an expression, * is the dereference operator, used to access the value 
    // stored at the address held by the pointer.
    // Here it is a pointer which is used to store the address of a variable 
    // The role of * operator in this is to go to the address stored inside the pointer 
    // and bring me the value kept there .
    int a = 10 ;
    // here ptr is an pointer to an integer 
      int *ptr = &a ; 
      cout << " The address  is : " << ptr << endl  ; // here ptr will print the address 
      cout << " The value is : " << *ptr << endl ; // *ptr will print the value of a 
    // Ternary operator 
      // It is a shortcut for if-else statement 
      // Instead of writing 5-6 lines of if-else , you can write the same logic in one line 
      int age = 19 ;
        (age>=18)? cout<< " Eligible " : cout << " Not Eligible " ;
      return 0 ;
   
    }
  
     
     


