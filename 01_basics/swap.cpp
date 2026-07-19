#include<iostream>
using namespace std; 
int main(){
    int i = 2 , j = 3;
    cout << "Before swapping i = "<< i << ", j = " << j << endl ;
    // swapping logic
          // int temp = i ;
          // i = j ; 
          // j = temp;
    // using inbulit function to swap
    swap(i , j);
    cout << "  After swapping i = " << i << " , j = " << j  ;
    return 0;
}