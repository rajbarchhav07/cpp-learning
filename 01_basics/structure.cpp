#include<iostream>
using namespace std ;
struct employee {
  int Eid ;
  int salary ;
  char favchar ;
};
  
int main () {
    //**********Structure in C++**********
    // Structure is a user defined datatype.
    // It is used to store different types of data under one name .
    // syntax : 
    // struct  struct_name {
       // Here differnt data of different datatype will be declared and initialzed 
    // };

      employee raj ;// here it means that the employee is a datatype and raj is a variable or object 
      // ( . ) is a dot operator ( memeber access operator)
     raj.Eid = 1234 ;   // It means access the Eid of raj .
     raj.salary = 120000 ;
     raj.favchar = 'R' ;
     cout << " The employee id  of raj is : " << raj.Eid << endl;
     cout << " The salary of raj is : " << raj.salary << endl ;
     cout << " The favourite charactor of raj is : " << raj.favchar << endl ;
     return 0 ;
}
// #include <iostream>
// using namespace std ;
//  struct Student {
//   int age ;
//   string name ; 
//   char grade ;
//   float percentage ;
//  };
// int main () {
//    Student s1 ;
//    s1.age = 19 ;
//    s1.name = "Raj" ;
//    s1.grade = 'A';
//    s1.percentage  = 99.3 ;
//    cout << " My age is : " << s1.age << endl; 
//    cout << " MY name is :  " << s1.name << endl;
//    cout << " Grade = " << s1.grade << endl ;
//    cout << " Percentage = " << s1.percentage << endl ;
//    return 0 ; 
//  }
  

