#include<iostream>
using namespace std;
int add(int a,int b){
    return a + b;
}
int add (int a,int b, int c){
    return a + b + c;
}
// calculate the valume of a cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}
// calculate the valume of cube
int volume(int a){
    return (a*a*a);
}
//rectengular box
int volume(int l, int b , int h){
    return(l*b*h);
}
int main()
{
    cout <<" the sum of 3 and 5 is = " << add(3,5) << endl;
    cout << " the sum of 3 , 5 and 6 is = " << add(3,5,6) << endl;

    cout << endl;
    cout << " the valume of cylinder 3 and 5 is = "<< volume(3,5) << endl;
    cout << " the valome of cube 3 is = " << volume(3) << endl;
    cout << " the volume of rectengular 3 , 5 and 6 is = "<< volume(3,5,6)<< endl;
return 0;
}