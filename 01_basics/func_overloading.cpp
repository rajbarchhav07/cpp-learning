#include <iostream>
using namespace std;

// function overloading
// Function overloading means having multiple functions with same name but different parameters .
// The selection of which function to be called is decided at the compile time , so funciton overloading
// is the example of compile-time polymorphism .
// The multiple funcitons are said to be overload only when
//  1.the functions has same name but different parameters
//  2. the funcions has same name but change in order of parameters
// or else if they have same parameter but the type of parameter should be different .
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
// volume of cylinder
float volume(int r, int h)
{
    return (3.14 * r * r * h);
}
// volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}
// volume of cube
int volume(int a)
{
    return (a * a * a);
}
int main()
{
    cout << " The sum of a and b is " << sum(2, 3) << endl;
    cout << " The sum of a and b and c is " << sum(2, 3, 4) << endl;
    cout << "The volume of cylinder is " << volume(3, 4) << endl;
    cout << " The volume of cuboid is " << volume(4, 5, 6) << endl;
    cout << " The volume of cube is " << volume(5) << endl;
    return 0;
}