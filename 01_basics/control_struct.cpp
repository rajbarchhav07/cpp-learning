#include <iostream>
using namespace std;
int main()
{
    // Control structures ----> Control structures is a statement or a block of statements which is used
    // to control the flow(order) in which the instructions are executed in a program .
    // There are three types of control structures :
    // 1. Sequential--->  Statements excute one after another and order of execution is from top to bottom
    // , no decisions , no repitions .
    // 2. Selection(Decision making) ---> Selection control structres means the program chooses one path
    // based on the condition . The selection control structures : if , if-else , else-if , switch , ternay.
    // 3. Looping or iteration --->Repeat the same task again and again until the  condition becomes false .
    // Looping structures : for, while , do-while .
    cout << " This is control structures " << endl;
    // 1. Selection Control structrue : if-else ladder
    // int age;
    // cout << " Enter your age : " << endl;
    // cin >> age;
    int choice ; 
    cout << " Enter your choice : " ;
    cin >> choice ;
    // if (age < 18)
    // {
    //     cout << " You are not eligible for the party ";
    // }
    // else if (age == 18)
    // {
    //     cout << " You are eligible for the party ";
    // }
    // else
    // {
    //     cout << " Most Welcome Sir ";
    // }
    // 2. Selection control structure : switch case
    switch (choice){
        case 1 : 
        {
            cout << " Your age is 18 " ;
            break ;
        }
        case 2 : 
        {
            cout << " Your age is greater than 18 " ;
            break ;
        }
        case 3 : 
        {
            cout << " Your age is below 18 " ;
            break ;
        }
        default :
        {
            cout << " No special choice";
            break ;
        }
    }

    return 0;
     
}