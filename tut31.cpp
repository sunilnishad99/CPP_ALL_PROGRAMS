#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //constructor overloading
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void PrintData(){
        cout << " your complex data is " << a << "+" << b <<"i" << endl;
    }
};
int main()
{
    complex c1(8,8),c2(5);
    c1.PrintData();
    c2.PrintData();
return 0;
}