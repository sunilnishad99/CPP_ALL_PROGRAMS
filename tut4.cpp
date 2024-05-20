#include<iostream>
using namespace std;

int global = 5;
void sum(){
    int a ;
    cout << global;
}
int main()
{
    int global =3;
    //global = 44;
    sum();
   cout <<endl<< global;
return 0;
}