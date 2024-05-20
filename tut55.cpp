#include<iostream>
using namespace std;
class Base{
    public:
    int var_Base;
    void Display(){
        cout << " Displaying base class variable var_base :"<< var_Base << endl;
    }
};
class Derived : public Base{
    public:
    int var_D;
    void Display(){
        cout << " Displaying base class variable var_D :"<< var_D << endl;
    }
};
int main()
{
    Base *Base_pointer;
    Base obj_base;
    Derived obj_d;
    Base_pointer = &obj_d;
    Base_pointer->var_Base = 33;
    Base_pointer->Display();

    Derived *d_pointer;
    Derived dr;
    d_pointer = &dr;
    d_pointer->var_D = 450;
    d_pointer->Display();
return 0;
}