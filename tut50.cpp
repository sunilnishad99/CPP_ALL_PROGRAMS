#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int* ptr = &a;
    cout << ptr << endl;
    cout << endl;
    int *p = new int(40);
    float *p1 = new float(8.33);
    cout << *p << endl;
    cout << *p1 << endl;
    cout << endl;
    int *arr = new int[3];
    arr[0]=2;
    arr[1]=3;
    arr[2]=4;
    arr[3]=5;
    for(int i=0;i<=3;i++){
        cout << " the value of arr[0,1,2,3] is :"<< arr[0] << endl;
    }
return 0;
}