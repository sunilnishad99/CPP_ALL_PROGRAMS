#include<iostream>
using namespace std;

 typedef struct employee{
    int eid;
    char favchar;
    float salary;
} ep ;
 union money{
    int rice;
    char car;
    float pound;
} ;
enum week { sunday , monday, tuesday, wednsday , thursday , friday , saturday};




int main()
{
    enum week obj;
    cout << " value of  --" << sunday  << endl;
    cout << " value of  --" << monday  << endl;
    cout << " value of  --" << tuesday << endl;
    cout << " value of  --" << thursday<< endl;
    cout << " value of  --" << friday  << endl;
    cout << " value of  --" << saturday<< endl;

    cout << endl;

    union money m1;
    m1.rice = 23;
    // union me ek time m ek hi value ko use kr sakte hai
   // m1.car  = 'c';
   // m1.pound= 12;
    cout << m1.rice << endl;

    cout << endl;

    ep harray;
    harray.eid = 1;
    harray.favchar = 'g';
    harray.salary = 2100000;
    cout << " the value is =" << harray.eid     << endl; 
    cout << " the value is =" << harray.favchar << endl; 
    cout << " the value is =" << harray.salary  << endl; 
return 0;
}