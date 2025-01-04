#include<iostream>
using namespace std;
// Base Class
class Base {
public:
    void display(){
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
    Derived obj;
    Base *ptr = &obj ;

    ptr->display(); // calls Derived class's display() function

    return 0;
}