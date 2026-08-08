#include<iostream>
using namespace std ;
// Print number from 1 to n and n to 1
// Printing from 1 to 5 
 void print( int n ){
    if (n == 0){
        return ;
    }
    print(n-1);
    cout << n << endl ;
 }
 //Printing from 5 to 1
 void reversePrint( int n ){
    if (n == 0){
        return ;
    }
    cout << n << endl ;
    reversePrint(n-1);
 }
 int main (){
    cout << "Printing  numbers from 1 to 5 " << endl;
    print(5);
    cout << "Printing numbers from 5 to 1 " << endl;
    reversePrint(5);
    return 0 ;
 }