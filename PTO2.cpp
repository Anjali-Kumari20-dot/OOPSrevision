#include<iostream>
using namespace std;
class student {
    public:
        static int rollNumber;
        static int getRollNumber() {
            return rollNumber;         
        }
};
int main(){
    student s;
    s.rollNumber = 101;
    cout<<s.getRollNumber()<<endl;
    return 0;
}
/*
static member functions can't directly access non-static members
*/