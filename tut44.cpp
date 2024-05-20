#include<iostream>
#include<math.h>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_no(int a){
        roll_no = a;
    }
    void Print_no(){
        cout << " Your roll no is :"<< roll_no << endl;
    }
};

class Test : public virtual Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void Print_marks(void){
        cout << " The marks of maths and physics :"<< endl
        << "Maths "<< maths <<endl
        << "physics "<< physics << endl;
    }
};

class Sport : public virtual Student
{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void Print_score(void){
        cout << " Your PT score is :"<< score << endl;
    }
};

 class Result : public Test , public Sport
{
     private:
     float total;
     public:
     void display_Result(void){
        total = maths + physics + score;
        Print_no();
        Print_marks();
        Print_score();
        cout << "total score is"<< total << endl;
     }
};
int main()
{
    Result Anil;
    Anil.set_no(2460133);
    Anil.set_marks(77.4,78.9);
    Anil.set_score(4);
    Anil.display_Result();
return 0;
}