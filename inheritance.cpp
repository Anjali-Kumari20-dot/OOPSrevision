#include<iostream>
using namespace std;
//Single inheritance
class Base{
public:
    void displayBase(){
        cout<<"Base class Display"<<endl;
    }
};
class DerivedSingle : public Base{
public:
    void show(){
        cout<<"Derived class show"<<endl;
    }
};

//Multiple inheritance 
class Base1{
public:
    void display1(){
        cout<<"Base1 display"<<endl;
    }
};
class Base2{
public:
    void display2(){
        cout<<"Base2 display"<<endl;
    }
};
class DerivedMultiple : public Base1, public Base2{
public:
    void show(){
        cout<<"Derived Class show"<<endl;
    }
};
 
// Multi-Level Inheritance
class Derived1 : public Base{
public: 
    void displayDerived1(){
        cout<<"Derived class Display"<<endl;
    }
};
class DerivedMultiLevel : public Derived1{
public: 
    void displayMultiLevel1(){
        cout<<"Derived Multi Level class Display"<<endl;
    }
};

// hierarchical inheritance
class Derived2 : public Base{
public:
    void displayDerived2(){
        cout<<"Derived2 class Display"<<endl;
    }
};

// Hybrid inheritance
class DerivedHybrid : public Base1, public Base2{
public:
    void show(){
        cout<<"Derived class Show"<<endl;
    }
} ;
int main(){
    DerivedSingle objSingle;
    objSingle.displayBase();
    objSingle.show();

    // DerivedMultiple objMultiple;
    // objMultiple.display1();
    // objMultiple.display2();
    // objMultiple.show();

    // DerivedMultiLevel objMultiLevel;
    // objMultiLevel.displayBase();
    // objMultiLevel.displayDerived1();
    // objMultiLevel.displayMultiLevel1();

    // Derived2 objDerived2;
    // objDerived2.displayBase();
    // objDerived2.displayDerived2();

    // DerivedHybrid objHybrid;
    // objHybrid.display1();
    // objHybrid.display2();
    // objHybrid.show();
    
    return 0;
}