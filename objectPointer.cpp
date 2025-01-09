#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout<<this->name<<" -> "<<this->runs<<" -> "<<this->avg<<endl;
    }

};

void change(Cricketer* c){
    c->avg = 78.9; // (*c).avg = 78.9;
}

int main(){
    Cricketer c1("Virat Kohli", 23000, 55.2);
    Cricketer c2("Rohit Sharma", 23900, 47.8);

    Cricketer* p1 = &c1;
    cout<<p1->avg<<endl;
    change(&c1);
    c1.print();
    c2.print();
    return 0;
}