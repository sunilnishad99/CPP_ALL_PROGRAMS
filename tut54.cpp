#include<iostream>
using namespace std;
class Animal{
    public:
    void Animal_sound(){
        cout << " The sound of the animal is :"<< endl;
    }
};
class Pig : public Animal{
    public:
     void Animal_sound(){
        cout << " The sound of the pig is : -- moye moye"<< endl;
    }
};
class Dog : public Animal{
    public:
     void Animal_sound(){
        cout << " The sound of the dog is : ..bow wow"<< endl;
    }
};
int main()
{
    Animal myAnimal;
    Pig p;
    Dog d;

    myAnimal.Animal_sound();
    p.Animal_sound();
    d.Animal_sound();
return 0;
}