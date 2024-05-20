#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    
      int a,b;
    public:
    void getData(){
        cout << " Enter the value of a and b"<< endl;
        cin >> a >> b;
    }
    void Print_data(){
        cout << "The value of (a+b) is :"<< a+b << endl;
        cout << "The value of (a-b) is :"<< a-b << endl;
        cout << "The value of (a*b) is :"<< a*b << endl;
        cout << "The value of (a/b) is :"<< a/b << endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    void setData(){
        cout << endl;
         cout << "Enter the value of a and b"<< endl;
        cin >> a >> b;
    }
    void Print_data2(){
        cout << " The value of sin(a) is :"<< sin(a) << endl;
        cout << " The value of cos(a) is :"<< cos(a) << endl;
        cout << " The value of exp(a) is :"<< exp(a) << endl;
        cout << " The value of tan(a) is :"<< tan(a) << endl;
    }
};
class Result : public SimpleCalculator , public ScientificCalculator
{

};
int main()
{
   /* SimpleCalculator cal;
    ScientificCalculator cal1;
    cal.getData();
    cal.Print_data();
    cal1.setData();
    cal1.Print_data2();
    */

    Result clac;
    clac.setData();
    clac.Print_data2();
    clac.getData();
    clac.Print_data();
return 0;
}