#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void Student :: set_roll_no(int r){
    roll_number = r;
}

void Student :: get_roll_no(){
    cout << "The roll no is "<< roll_number << endl;
}

class Exam : public Student
{
    protected:
    float mathes;
    float english;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){
    mathes = m1;
    english = m2;
}
void Exam :: get_marks(){
    cout << " The marks is mathes are :"  << mathes  << endl;
    cout << " The markes is english are :"<< english << endl;
}

class Result : public Exam
{
    float Percentage;
    public:
    void display(){
        get_roll_no();
        get_marks();
        cout << "Your percentage is :"<< (mathes+english)/2 <<"%" << endl;
    }
};
int main()
{
    Result S;
    S.set_roll_no(2460133);
    S.set_marks(68.0,81.0);
    S.display();
return 0;
}