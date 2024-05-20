#include<iostream>
using namespace std;
//CONSTRUCTOR  is a spacial member function with same name as of the class.
// it use to initialize the object of its class.
class complex{
    int a,b;
    public:
    complex(void);
    void PrintData(){
        cout << " your complex data is " << a << "+" << b <<"i" << endl;
    }
};
complex :: complex(void){ //this is default parameter
    a = 0;
    b = 8;
}
int main()
{
    complex c;
    c.PrintData();
return 0;
}