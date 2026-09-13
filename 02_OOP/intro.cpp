#include<iostream>
using namespace std ;
// ***************Object oriented programming**************
// Object oriented programming is a programming approach which is designed using objects
// and classes .
// Class is a user defined datatype that groups data members and members function into
// a single unit .
// Class is the blueprint/template for creating objects .
// Objects are the instance which are created from the class .
// Object is instance of class which is used to access the data members and member functions
// of a class .Z
// class Student {
//    public:
//    string name ;
//    int age ;
//    void study(){
//     cout << " Name = " << name << endl ;
//     cout << " Age = " << age << endl ;
//     cout << name << " is studying " << endl ;
//    }
// };
 class Employee {
   private : 
    int a , b , c ;
   public : 
     int d , e ;
     void setdata(int a1 , int b1 , int c1 ); // declaration of function or prototype of function 
     void getdata () {
        cout << " The value of a is " << a << endl ;
        cout << " The value of b is " << b << endl ;
        cout << " The value of c is " << c << endl ;
        cout << " The value of d is " << d << endl ;
        cout << " The value of e is " << e << endl ;

     }

 };
 void Employee :: setdata( int a1 , int b1 , int c1 ) {
    a = a1 ;
    b = b1 ;
    c = c1 ;
 }

int main(){
    // Student s1 ;
    // s1.name = "Raj";
    // s1.age = 20 ;
    // s1.study();
    Employee raj;
    // raj.a = 4 ; // This will show error because a is private and similary for b and c .
    raj.d = 4 ;
    raj.e = 5 ;
    raj.setdata(1,2,3);
    raj.getdata();
    return 0 ;
}