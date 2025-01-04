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
    obj.display(); // calls derived class's display() func
    
    //Accessing base class's display() function using scope resolution operator
    obj.Base::display();
    
    return 0;
}