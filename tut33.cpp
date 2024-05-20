#include<iostream>
using namespace std;
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){};
    BankDeposit(int p, int y, float r); // r can be a value like in float(2.03)
    BankDeposit(int p, int y, int   r); // r can be a value like in integer(12)
    void show();
}; 
BankDeposit :: BankDeposit(int p, int y, float r){
    principal    = p;
    years        = y;
    interestRate = r;
    returnValue  = principal;

    for(int i = 0; i < y; i++){
        returnValue = returnValue *(1+interestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r){
    principal    = p;
    years        = y;
    interestRate = float(r)/100;
    returnValue  = principal;

    for(int i = 0; i < y; i++){
        returnValue = returnValue *(1+interestRate);
    }
}
 void BankDeposit :: show(){
    cout << endl << "principal amount was" << principal
    << endl << "return value after years " << years << "is" <<
    returnValue << endl; 

}
int main()
{
    BankDeposit Bd1, Bd2, Bd3;
    int p,y;
    float r;
    int   R;

    cout << " Enter the value of p , y and r "<< endl;

    cin >> p >> y >> r;

    Bd1 = BankDeposit(p , y ,r);
    Bd1.show();

     cout << " Enter the value of p, y and R "<< endl; 

    cin >> p >> y >> R;

    Bd1 = BankDeposit(p , y ,R);
    Bd1.show();
return 0;
}