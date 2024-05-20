#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=4;i++){
        
        if(i==3){
            continue;
        }
        cout<<i << endl;
    }

 /*  for(i = 0; i < 4; i++){
        cout << i << endl;
        if(i==2){
            break;
        }
    }*/

return 0;
}