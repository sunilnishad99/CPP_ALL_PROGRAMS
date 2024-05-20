#include<iostream>
using namespace std;
class c2;
 class c1{
    int val1;
    public:
    void indata(int a){
        val1 = a;
    }
    void display(void){
        cout << val1 << endl;
    }
    friend void exchange(c1 &,c2 &);
 };

class c2{
    int val2;
    public:
    void indata(int a){
        val2 = a;
    }
    void display(void){
        cout << val2 << endl;
    }
    friend void exchange(c1 &, c2 &);
 };
 void exchange(c1 & x, c2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
 }
int main(){
    c1 a1;
    c2 b1;
    a1.indata(4);
    b1.indata(7);
    exchange(a1,b1);   
    cout << " c1 " ;
     a1.display();
    cout << " c2 ";
     b1.display();
    return 0;
}
 /*class y;
class x{
    int data;
    public:
    void setValue(int value){
        data = value;
    }
    friend void add(x,y);
};
class y{
    int num;
    public:
    void setValue(int value){
        num = value;
    }
    friend void add (x,y);
};

void add(x o1 , y o2){
    cout << "sum data x and y is = " << o1.data + o2.num << endl;
}
int main()
{
    x  a;
    y  b;
    a.setValue(3);
    b.setValue(4);
    add(a,b);

return 0;
}*/