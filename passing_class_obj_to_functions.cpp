#include<iostream>
using namespace std;
class my_class{
    // class defination
};

// PASS BY VALUE
void func_By_Value(my_class obj){
    // code manipulating the copy of obj
}

// PASS BY REFERENCE 
void func_By_Ref(my_class &obj){
    // code manipulating the original obj
}
int main(){
    my_class obj;
    func_By_Value(obj);// passing object by value
    // changes to obj in funcByValue won't affect the original obj
    return 0;
}