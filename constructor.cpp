#include<iostream>
using namespace std;
class car{
    public:
        string make;
        string model;
        int year;

        // Default constructor
        car(){
            make  = "DefaultMake";
            model = "Default model";
            year = 2025;
            cout<<"DefaultMake: "<<make<<endl;
            cout<<"Default model: "<<model<<endl;
            cout<<"year: "<<year<<endl;
        }

        // Parametrized Constructor
        car(string mk, string md, int yr){
            make = mk;
            model = md;
            year = yr;
            cout<<"Parametrised Make: "<<make<<endl;
            cout<<"Parametrised Model: "<<model<<endl;
            cout<<"Parametrised year: "<<year<<endl;
        }

        // Copy Constructor 
        car(const car &car){
            make = car.make;
            model = car.model;
            year = car.year;
            cout<<"Copy Make: "<<make<<endl;
            cout<<"Copy Model: "<<model<<endl;
            cout<<"Copy year: "<<year<<endl;
        }
};
int main(){
    // using constructors to create objects
    car defaultCar; // default constructor called
    car CostumerCar("Toyota","Corolla",2015); // parametrised constructor called
    car CopiedCar = CostumerCar; //copy constructor called

    return 0;
}