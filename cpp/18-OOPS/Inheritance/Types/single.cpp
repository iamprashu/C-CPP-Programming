#include<iostream>
using namespace std;


class Animal{
public:
    string name;

    virtual void voice(){
        cout<<"Animal Has a voice...."<<endl;
    }
    Animal(){
        cout<<"Animal Default Constructor\n";
    }
};
class Dog:public Animal{
public:
    void voice(){
        cout<<"Dog is barking.....\n";
    }
};


int main(){
    Animal* animal = new Dog();
    
    animal->voice();
}