#include<iostream>
using namespace std ;
// Below the function will not swap the value of x and y because the copies of x 
// and y are swap not the actual value is swapped in the main() function .
// void swap (int a , int b ) {
//     int temp = a ;
//     a = b ;
//     b = temp ;
// }

// Call by reference using pointers
// void SwapPointer(int* a , int* b){
//     int temp = *a ;
//     *a = *b ;
//     *b = temp ;
// }
// Call by reference using C++ reference variables
void SwapReferenceVar( int &a , int &b ){
    int temp = a ;
    a = b ;
    b = temp ;
}

int main (){
    // temp a b 
    // 4    4 5
    // 4    5 5
    // 4    5 4
    int x = 4 , y = 5 ;
    cout << " The value of x before swapping is " << x << endl << " The value of y before swapping is " << y << endl ;
    // swap(x , y); // This will not swap
    // SwapPointer(&x , &y); This will swap the values of a and b using pointers
    SwapReferenceVar(x , y);
    cout << " The value of x after swapping is " << x <<endl << "  The value of y after swapping is " << y << endl ;
    return 0 ;
    

}