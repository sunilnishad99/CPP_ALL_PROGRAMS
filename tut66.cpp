#include<iostream>
using namespace std;
template<class T1 = int,class T2 = float>
class vector{
    public:
    T1 a;
    T2 b;
    vector(T1 x, T2 y){
        a = x;
        b = y;
    }
    void Display(){
        cout << this->a << endl << this->b << endl;
    }

};
int main()
{
    //DEFAULT TEMPLATE
    vector<> obj('a',1.09);
    obj.Display();
return 0;
}