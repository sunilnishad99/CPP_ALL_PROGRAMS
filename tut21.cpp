#include<iostream>
using namespace std;

class sunil {
      private:
        int a , b , c;
      public:
        int d , e;   
        void setData(int a1, int b1, int c1);
        void getData(){
            cout << "the value of a is = " << a << endl;
            cout << "the value of b is = " << b << endl;
            cout << "the value of c is = " << c << endl;
            cout << "the value of d is = " << d << endl;
            cout << "the value of e is = " << e << endl;
        }  
};
void sunil :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    sunil nishad;
    nishad.d = 12;
    nishad.e = 11;
    nishad.setData(2,3,4);
    nishad.getData();
return 0;
}