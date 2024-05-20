#include<iostream>
using namespace std;

class  Base1{
    public:
    void greet(){
        cout << " How are you :"<< endl;
    }
};

class  Base2{
    public:
    void greet(){
        cout << " What are you doing :"<< endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet(){
        Base1 :: greet();
        Base2 :: greet();
    }

};

class B{
    public:
    void say(){
        cout << " HELLOW WORLD" << endl;
    }
};
class D : public B{
    int a;
    /*public:
    void say(){
        cout << " you are so beautiful "<< endl;
    }*/
};
int main()
{
   /**Base1 base1int;
    Base2 base2int;
    base1int.greet();
    base2int.greet();
    Derived d;
    d.greet();*/

    B b;
    b.say();

    D d;
    d.say();
return 0;
}