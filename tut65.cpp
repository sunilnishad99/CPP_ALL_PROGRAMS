#include<iostream>
using namespace std;
template<class T1,class T2>
class myVector{
    public:
    T1 data1;
    T2 data2;
    myVector(T1 x, T2 y){
        data1 = x;
        data2 = y;
    }
    void Display(){
        cout << this->data1 << this->data2 << endl;
    }
};
int main()
{
    myVector <int,char> obj(1,'a');
    obj.Display();
return 0;
}