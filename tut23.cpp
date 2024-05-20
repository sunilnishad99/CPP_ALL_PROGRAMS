#include<iostream>
using namespace std;
class Shop{
    int itemId[50];
    int itemPrice[50];
    int counter;

    public:
    void inCounter(void) {counter = 0;}
    void setPrice(void);
    void display_Price(void);
};
void Shop :: setPrice(void){
    cout << " enter item id = "<< counter+1 << endl;
    cin >> itemId[counter];
    cout << " enter item price = " << endl;
    cin >> itemPrice[counter];
    counter ++;
}
 void Shop :: display_Price(void){
    for(int i = 0; i < counter; i++){
        cout << "the price of item id " << itemId[i] << "is" << itemPrice[i] << endl;
    }
}
int main()
{
       Shop dukan;
       dukan.inCounter();
       dukan.setPrice();
       dukan.setPrice();
       dukan.setPrice();
       dukan.display_Price();
return 0;
}