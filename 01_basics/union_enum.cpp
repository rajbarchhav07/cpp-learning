#include <iostream>
using namespace std;

union Data
{
  int i;
  float f;
  char c;
};
// enumeration 
enum day {
     monday ,
     tuesday , 
     wednesday ,
     thursday ,
     friday ,
     saturday 
};

int main()
{
  Data d1;
  d1.i = 12;
  cout << " i = " << d1.i << endl;
  d1.f = 34.5;
  cout << " f = " << d1.f << endl;
  d1.c = 'R';
  cout << " c = " << d1.c << endl;
  cout << " The bits of the float will be interpreted as an integer " << d1.i << endl;
  // Explaination
  // Computer stored everything in bits  (0 or 1).
  // the integer 12 has a bit pattern and the float 34.5 has different bit pattern
  // when we have write d1.f = 34.5 then the bits pattern of int has been replaced with float bit pattern
  // Now  when you do d1.i at last , the compiler treats the float bit as if they were an integer
  //  since those bits were never meant to represent integer , we got strange number i.e  1107951698
  // This number is not a random number . It's just a float bit pattern looks like when it is interpreted as an integer .
  day today = wednesday ;
  cout << today << endl;
  cout << monday << endl;
  return 0;
}