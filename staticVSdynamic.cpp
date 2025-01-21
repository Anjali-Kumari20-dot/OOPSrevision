#include<iostream>
using namespace std;
// STATIC ALLOCATION
class StaticObject{
    //Class Defination
};
class student {
    public:
        string name;
        int roll_no;
        
        student(string n, int r){
            n = name;
            r = roll_no;
        }
        void display(){
            cout<<"Name     : "<<name<<endl;
            cout<<"Roll no. : "<<roll_no<<endl;
        }
};

// DYNAMIC ALLOCATION
class DynamicObject{
    //Class defination
};

int main(){
    StaticObject obj1;//object created at compile time 
    DynamicObject *obj2 = new DynamicObject();
    delete obj2; // memory deallocation to prevent memory leaks
    student *s1 = new student("Anjali", 20);
    s1->display();
    return 0;
}