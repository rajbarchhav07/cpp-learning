#include<iostream>
using namespace std ;
// Static variable is a local variable which is inlialize only once and it's value retains 
// throughout the lifetime of the program . Unlike normal variables , it is not destoryed 
// when functions returns .
// Important points :
// 1. It is inlialized only once .
// 2. It keep his value between function call .
// A Static local variable has a local scope but static storage duration .
// Here the local scope means that it can be accessed only in that function .
// Storage duration means how long does it live .
// The variable exists from the moment it is first initialized until the program ends.

void counter(){
//   int count = 0 ; // In this. count wil be destoryed after the function excution and with repeadtly
//   // function call the value of count will not increase because after new function call , a new 
//   // cout variable is created which inlialize with 0 i.e int count = 0 . 
  static int count = 0 ; // This will execute only once . 
  count++ ; // Here the count wil retain's it's value after the next function call .
  cout << count << endl ;
}
//**********default arguments*************
float MoneyRecieved ( int currentMoney , float factor = 1.02 ){   // float factor = 1.02 ; default argument
    return currentMoney * factor ;
}
int add(int a , int b = 4){  // int b = 4 ; default agrument
    return a + b ;
}
int main(){
    counter();
    counter();
    counter();
    int money = 100000 ;
    cout << " If you have  " << money << "Rs in your bank account , then after 1 year the amount will be "
    << MoneyRecieved(money) << endl ;
    cout << " For VIP's , if you have " << money << "Rs in your bank account , then after 1 year the amount wil be "
    << MoneyRecieved(money , 1.1) << endl ;
    cout << " Result = " << add(10)<<endl; // Here i have not pass the value of b, so the default value will be used.
    cout << " Result = " << add(10,20); // here the value of b is passed , so the default value is ignored .
    return 0 ;
    // And one more think using constant , if you try modify the value inside that function then it
    // throw error .
//     void display(const string &name = "Guest")
// {
//     name = "Aman";   //  Error
// }
// You are not allowed to modify the name inside the function .
// Default argument → Decides what value is used if no argument is passed.
// const → Decides whether that parameter can be modified inside the function.
}