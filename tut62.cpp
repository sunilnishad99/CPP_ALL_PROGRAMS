#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample60b.txt");
    out << " This is sunil nishad";
    out.close();

    ifstream in;
    string st;
    in.open("sample60b.txt");
   // in >>  st;
   // cout << "the st file is :"<< st;
   while(in.eof()==0){
    getline(in,st);
    cout << st << endl;
   }
    in.close();
return 0;
}