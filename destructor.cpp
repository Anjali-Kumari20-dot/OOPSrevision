#include<iostream>
using namespace std;
class MyClass{
public:
    //constructor
    MyClass(){
        cout<<"Constructor code"<<endl;
    }
    // Destructor
    ~MyClass(){
        cout<<"CleanUp Code"<<endl;
    }
};
int main(){
    {
        MyClass obj;
    }
    MyClass* dynamicObj = new MyClass(); //Dynamically allocated object
    delete dynamicObj;
    return 0;
}