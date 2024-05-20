#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setData(int a, int b){
        id = a;
        price = b;
    }
    void getData(){
        cout << " Id of item is    :"<< id << endl;
        cout << " price of item is :"<< price << endl;
    }
};
int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++){
        cout << "Enter Id and price if item "<< i+1 << endl;
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }
    for(int i = 0; i < size; i++){
        cout << " item is :"<< i+1 << endl;
        ptrtemp->getData();
        ptrtemp++;
    }
return 0;
}