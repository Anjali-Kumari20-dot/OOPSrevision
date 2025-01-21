#include<iostream>
using namespace std;
class MyClass{
public:
    static int staticVariable; // declaration of static variable

    static void staticMethod(){
        cout<<"Static Method defination"<<endl;
    }
};

int MyClass::staticVariable = 0 ; //Initialisation of static variable

int main(){
    MyClass::staticVariable = 10; //accessing static variable
    MyClass::staticMethod();      //accessing static method
    cout<<MyClass::staticVariable;
    return 0;
}
