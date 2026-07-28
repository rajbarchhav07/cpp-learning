#include<iostream>
using namespace std; 
int main(){
    // Array is a collection of elements of same datatype which are stored in contigoues memeory 
    // location .
    
    int arr[4] = { 23 , 45 , 56 , 78} ;
    int marks[4];
    marks[0] = 21 ;
    marks[1] = 46 ;
    marks[2] = 78 ;
    marks[3] = 88 ;
    cout << " The maths marks are as follows : " << endl ;
    cout << marks[0] << endl ;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    // changing the value of an array 
    arr[2] = 50 ; 
    cout << " Science marks are as follows :" << endl ;
    //    cout << arr[0] << endl;
    //    cout << arr[1] << endl;
    //    cout << arr[2] << endl;
    //    cout << arr[3] << endl;
    // Now printing the element of an array using for loop , while , do-while loop
      for ( int i = 0 ; i < 4 ; i++) {
        cout << arr[i] << endl ;
      }
      int j = 0 ; 
      cout << " The elements  of an array printed using while loop :" ;
      while ( j < 4 ) {
        cout <<  arr[j] << endl ;
        j++ ;
      }
      int k = 0 ;
      cout << " The elements  of an array printed using do-while loop :" ;
      do
      {
        cout << arr[k] <<  endl ;
        k++;
      } while (k < 4);
      // ***************************pointers and array******************************* 
        int* p = marks ; // here one pointer variable is storing the addrress of marks 
        cout << " The address is : "<< p << endl ; 
        cout <<  " The value of *p is : " << *p << endl ; // Now the pointer will point to the first element of an array 
        cout << " The value of *(p + 1) is : " << *(p + 1) << endl ; // Now the pointer will point to the second element of an array
        cout << " The value of *(p + 2) is : " << *(p + 2) << endl ;// Here the pointer will point to the third element of an array 
        cout << " The value of *(p + 3) is : " << *(p + 3) << endl ; // Here the pointer will point to the fourth element of an array
        // Here we have learn that , how to get access the element of an array using pointer and in order to find the address
        // of array we need to write just the name of an array .
        // formula : New address = current address + i * ( size of datatype)
        cout << " The address of marks[1] is " << (p + 1) << endl ; 
        cout << " The address of marks[2] is " << (p + 2) << endl ; 
        cout << " The address of marks[3] is " << (p + 3) << endl ; 
        cout << " The address is : " << &(*p) << endl ; // using address of operator 

       
        return 0 ;
    
    }


    