#include<iostream>
using namespace std;
class point{
private:
    int x, y;
public:
    point(int x = 0, int y = 0) : x(x), y(y) {}

    point operator+(const point &other) {
        point temp;
        temp.x = x + other.x ;
        temp.y = y + other.y ;
        return temp ;
    }
};
int main(){
    point p1(2, 3) ;
    point p2(4, 5) ;

    point p3 = p1 + p2 ; // operator '+' overloaded for point objects 
    
    return 0;
}