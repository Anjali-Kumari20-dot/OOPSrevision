#include<iostream>
using namespace std;
class Fraction {
    private:
        int num;
        int den;
    public :
        void display(){
            cout<<num<<"/"<<den<<endl;
        }
        Fraction(int num, int den){
            this->num = num;
            this->den = den;
        }
        // Fraction add(Fraction f){
        //     int newNum = this->num*f.den + this->den*f.num;
        //     int newDen = this->den*f.den;
        //     Fraction ans(newNum, newDen);
        //     return ans;
        // }
        Fraction operator+(Fraction f){
            int newNum = this->num*f.den + this->den*f.num;
            int newDen = this->den*f.den;
            Fraction ans(newNum, newDen);
            return ans;
        }
        Fraction operator-(Fraction f){
            int newNum = this->num*f.den - this->den*f.num;
            int newDen = this->den*f.den;
            Fraction ans(newNum, newDen);
            return ans;
        }
};
int main(){
    Fraction f1(2, 3);
    Fraction f2(3, 5);
    Fraction f3 = f1 + f2;
    f3.display();
    return 0;
}