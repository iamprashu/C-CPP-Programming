#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    int id;
    string name;
    int age;
    int nos;
    int *gpa;
    //constructor
    Student(Student &obj){
        this->name = obj.name;
        this->age = obj.age;
    }
    Student(){
        cout<<"Student Default Constructor Called"<<endl;
    }

    Student(int id, string name, int age, int nos,int gpa){
        this->name=name;
        this->age=age;
        this->nos=nos;
        this->id = id;
        this->gpa = new int(gpa);

    }
    //Attributes
    void Study(){
        cout<<this->name<<" is Studying"<<endl;
    }
    void Sleep(){
        cout<<this->name<<" is Sleeping"<<endl;
    }

    void Bunk(){
        cout<<this->name<<" is Bunking."<<endl;
    }

    //dtor

    ~Student(){
        cout<<"Default Distructor is called."<<endl;
        delete this->gpa;
    }
};


int main(){
    // Student A;
    // A.name="Prashant";
    // A.id=1;
    // A.age=18;
    // A.nos=6;

    // A.Sleep();

    // Student S(A);

    // cout<<S.age<<endl;

    Student *m = new Student(12,"Prashant Singh",12,90,80);

    cout<<m->age<<endl;
    cout<<*(m->gpa)<<endl;

    delete(m);

    return 0;
}