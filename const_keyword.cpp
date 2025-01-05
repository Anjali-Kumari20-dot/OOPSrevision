#include<iostream>
using namespace std;
class Circle{
private:
    mutable double radius;//can be modified even in const member functions
public:
    double getRadius() const{
        cout<<"constant Member Function: Doesn't Modify object's state"<<endl;
        return radius;
    }
    Circle(double rd){
        radius = rd;
    }
    void displayCircle(const Circle &c){
        cout<<"Display circle properties without modifying it"<<endl;
    }
    void getArea() const{
        //const member function: doesn't modify object's state
        cout<<3.14*radius*radius<<endl;
    }
};
int main(){
    const Circle smallCircle(5.0);
    smallCircle.getArea();
    return 0;
}