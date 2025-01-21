#include<iostream>
using namespace std;
class Car {
    public:
        string make;
        string model;
        int year;
        
        // DEFAULT CONSTRUCTOR
        Car(){
            make  = "DefaultMake";
            model = "DefaultModel";
            year  = 2020;
        }

        // PARAMETERISED CONSTRUCTOR
        Car(string mk, string md, int yr) {
            make  = mk ;
            model = md ;
            year  = yr ;
        }

        // COPY CONSTRUCTOR
        Car(Car &c){
            make  = c.make  ;
            model = c.model ;
            year  = c.year  ;
        }
        void print(){
            cout<<"Make : "<<make<<" "<<"Model : "<<model<<" "<<"Year : "<<year<<endl;
        }
};
int main(){
    Car c1;
    c1.print() ;
    Car c2("Anjali", "Kumari", 7800);
    c2.print() ;
    Car c3(c2);
    c3.print();
    return 0;
}