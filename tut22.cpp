#include<iostream>
using namespace std;

class binary{
    // by default the member of class is private.
    string s;
    public:
    void read(void);
    void check_bin(void);
    void once(void);
    void display(void);
};
void binary :: read(void){
    cout << " enter a binary number = "<< endl;
    cin >> s;
}
void  binary :: check_bin(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout << " inccorect data" << endl;
            exit(0);
        }
    }
}
void binary :: once(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
         else{
            s.at(i) = '0';
        }
    }
}
void binary :: display (void){
    for(int i = 0; i < s.length(); i++){

        cout <<s.at(i);
    }
    cout << endl;
}
int main()
{
   binary b;
   b.read();
   b.check_bin(); 
   b.display();
   b.once();
   b.display();

  // cout << " check if num is binary " << endl;
return 0;
}