#include<iostream>
using namespace std;
// Base class A
class A{
public:
    void display(){
        cout<<"Inside class A"<<endl;
    }
};
// Derived class B inherits A
class B : public A {};

// Derived class c inherits A
class C : public A {};

// Derived class D inherits both B and C
class D : public B, public C {};

int main(){
    D obj;
    // Ambiguity: D has two instances of class A
    // obj.display(); //this line would cause an ambiguity error
    obj.B::display();
    obj.C::display();
    return 0;
}