#include<iostream>
using namespace std;
class Base{
    public:
        virtual void Display(){
            cout<<"Inside Base Class"<<endl;
        }
};
class Derived : public Base{
    public:
        void Display(){
            cout<<"Inside Derived Class"<<endl;
        }
};
int main(){
    Base *ptrBase = new Base();
    Base *ptrDerived = new Derived();

    ptrBase->Display();
    ptrDerived->Display();

    delete ptrBase;
    delete ptrDerived;
    
    return 0;
}