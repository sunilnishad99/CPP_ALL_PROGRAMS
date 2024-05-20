#include<iostream>
using namespace std;

int  c  = 23;
int main()
{
    /***********built in data type************/

   /* int a , b , c;
    cout << " Enter the value of a and b"<< endl;
    cin >> a >> b ;
    c = a + b;
   /* c = a - b;
    c1 = a * b;
    c2 = a / b;
    c3 = a % b;
    cout << "the value of a and b =  " << c << endl;
    cout << " the global value of c" << ::c << endl; */
  
  /*****************float , double and long double literals*******8**/
   /* float d = 34.5;
    long double d1 = 34.6;

    cout<< " the sizeof d =  " << sizeof(34.5)  << endl;
    cout << " the sizeof d =  "<< sizeof(34.5f )<< endl;
    cout << " the sizeof d =  "<< sizeof(34.5F) << endl;
    cout << " the sizeof d1 = "<< sizeof(34.6)  << endl;
    cout << " the sizeof d1 = "<< sizeof(34.6l) << endl;
    cout << " the sizeof d1 = "<< sizeof(34.6L) << endl;

    cout << " the value of d = "<< d << endl << "the value of d1 = "<< d1 << endl; */

  /**********reference variable***********/
 //   sunil----> suli----> thor----->
  /* float s = 333;
   float & n = s;

   cout << s << endl;
   cout << n << endl;*/

   //  ************typecasting**********
    int x = 11;
   float x1 = 12.1;

   cout << " the value of x and x1 =>" << float  (x) << endl << "--------x1=>"<< int (x1)<<endl;
   int x2 = int (x1);

   cout << "the expression is " << x + x1 << endl;
   cout << "the expression is " << x + int(x1)<<endl;
   cout << "the espression is " << x + (int)x1 << endl; 
   cout<< endl;
    cout << "the expression is " << x + x1<<endl;
   cout << "the espression is " << x + (float)x1 << endl; 





return 0;
}