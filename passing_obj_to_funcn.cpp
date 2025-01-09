#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int roll_no;
    int marks;
};

void print(Student s){
    cout<<s.name<<" -> "<<s.roll_no<<" -> "<<s.marks<<endl;
}

void change_pass_by_value(Student s){
    s.name = "Vinita";
}

void change_pass_by_reference(Student& s){
    s.name = "Vinita";
}

int main(){
    Student s1;
    s1.name = "Rukshi";
    s1.roll_no = 235014;
    s1.marks = 450 ;

    print(s1);
    change_pass_by_value(s1); // Pass by value
    print(s1);
    change_pass_by_reference(s1);
    print(s1);

    // Student s2 ;
    // s2.name = "Anjali";
    // s2.roll_no = 235020;
    // s2.marks = 448;

    // Student s3 ;
    // s3.name = "Aditi";
    // s3.roll_no = 235055;
    // s3.marks = 436;

    // print(s1);
    // print(s2);
    // print(s3);

    return 0;
}