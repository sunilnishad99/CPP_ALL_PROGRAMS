#include<iostream>
using namespace std;

//      FUNCTION PROTOTYPE     //
  //DATATYPE_FUNCTION NAME (ARGUMENTS)   //
  // int sum(int a, int b);
int sum(int a, int b){  // a nand b is a formal parameter will be tacking actual parameter
    int c = a+b;
    return c;
}
int main()
{
    int  num1,num2;
    cout << " enter the value of num1 and num2"<< endl;
    cin >> num1 >> num2;

    // num1 and num2 is a actual parameter 
    cout << sum(num1,num2)<< endl;
return 0;
}