#include<iostream>
using namespace std ;
class Student {
    public:
        int rollNumber;
        int age;
};
int main(){
    Student s1;
    Student s2 = s1;
    s1.rollNumber = 101;
    s1.age = 20;
    cout<<s2.rollNumber<<" "<<s2.age;
    return 0;
}
/*
s2 created before modifications are made to s1, it will 
contain the default values .
*/