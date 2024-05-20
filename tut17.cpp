#include<iostream>
using namespace std;

 inline int product(int a , int b){
    return a*b;
}

float moneyrecived(int current , float factor = 1.04){
    return current*factor;
}

int strlen (const char *p){
    
}
int main()
{ 
    int money = 100000;
    cout << "if you have money" << money  << " rs in your bank account , you will recive" << moneyrecived
    (money)<< "rs after 1 year" << endl;


   // int a = 3,b = 5;
   // cout << " enter the value of a and b is = " << endl;
    //cin >> a >> b
   // cout << " the value of a and b is = " << product(a,b) << endl;
   // cout << " the value of a and b is = " << product(a,b) << endl;
   // cout << " the value of a and b is = " << product(a,b) << endl;
   // cout << " the value of a and b is = " << product(a,b) << endl;
   // cout << " the value of a and b is = " << product(a,b) << endl;
   // cout << " the value of a and b is = " << product(a,b) << endl;
return 0;
}