#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a=7){
        this->a = a;
       // return *this;
    }
    void getData(){
        cout << " THe value of a is :"<< a << endl;
    }
};
int main()
{
    A a;
    a.setData();
    a.getData();
return 0;
}