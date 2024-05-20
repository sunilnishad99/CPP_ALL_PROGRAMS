#include<iostream>
using namespace std;
/*float funcAvg(int a, int b){
    float avg = (a+b)/2;
    return avg;
}
float funcAvg2(int a, int b){
    float avg = (a+b)/2;
    return avg;
}*/

template<class T>
void swapp(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}
template<class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}

int main()
{
   /** float f;
    f = funcAvg(3,4);
    cout << " The avg of these no of :"<< f;

    cout << endl;
    float f2;
    f = funcAvg2(3,7);
    cout << " The avg of these no of :"<< f;
    cout << endl;*/

    float f;
    f = funcAvg(7.44,4);
    cout << " The avg of these no of %.4f :"<< f;
    cout << endl;
    int x = 5 , y = 6;
    swapp(x,y);
    cout << x << endl << y;
return 0;
}