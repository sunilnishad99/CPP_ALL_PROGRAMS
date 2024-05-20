#include<iostream>
using namespace std;
class Number{
    int a;
     public:
     Number(){
        a = 0;
     }
     Number(int num){
        a = num;
     }
     Number(Number &obj){ //   COPY CONSTRUCTOR
        a = obj.a;
     }
     void display(){
        cout << " The number for object is this "<< a << endl;
     }
};
int main()
{
    Number x , y , z(32), z1(z);
    x.display();
    y.display();
    z.display();
    z1.display();
    Number z2 = z;
    Number z3 = z2;
    z3.display();
return 0;
}