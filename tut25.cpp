#include<iostream>
using namespace std;
  /*class employee{
      int id;
      int salary;
      public:
      void setId(void){
        salary = 15000;
        cout << " enter your id    ";
        cin >> id;
      }
      void getId(void){
        cout << " your id is       "<< id << endl;
        id ++;
      }
};
int main()
{
    employee whatsup[4];
    for(int i = 0;i < 4; i++){
        whatsup[i].setId();
        whatsup[i].getId();
    }
return 0;
}   */

class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
         a = v1;
         b = v2;
    }
    void setDataBySum(complex o1 , complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void PrintData(){
        cout << " your complex data is " << a << "+" << b <<"i" << endl;
    }

};
    int main(){
        complex c1 , c2, c3;
        c1.setData(1,2);
        c1.PrintData();
        c2.setData(3,4);
        c2.PrintData();

        c3.setDataBySum(c1,c2);
        c3.PrintData();
    }
                       