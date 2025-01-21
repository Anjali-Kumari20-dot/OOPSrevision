#include<iostream>
using namespace std;
class Base1 {
    public:
        void show_Base1(){
            cout<<"Display base 1"<<endl;
        }
};
class Base2 : public Base1{
    public:
        void show_Base2(){
            cout<<"Display base 2"<<endl;
        }
};
class Derived : public Base2 {
    public:
        void show_Derived(){
            cout<<"Display Derived class."<<endl;
        }
};
int main() {
    Base2 b;
    b.show_Base1();
    b.show_Base2();

    Derived d;
    d.show_Base1();
    d.show_Base2();
    d.show_Derived();
    
    return 0;
}