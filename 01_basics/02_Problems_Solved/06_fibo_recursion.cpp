#include<iostream>
using namespace std ;

// Printing Fibonacci series using recursion
void  printfibonacci (int count , int a , int b ) {
    if (count == 0 ){
        return ;
    }
    cout << a << " " ;
    return printfibonacci(count - 1 , b , a + b);
}

/*
   For example count = 5
   First phase ---> printfibonacci( 5, 1, 1,)
   1 
   printfibonacci(4,1,2)
   1 1
   printfibonacci(3,2,3)
   1 1 2 
   printfibonacci(2,3,5)
   1 1 2 3 
   printfibonacci(1,5,8)
   1 1 2 3 5
   printfibonacci(0,8,13)
   count == 0 means return , so funtion execution finishes .
*/
int main () {
    int count ;
    cout << " Enter the number till you want to print the fibonacci series : " ;
    cin >> count ;
    cout << " Following is the fibonacci series : " ;
     printfibonacci(count,1,1);
     return 0 ;

}

