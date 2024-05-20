#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream Suliout("sample60.txt");
    string name;
    cout << "Enter your name :"<< endl;
    cin >> name;
    Suliout <<" my name is :"<< name;
    Suliout.close();

    ifstream Sin("sample60.txt");
    string content;
    Sin >> content;
    getline(Sin,content);
    cout << " The content of this file is :"<< content << endl;
    Sin.close();

return 0;
}