#include<iostream>
using namespace std;
class Base {
    public:
        void displayBase(){
            cout<<"Base class Display."<<endl;
        }
};
class Derived : public Base {
    public:
        void displayDerived(){
            cout<<"Derived class Display."<<endl;
        }
};
int main(){
    Derived d;
    d.displayDerived();
    return 0;
}