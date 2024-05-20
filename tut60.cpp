#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    //  FOR OUT LINE FILE
    string st = "SUNIL BHAI--";
    string st1;
    ofstream out ("sample60.txt");
    out << st;
    cout << endl;
    //  FOR INLINE FILE
    ifstream in("sample60b.txt");
    getline(in , st1);
    cout << st1;
    in >> st1;
    cout << st1;
return 0;
}