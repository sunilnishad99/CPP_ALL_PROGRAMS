#include<iostream>
using namespace std;
template<class T>
class vector{
    public:
    T data;
    vector(T a){
        data = a;
    }
    void Print(){
        cout << " the data of the value is a :"<< data << endl;
    }
    void Print1();
};
template <class T>
void vector<T> :: Print1(){
    cout << " the value od data is : "<< data << endl;
}

void func(int a){
    cout << " i am function :"<< a << endl;
}
template <class T>
void func1(T a){
    cout << " i am template function :"<< a << endl;
}
int main()
{
    vector <int> a1(3);
    vector <char> a2('c');
    a1.Print();
    a2.Print1();

    cout << endl;

    func(4);
    func1(5);
return 0;
}