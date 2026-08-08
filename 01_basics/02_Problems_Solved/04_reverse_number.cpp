#include <iostream>
using namespace std;

// Reverse a number ----> Ex. 1234 ----> 4321
// void reverse( int n ){
//   if ( n == 0 ){
//     return  ;
//   }
//   cout << n%10;
//    reverse(n/10);
// }
int reverse(int n, int rev)
{

    if (n == 0)
    {
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);  //  rev is a accumaltor which carries the partial answer through recursive calls .
    // Accumaltor is a variable that carries partial answer through recursive calls .
}
/*
  reverse(123 , 4)
  reverse(12 , 43)
  reverse(1 , 432)
  reverse(0 , 4321)
  Rememeber this : Extract digit → add it to rev → remove digit from n → recurse.
  "Remove one digit from n, update the reversed number, and let the next recursive call continue."
  */
int main()
{
    int n;
    cout << " Enter the number : ";
    cin >> n;
    cout << " Reversed number is : " << reverse(n, 0);
    return 0;
}
