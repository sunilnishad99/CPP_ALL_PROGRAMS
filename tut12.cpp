#include<iostream>
using namespace std;
int main()
{
    int a = 9;
    int* a1 = &a;
    //address of operator
    cout << a1 << endl << &a << endl ;
    // dereference operator
    cout << *a1 << endl << a << endl ;

    int** a2 = &a1;
    // address of  operator
    cout << "address of a2= " << a2 << endl << "address of a1= " << &a1 << endl;
    // value of  dereference operator
    cout << "value of a2= " << **a2 << endl  << "value of a1= " << *a1 << endl;

    
return 0;
}