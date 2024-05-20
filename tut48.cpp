#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
     Base1(int i){
        data1 = i;
        cout << " Base1 class costructor called "<< endl;
    }
    void PrintData1(){
        cout << " The value of data1 is "<< data1 << endl;
    }

};
class Base2{
    int data2;
    public:
     Base2(int i){
        data2 = i;
        cout << " Base2 class costructor called "<< endl;
    }
    void PrintData2(){
        cout << " The value of data2 is "<< data2 << endl;
    }

};
class Derived : public Base1, public Base2{
    int Derived1, Derived2;
    public:
    Derived(int a, int b, int c, int d): Base1(a),Base2(b){
        Derived1 = c;
        Derived2 = d;
        cout << "Derived class constructor called "<< endl;
    }
    void PrintData3(){
        cout << "The value of derived1 is :"<< Derived1 << endl;
        cout << "The value of derived2 is :"<< Derived2 << endl;
    }
};
int main()
{
    Derived d(1,2,3,4);
    d.PrintData1();
    d.PrintData2();
    d.PrintData3();
return 0;
}