#include<iostream>
using namespace std;
// STATIC ALLOCATION
class StaticObject{
    //Class Defination
};

// DYNAMIC ALLOCATION
class DynamicObject{
    //Class defination
};

int main(){
    StaticObject obj1;//object created at compile time 
    DynamicObject *obj2 = new DynamicObject();
    delete obj2; // memory deallocation to prevent memory leaks
    return 0;
}