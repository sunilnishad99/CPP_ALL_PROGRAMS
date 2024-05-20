#include<iostream>
using namespace std;
template < typename T>
T myMax(T x, T y){
    return (x > y); 
}
int main()
{
    cout << myMax<int>(4,5)<< endl;
    cout << myMax<double>(3.12,2.09)<< endl;
    cout << myMax<char>('d','g')<< endl;
return 0;
}