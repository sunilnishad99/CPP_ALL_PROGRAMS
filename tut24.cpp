#include<iostream>
using namespace std;
class employee{
      int id;
      static int count;
      public:
      void setData(void){
        cout << " enter the id = ";
        cin >> id;
        count++;
      }
      void getData(void){
        cout <<"the is id of employee = "<< id << endl << " and  the employee number " << count << endl;
      }
      static void getcount(void){
        cout << " the count value is " << count << endl;
      }
};
int employee :: count;

int main()
{
    employee member , gol , mol;
   // member.id = 9;   id and count is private member function
   // member.count = 4;
   member.setData();
   member.getData();
   employee :: getcount();

   gol.setData();
   gol.getData();
   employee :: getcount();

   mol.setData();
   mol.getData();
   employee :: getcount();
return 0;
}