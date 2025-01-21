#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
    private:
        string name ;
        int roll_no ;
        int marks ;
    public:
        void setValues(string name, int roll_no, int marks){
            this->name = name;
            this->roll_no = roll_no;
            this->marks = marks;
        }
        void Display(){
            cout<<"Student name : "<<name<<endl;
            cout<<"Student roll no : "<<roll_no<<endl;
            cout<<"Student marks : "<<marks<<endl;
        }
};
int main(){
    student s1;
    s1.setValues("Anjali", 20, 98);
    s1.Display();
    return 0;
}