#include <iostream>
using namespace std;

// Fibonacci Series---------> 1 1 2 3 5 8 13 21 34 ------n
// Here the below funciton calculates the nth fibonacci term
// Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
int Fibonacci(int n)
{
    // Base case
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
    /*
    fibonacci(4) = fibonacci(3) + fibonacci(2)
   fibonacci(3) = fibonacci(2) + fibonacci(1)
   fibonacci(2) = fibonacci(1) + fibonacci(0)
   fibonacci(2) = 1 + 1 = 2
   and fibonacci(1) = 1 , so  fibonacci(3) = 1 + 1 + 1 = 3
   fibonacci(2) = fibonacci(1) + fibonacci(0)
   fibonacci(2) = 1 + 1 = 2
   so fibonacci(4) = 3 + 2 = 5

    */
}
int main()
{
    int a;
    // cout << " Enter the position for which the element you want : ";
    cout << " Enter the position upto which you want the fibonacci series : " ;
    cin >> a;
    // cout << " The element at position " << a << " is  " << Fibonacci(a) << endl;
    cout << " Fibonacci series upto " << a << "th position is : " ;
    for ( int i = 1 ; i <= a ; i++){
       cout << Fibonacci(i) << " " ;
    }
    return 0;
}