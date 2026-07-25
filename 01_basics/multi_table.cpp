#include<iostream>
using namespace std;
int main(){
    // Printing multiplication table 
    int n , table;
    cout<<"Enter the multiplication table no : " ;
    cin >> n ;
    for (int i = 0 ; i <= 10 ; i++) {
        table = n*i;
      cout << n << " X " << i << " = " << table << endl ; 
    }
    return 0 ;
}