#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    friend void distance(point o1 ,point o2 );
    public:
    point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout << " the point is (" << x << ","<< y <<")"<< endl;
    }
};
   void distance(point o1 ,point o2){
    float dist , pow;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
cout<<dist<<endl;
}
int main (){
    point p(1,2);
    p.displayPoint();
    point q(4,5);
    q.displayPoint();
    distance(p,q);
    return 0;
}
 /*class complex{
    int a,b;
    public:
    complex(int , int);
    void PrintData(){
        cout << " your complex data is " << a << "+" << b <<"i" << endl;
    }
};
complex :: complex(int x, int y){ //this is  parameterised constructor
    a = x;
    b = y;
}
int main()
{
  //  implicit call
    complex c(4,5);
   // explicit call
   complex b = complex(5,6);

    c.PrintData();
    b.PrintData();
return 0;
}*/
