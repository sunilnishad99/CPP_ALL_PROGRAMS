#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b){
        return(a + b);
    }
    int sumRealComplex(complex , complex);
    int sumSComplex(complex , complex);
};
class complex{
    int a , b;
    friend int calculator :: sumRealComplex(complex o1,complex o2);
     friend int calculator :: sumSComplex(complex o1,complex o2);
    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout << " the number is " << a << "+ " << b << "i" << endl;
    }
};

 int calculator :: sumRealComplex(complex o1, complex o2){
        return (o1.a + o2.a);
    }
    int calculator :: sumSComplex(complex o1, complex o2){
        return (o1.b + o2.b);
    }
int main()
{
    complex o1, o2;
    o1.setNumber(1,2);
    o2.setNumber(3,4);
    calculator calc;
    int result = calc.sumRealComplex(o1,o2);
    cout << "real o1 and o2 is " << result << endl;
    int result2 = calc.sumSComplex(o1,o2);
    cout << "real o1 and o2 is " << result2 << endl;
return 0;
}