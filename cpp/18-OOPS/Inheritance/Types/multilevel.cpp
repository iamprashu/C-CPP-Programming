#include<iostream>
using namespace std;

class Animal{
public:
    int legs;

    Animal(){

    }
    Animal(int legs){
        this->legs = legs;
    }
};

class Dog : public Animal{
public:
    string color;

    Dog(int eyes,string color):Animal(eyes){
        this->legs = legs;
        this->color = color;
    }
};

class Cat : public Animal{
    public:
    string color;

    Cat(int eyes,string color):Animal(eyes){
        this->legs = legs;
        this->color = color;
    }
};


int main(){
    Animal animal;
    Animal* dog = new Dog(3,"red");

    cout<<dog->legs<<endl;
    cout<<dog->color<<endl;

}