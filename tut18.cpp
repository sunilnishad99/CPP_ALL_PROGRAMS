#include<iostream>
using namespace std;

int factorial(int n){
    //base condition
    if(n<=1){
       return 1;
        }
    return n * factorial(n-1);
    
}
int fib(int n){
    // base condition
    if (n<2){
        return 1;
    }
    return fib(n-2) + fib (n-1);

}
int main()
{
    int a;
    cout << " enter the value of a = " << endl;
    cin >> a;
   // cout << " the factorial of a is = " << factorial(a) << endl;
    cout << " the fibonacci  of a is = " << fib(a) << endl;
return 0;
}