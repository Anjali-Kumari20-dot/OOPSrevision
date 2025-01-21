#include<iostream>
using namespace std ;
class Shape{
    public:
        // Pure virtual functions
        virtual void draw() = 0; 
        virtual double area() = 0;

        // Non-virtual function
        void printName() {
            cout<<"Shape : "<<endl;
        }

        // Virtual destructor
        virtual ~Shape() {}
};
class Circle : public Shape {
    private:
        double radius ;
    public:
        Circle(double r){
            radius = r;
        }
        void draw() override {
            cout<<"Drawing a circle. "<<endl;
        }
        double area() override {
            return 3.14*radius*radius;
        }
};
class Rectangle : public Shape {
    private:
        double length, width;
    public:
        Rectangle(double l, double w){
            length = l;
            width = w;
        }
        void draw() override {
            cout<<"Drawing a rectangle."<<endl;
        }
        double area(){
            return length*width;
        }
};
int main(){
    Circle c(5.0);
    Rectangle r(4.0,6.0);
    c.draw();
    cout<<"Area : "<<c.area()<<endl;
    r.draw();
    cout<<"Area : "<<r.area()<<endl;
    return 0;
}