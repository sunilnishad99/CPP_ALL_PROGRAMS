#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  /* int  a = 25;
    cout << " the value of a was = "<<a<< endl;;
    a = 35;
    cout << " the value of a is = "<<a;*/

   /* const int a = 3; // const means no change the value of a
    cout << " the vaue of a is = "<< a ;
    */
                  //using headerfile iomanip manipulators
  /** int a = 12 , b = 123 , c = 1234;

    cout << "the value of a = " << a << endl;
    cout << "the value of b = " << b << endl;
    cout << "the value of c = " << c << endl;
    cout << endl;
    cout << " the value of a = " << setw(4) << a << endl;
    cout << " the value of b = " << setw(4) << b << endl;
    cout << " the value of c = " << setw(4) << c << endl;*/

    //operator precedance

    int a = 3 , b = 4;
    int c = (a*5) + b;
    int c1 = (((a*5) + b) - 45) + 35;
    cout << "c----=>" << c << endl;
    cout << "c1---=>" << c1 << endl;

return 0;
}