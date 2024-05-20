#include<iostream>
using namespace std;
// BASE CLASS
class Employee{
    int id;
    public:
    float salary;
    Employee(int idpID){
        id = idpID;
        salary = 500;
    }
};
// DERIVED CLASS NAME 
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/ method/ etc......
}*/
int main()
{
    Employee t1(1),t2(2),t3(3);
    cout << "salary is = "<< t1.salary << endl;
    cout << "salary is = "<< t2.salary << endl;
    cout << "salary is = "<< t3.salary << endl;
return 0;
}