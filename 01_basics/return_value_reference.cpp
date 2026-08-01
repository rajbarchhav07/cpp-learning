#include<iostream>
using namespace std ;

int num = 10 ;
// Retrun by value
 int square(int a){

     return a * a;
 }
//  return by reference 
int& ref(){
    return num ;
}
 int main(){
    int result = square(5);
    cout << " result = " << result << endl ;
    int &a = ref();
    a = 50 ;
    cout << " num = " << num << " " << " a = " << a ;
    return 0 ;
 }