#include<iostream>
#include<cstring>
using namespace std;
class CW{
    protected:
    char title[30];
    float rating;
    public:
    CW(string s, float r){
        title = s;
        rating = r;
    }
    virtual void Display(){}
};
class Video : public CW{
    int VideoLength;
    public:
    Video(string s,float r, float vid) : CW(s,r){
        VideoLength = vid;
    }
    void Display(){
        cout << " The amezing video with title :"<< title << endl;
        cout << " Rating :"<< rating << endl;
        cout << " Video length is :"<< VideoLength << " Minutes" << endl;
    }
};
class Text : public CW{
    int TextLength;
    public:
    Text(string s,float r, int tex) : CW(s,r){
        TextLength = tex;
    }
    void Display(){
        cout << " The amezing Text with title :"<< title << endl;
        cout << " Rating :"<< rating << endl;
        cout << " Text length is :"<< TextLength << " Minutes" << endl;
    }
};
int main()
{
    string  title ;
    float rating , vidlen;
    int TextLength;

    title = "Django video";
    rating = 4.44;
    vidlen = 34.43;
    Video objVideo(title,rating,vidlen);

    title = "Django video";
    rating = 4.44;
    TextLength = 343;
    Test objText(title,rating,TextLength);
return 0;
}