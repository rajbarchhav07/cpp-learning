#include <iostream>
using namespace std;

int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    return reverse((n / 10), (rev * 10) + (n % 10));
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int original = n;
    int rev = reverse(n, 0);
    cout << " The reversed number is " << rev << endl ;
    if (original == rev)
    {
        cout << " The number is palindrome " << endl;
    }
    else
    {
        cout << " The number is not palindrome " << endl;
    }
    return 0;
}