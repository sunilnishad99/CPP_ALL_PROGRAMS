#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << " enter your age=" << endl;
    cin >> age;

    // selection control structure 
  /*  if(age<18){
        cout << "you are not eligiable for the party"<< endl;
    }
        else if (age==18){
            cout << " you are eligiable to the party"<< endl;
        }
        else{
            cout << " your welcome ";
        } */
    
    // selection control structure using switch case
    switch(age){
        case 18:
          cout << " you in 18" << endl;
          break;
        case 20:
          cout << " you 20" << endl;
          break;
        default:
          cout << " invalid" << endl;

    }
return 0;
}