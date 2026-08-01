#include <iostream>
using namespace std;
// Normal functions , the normal function will perform function overhead
// which takes uneccsarry time and memory . Normal functions are good for large functions
// body because for large functions the function overhead is quite tiny for that.
// int square(int a ) {
//     return a * a ;

// }
// ******************************Inline function******************************
// Inliine function is a function for which the compiler is requested to replace the function call
// with the function's body to avoid function call overhead . The compiler may choose  whether or
// not to perform the optimisation .
inline int square(int a)
{
    return a * a;
}
// But inline function are used for small functions with small body of 2-3 statements.
// Best for small and frequently called functions .

int main()
{
    int result = square(5);
    cout << "Result = " << result << endl;
    
    return 0;
}