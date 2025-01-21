#include<iostream>
using namespace std;
// Base Class
class Base {
public:
    virtual void display(){
        cout<<"Inside Base class"<<endl;
    }
};

// Derived Class overriding the display() function of base class
class Derived : public Base {
public:
    void display(){
        cout<<"Inside Derived class"<<endl;
    }
};

int main(){
    Base *basePtr = new Base();
    Base *derivedPtr = new Derived();

    basePtr->display();
    derivedPtr->display();
    return 0;
}