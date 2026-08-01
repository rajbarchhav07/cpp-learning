#include <iostream>
using namespace std;
// function ------->function is a block of code which perform a specific tasks.
// Mechanism : function receives a data , performs a task then may return a value .
// A function is a named block of reusable code that performs a specific task.
// It can accept input through parameters, execute statements, and optionally return a value to the caller.
// Functions improve modularity, code reusability, readability, and maintainability.
// Syntax :
// return_type function_name(parameters)
// {
//     // body
// }
// ***********************Why functions are used ?************************
//   functions provides:
//   Code Reusability : write once , use many times .
//   Modularity : Breaks the large progarm into smaller and manageable parts .
//   readbility : Makes code easier to understand.
//   Maintainability : Fix or update the code at one place instead of many .
// A void function doesn't return a value, but it always returns control to the calling function.
// The program transfers control to the function. After the function finishes,
// the control returns to the exact statement after the function call.

// function prototype-->Function prototype is a declaration of function that informs the compiler 
// about the function name , return type and parameter types before the function is called .
int add( int , int); // This is just function declaration , not an actual function
float sub(float , float);
int multi( int , int );

int main()
{
    cout << " Sum = " << add(2, 4) << endl;
    cout << " Subtract = " << sub(4.3, 2.4) << endl;
    cout << " Multiplilcation = " << multi(3, 4) << endl;
    return 0;
}
int add(int a, int b)
{
    int c = a + b;
    return c;
}
float sub(float x, float y)
{
    float z = x - y;
    return z;
}
int multi(int d, int s)
{
    int f = d * s;
    return f;
}
// what is actual parameters and formal parameters ?
//Formal parameters are the variables which are declared in the function definition . They acts as an local 
// variables which receieve values from the function call 
// ex..... void add ( int a , int b ){}
// Here  a and b are formal parameters .
// Actual parameters(Arguments) are the real values , variables , or expression which are passed to the function when 
// it is called . These values are been copied to the formal parameters in pass by value .
// ex... add(10 , 20);
// Here 10 and 20 are the actual parameters 
// Parameter means a placeholder or a variable that is expected to receieve value later .
// Arguments means the actual value that you supply .