#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
//  swap call by value
int swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//   swap call by reference variable
int swapRef(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4 , b = 5;
    cout << " the sum of 4 and 5 is = " << sum(a,b) << endl;
   cout << endl;
    cout << "the value of a  and  b is = " << a  <<" "<< b << endl;
   /** swap(a , b);
    cout << "now the value of a  and  b is = " << a  <<" "<< b << endl;
    cout << endl;*/
    swapRef( a , b);
    cout << "using reference variable a  and  b is = " << a  <<" "<< b << endl;

return 0;
}