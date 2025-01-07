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
int main(){
    Student s1;
    s1.name = "Kartik";
    s1.roll_no = 235014;
    s1.marks = 450 ;

    Student s2 ;
    s2.name = "Anjali";
    s2.roll_no = 235020;
    s2.marks = 448;

    Student s3 ;
    s3.name = "Aditi";
    s3.roll_no = 235055;
    s3.marks = 436;

    print(s1);
    print(s2);
    print(s3);

    return 0;
}