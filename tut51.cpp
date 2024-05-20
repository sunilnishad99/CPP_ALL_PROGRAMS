#include<iostream>
using namespace std;
class Complex{
    int Real , Imaginary;
    public:
    void setData(int a,int b){
        Real = a;
        Imaginary = b;
    }
    void getData(){
        cout << "THe part of real is :"<< Real << endl;
        cout << "THe part of imaginary is :"<<Imaginary << endl;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
  //  Complex *ptr = new Complex;
   // (*ptr).setData(1,30);
    ptr->setData(22,12);
    ptr->getData();
    cout << endl;
    Complex *ptr1 = new Complex[3];
   // for(int i=0;i<3;i++){
  //      cout<<"Value is :"<<endl;
 //   }
    ptr1->setData(44,33);
    (*ptr1).getData();
return 0;
}