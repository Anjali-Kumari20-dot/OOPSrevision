#include<iostream>
using namespace std;
class Base {
    public:
        void show_Base(){
            cout<<"Display base"<<endl;
        }
};
class Derived1 : public Base{
    public:
        void show_Derived1(){
            cout<<"Display Derived 1"<<endl;
        }
};
class Derived2 : public Base {
    public:
        void show_Derived2(){
            cout<<"Display Derived 2."<<endl;
        }
};
int main() {
    Derived1 d1;
    d1.show_Base();
    d1.show_Derived1();

    Derived2 d2;
    d2.show_Base();
    d2.show_Derived2();
    
    return 0;
}