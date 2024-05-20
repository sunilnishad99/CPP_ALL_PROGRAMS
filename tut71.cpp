#include<iostream>
#include<vector>
using namespace std;
 template<class T>
void Display(vector<T>  &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        cout << v.at(i)<< " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec;
    vector<char> vec1(4);
    vec1.push_back('5');
    vector<char> vec2(vec1);
    vector<int> vec3(3,6);
    Display(vec3);
    cout << vec3.size();
    int element , size = 5;
    /*for(int i = 0; i < 4; i++){
        cout <<" Enter the element to add this vector :";
        cin >> element;
        vec.push_back(element);
        Display(vec);
        vector<int> :: iterator iter = vec.begin();
        //vec.insert(iter,565);
        Display(vec);
    }*/
return 0;
}