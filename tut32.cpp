#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;

    public:
    simple(int a,int b = 9){
        data1 = a;
        data2 = b;
    }
    void PrintData();

    /*void PrintData(){
        cout << " your complex data is " << data1 << "+" << data2 <<"i" << endl;
    }*/
};
void simple :: PrintData(){
    cout << " your complex data is " << data1 << "+" << data2 <<"i" << endl;
    }
int main()
{
    simple c(6);
    c.PrintData();
return 0;
}