#include<iostream>
using namespace std;
//function to calculate area of square
int calculateArea(int sideLength){
    return sideLength*sideLength;
}

//Overloaded function to calculate area of rectangle
int calculateArea(int length, int width){
    return length*width;
}

//Overloaded function to calculate area of circle
int calculateArea(double radius){
    return 3.14*radius*radius;
}

int main(){
    int squareArea = calculateArea(5);
    int rectangleArea = calculateArea(4, 6);
    double circleArea = calculateArea(3.5);

    cout<<"area of square    : "<<squareArea<<endl;
    cout<<"area of rectangle : "<<rectangleArea<<endl;
    cout<<"area of circle    : "<<circleArea<<endl;
    return 0;
}