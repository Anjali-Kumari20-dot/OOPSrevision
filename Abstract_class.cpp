#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0 ;
};
class Circle : public Shape {
public:
    void draw(){
        cout<<"Drawing circle....."<<endl;
    }
};
int main(){
    Circle circle ; //Objects can be created from derived classes
    circle.draw() ; //Invokes the overridden function in circle

    return 0;
}