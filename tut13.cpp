#include<iostream>
using namespace std;
int main()
{

                                  /*POINTERS AND ARRAYS*/
    int marks[] = {32,33,34,35};
    int* p = marks;
   // cout << *(p++);
   // cout << endl;
   // cout << *(++p);
   // cout << endl;
    cout <<  " the value of marks[0] is = " << *p     << endl;
    cout <<  " the value of marks[1] is = " << *(p+1) << endl;
    cout <<  " the value of marks[2] is = " << *(p+2) << endl;
    cout <<  " the value of marks[3] is = " << *(p+3) << endl;



  //  int arr[4] = { 23, 21, 24, 25};
 //   for(int i=0;i<4;i++){
 //       cout << arr[i] << endl;
 //   }

   /** int mathmarkes[4] = {32,43,5,76};
    cout << mathmarkes[0] << endl;
    cout << mathmarkes[1] << endl;
                                    mathmarkes[2] = 323; //i can change the value of 
    cout << mathmarkes[2] << endl;
    cout << mathmarkes[3] << endl;*/


   // int markes [4] = {23,34,45,56};
   /** cout << markes[0] << endl;
    cout << markes[1] << endl;
    cout << markes[2] << endl;
    cout << markes[3] << endl;*/
   
return 0;
}