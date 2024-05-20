 
// there are two types of header file
// 1. SYSTEM header file--it comes with compiler
 #include<iostream>
// 2. USER defined header file---it written by the programmer
 //#include "this.h" 

using namespace std;
int main()
{
    int a = 4, b = 5;
    cout<< "Operator in cpp"<<endl;
    cout << "following type of operator in c++"<< endl;
    //Arithmetic operator
   /* cout << "the vlaue of  a + b : "<< a + b << endl;
    cout << "the vlaue of  a - b : "<< a - b << endl;
    cout << "the vlaue of  a * b : "<< a * b << endl;
    cout << "the vlaue of  a / b : "<< a / b << endl;
    cout << "the vlaue of  a % b : "<< a % b << endl;
    cout << "the value of a++    :" << a++   << endl;
    cout << "the value of a--    :" << a--   << endl;
    cout << "the value of ++a    :" << ++a   << endl;
    cout << "the value of --a    :" << --a   << endl;
    cout << "the value of b++    :" << b++    << endl;
    cout << "the value of ++b    :" << ++b    << endl;
    cout << "the value of b--    :" << b--    << endl;
    cout << "the value of --b    :" << --b    << endl;
    */
     
    //Assignment operator---used to assign value two variable.
   /* int a = 9 , b = 3;
    char c = 'd';*/ 

   // camparison operator
 /* cout << "the value of a == b is " << (a==b) << endl;
  cout << "the value of a != b is " << (a!=b) << endl;
  cout << "the value of a >= b is " << (a>=b) << endl;
  cout << "the value of a <= b is " << (a<=b) << endl;
  cout << "the value of a >  b is " << (a>b)  << endl;
  cout << "the value of a <  b is " << (a<b)  << endl;*/

  //Logical  and operator

  /* cout << "the value of a == b is " << ((a==b) && (a<b))    << endl;
   cout << "the value of a == b is "   << ((a==b) && (a>b))    << endl;
   cout << "the value of a == b is "   << ((a==b) && (a<=b))   << endl;
   cout << "the value of a == b is "   << ((a==b) && (a>=b))   << endl; */

   //logical or operator

/* cout << "the value of a == b is "   << ((a==b) || (a<b))    << endl;
   cout << "the value of a == b is "   << ((a==b) || (a>b))    << endl;
   cout << "the value of a == b is "   << ((a==b) || (a<=b))   << endl;
   cout << "the value of a == b is "   << ((a==b) || (a>=b))   << endl;*/
  
  // logical not operator

  //cout << "the value of (!(a == b)) is " << (!(a==b)) << endl;




return 0;
}