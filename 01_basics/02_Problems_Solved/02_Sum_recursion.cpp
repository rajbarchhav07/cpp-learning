#include<iostream>
using namespace std ;
// Sum of first n natural numbers 
int Sum(int n){
    // base case
    if ( n == 0 ){
        return 0 ;
    }
     return n + Sum(n-1);
    /*
      5 + Sum(4)
      5 + 4 + Sum(3)
      5 + 4 + 3 + Sum(2)
      5 + 4 + 3 + 2 + Sum(1)
      5 + 4 + 3 + 2 + 1 + Sum(0)
      5 + 4 + 3 + 2 + 1 + 0 
    */
}
int factorial ( int r ){
    // 5! = 5 X 4 X 3 X 2 X 1
    // 5! = 5 X 4!
    // factorial(n) = n*factorial(n-1)
    // for base case :
    // 0! = 1  and 1! = 1 
    //**********Base Case********
    if ( r == 0 || r == 1 ){
        return 1 ;
    }
    return r*factorial(r-1);
    /*
     5 * factorial(4)
     5 * 4 * factorial(3)
     5 * 4 * 3 * factorial(2)
     5 * 4 * 3 * 2 * factorial(1)
     5 * 4 * 3 * 2 * 1 
    */
  }
  int Sumofdigits( int n ){
    if ( n == 0 ){
        return 0 ;
    }
   
    return (n%10) + Sumofdigits(n/10);
    /*
     Suppose input = 1234
    4 + Sumofdigits(123)
    4 + 3 + Sumofdigits(12)
    4 + 3 + 2 + Sumofdigits(1)
    4 + 3 + 2 + 1 + Sumofdigits(0)
    4 + 3 + 2 + 1 + 0 
    */
  }
  // Counting the no of digits 
  int countdigits( int n ){
    if (n == 0){
        return 0 ;
    }
    return 1 + countdigits(n/10);
    /*
    Suppose input 1234
    1 + countdigits(123)
    1 + 1 + countdigits(12)
    1 + 1 + 1 + countdigits(1)
    1 + 1 + 1 + 1 + countdigits(0)
    1 + 1 + 1 + 1 + 0
    */
  }
int main (){
    int n , r ;
    cout << " Enter the number of element of sum you want : " ;
    cin >> n ;
    cout << "The sum of first " << n << " natural numbers is : " << Sum(n) << endl ;
    cout << " Enter the element of factorial you want : " ;
    cin >> r ;
    cout << " The factorial of " << r << " is " << factorial(r) << endl;
    cout << " Enter the number and get the sum of digits of the number : " ;
    cin >> n ;
    cout << " The sum of digits of number is : " << Sumofdigits(n) << endl;
    cout << " Enter the element : " ;
    cin >> n ;
    cout << " Number of digits in a element : " << countdigits(n) ;
    
    return 0 ;
    
    }
    