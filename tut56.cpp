#include<iostream>
using namespace std;
class Base{
    public:
    int var_Base = 0;
     virtual void Display(){
        cout << " Displaying base class variable var_base :"<< var_Base << endl;
    }
};
class Derived : public Base{
    public:
    int var_D = 1;
    void Display(){
        cout << " 2 Displaying base class variable var_base :"<< var_Base << endl;
        cout << " Displaying base class variable var_D      :"<< var_D << endl;
    }
};
int main()
{
    Base *Base_pointer;
    Base obj_base;
    Derived obj_d;
    Base_pointer = &obj_d;
    Base_pointer->Display();
return 0;
}